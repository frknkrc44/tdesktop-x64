/*
This file is part of 64Gram Desktop fork,
the unofficial app based on Telegram Desktop.
For license and copyright information please follow this link:
https://github.com/frknkrc44/tdesktop-x64/blob/dev/LEGAL
*/

#include "google_translate.h"
#include "core/application.h"
#include "core/core_settings.h"

GTranslate::GTranslate() {
    manager = new QNetworkAccessManager(this);
    languageCodes = new std::vector<QString>{
        "sq", "ar", "am", "az", "ga", "et", "eu", "be", "bg", "is", "pl", "bs", "fa",
        "af", "da", "de", "ru", "fr", "tl", "fi", "fy", "km", "ka", "gu", "kk", "ht",
        "ko", "ha", "nl", "ky", "gl", "ca", "cs", "kn", "co", "hr", "ku", "la", "lv",
        "lo", "lt", "lb", "ro", "mg", "mt", "mr", "ml", "ms", "mk", "mi", "mn", "bn",
        "my", "hmn", "xh", "zu", "ne", "no", "pa", "pt", "ps", "ny", "ja", "sv", "sm",
        "sr", "st", "si", "eo", "sk", "sl", "sw", "gd", "ceb", "so", "tg", "te", "ta",
        "th", "tr", "cy", "ur", "uk", "uz", "es", "iw", "el", "haw", "sd", "hu", "sn",
        "hy", "ig", "it", "yi", "hi", "su", "id", "jw", "en", "yo", "vi", "zh-TW", "zh-CN", "zh",
    };
}
std::string GTranslate::replaceLangCode(const std::string& lang) {
    static const std::map<std::string, std::string> langMap = {
        {"zh", "zh-CN"},
    };

    auto it = langMap.find(lang);
    if (it != langMap.end()) {
        return it->second;
    }
    return lang;
}

void GTranslate::translate(QString from, QString to, QString query, TranslationCallback onFinished) {
    const auto proxy = Core::App().settings().proxy().isEnabled() ? Core::App().settings().proxy().selected() : MTP::ProxyData();
	if (proxy.type == MTP::ProxyData::Type::Socks5 || proxy.type == MTP::ProxyData::Type::Http) {
		QNetworkProxy LocaleProxy = MTP::ToNetworkProxy(MTP::ToDirectIpProxy(proxy));
		(*manager).setProxy(LocaleProxy);
	}

    std::stringstream ss;
    ss  << "https://translate.google.com/translate_a/single?dj=1"
        << "&q=" << QUrl::toPercentEncoding(query).toStdString()
        << "&sl=" << from.toStdString()
        << "&tl=" << replaceLangCode(to.toStdString())
        << "&ie=UTF-8&oe=UTF-8&client=at&dt=t&otf=2";

    auto url = ss.str();

    auto request = QNetworkRequest(QUrl(QString::fromStdString(url)));
    auto setHeader = [&request](QString key, QString value) {
        request.setRawHeader(key.toUtf8(), value.toUtf8());
    };

    setHeader("User-Agent", "Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:140.0) Gecko/20100101 Firefox/140.0");
    setHeader("Accept", "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,*/*;q=0.8");
    setHeader("Accept-Language", "en-US");
    setHeader("Alt-Used", "translate.google.com");
    setHeader("Connection", "keep-alive");
    setHeader("Upgrade-Insecure-Requests", "1");
    setHeader("Sec-Fetch-Dest", "document");
    setHeader("Sec-Fetch-Mode", "navigate");
    setHeader("Sec-Fetch-Site", "cross-site");

    QNetworkReply *reply = manager->get(request);
    connect(reply, &QNetworkReply::finished, this, [this, reply, onFinished]() {
            if (reply->error() == QNetworkReply::NoError) {
                auto all = reply->readAll();
                auto json = QJsonDocument::fromJson(all);
                auto sentences = json["sentences"];
                if (sentences.isNull() || sentences.isUndefined()) {
                    onFinished("error: 'sentences' is null or undefined");
                    return;
                }

                std::stringstream out;
                auto sentencesArray = sentences.toArray();
                auto sentencesSize = sentencesArray.size();
                for (int i = 0; i < sentencesSize; i++) {
                    auto sentence = sentencesArray[i];
                    auto sentenceObj = sentence.toObject();

                    out << sentenceObj["trans"].toString().toStdString();
                }

                onFinished(QString::fromStdString(out.str()));
            } else {
                onFinished(reply->errorString());
            }
            reply->deleteLater();
        }
    );
}