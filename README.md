# 64Gram – Based on [Telegram Desktop](https://github.com/telegramdesktop/tdesktop)

The source code is published under GPLv3 with OpenSSL exception, the license is available [here][license].

[![Preview of 64Gram][preview_image]][preview_image_url]

## Project Goal

Provide Windows 64bit build with some enhancements.

~~Cause official Telegram Desktop do not provide Windows 64bit build, so [Project TDesktop x64](https://github.com/TDesktop-x64) is aimed at provide Windows native x64 build(with few enhancements) to everybody.~~

## Roadmap

No Roadmap? Yes.

## [Features](features.md)

## Supported systems

Windows 7 and above

Linux 64 bit

macOS > 10.12 and above

The latest version is available on the [Release](https://github.com/TDesktop-x64/tdesktop/releases) page.

## Localization

If you want to translate this project, **Just Do It!**

Create a Pull Request: [Localization Repo](https://github.com/TDesktop-x64/Localization).

**Here is a project [translation template](https://github.com/TDesktop-x64/Localization/blob/master/en.json).**

You can find a language ID on Telegram's log.txt

For example: `[2022.04.23 10:37:45] Current Language pack ID: de, Base ID: `

Then your language translation filename is `de.json` or something like that.

***Note: Ignore base ID(base ID translation - Work in progress)***

## Libraries used in this project

* Qt 6 ([LGPL](http://doc.qt.io/qt-6/lgpl.html)) and Qt 5.15 ([LGPL](http://doc.qt.io/qt-5/lgpl.html)) slightly patched
* OpenSSL 3.2.1 ([Apache License 2.0](https://www.openssl.org/source/apache-license-2.0.txt))
* WebRTC ([New BSD License](https://github.com/desktop-app/tg_owt/blob/master/LICENSE))
* zlib ([zlib License](http://www.zlib.net/zlib_license.html))
* LZMA SDK 9.20 ([public domain](http://www.7-zip.org/sdk.html))
* liblzma ([public domain](http://tukaani.org/xz/))
* Google Breakpad ([License](https://chromium.googlesource.com/breakpad/breakpad/+/master/LICENSE))
* Google Crashpad ([Apache License 2.0](https://chromium.googlesource.com/crashpad/crashpad/+/master/LICENSE))
* GYP ([BSD License](https://github.com/bnoordhuis/gyp/blob/master/LICENSE))
* Ninja ([Apache License 2.0](https://github.com/ninja-build/ninja/blob/master/COPYING))
* OpenAL Soft ([LGPL](https://github.com/kcat/openal-soft/blob/master/COPYING))
* Opus codec ([BSD License](http://www.opus-codec.org/license/))
* FFmpeg ([LGPL](https://www.ffmpeg.org/legal.html))
* Guideline Support Library ([MIT License](https://github.com/Microsoft/GSL/blob/master/LICENSE))
* Range-v3 ([Boost License](https://github.com/ericniebler/range-v3/blob/master/LICENSE.txt))
* Open Sans font ([Apache License 2.0](http://www.apache.org/licenses/LICENSE-2.0.html))
* Vazirmatn font ([SIL Open Font License 1.1](https://github.com/rastikerdar/vazirmatn/blob/master/OFL.txt))
* Emoji alpha codes ([MIT License](https://github.com/emojione/emojione/blob/master/extras/alpha-codes/LICENSE.md))
* xxHash ([BSD License](https://github.com/Cyan4973/xxHash/blob/dev/LICENSE))
* QR Code generator ([MIT License](https://github.com/nayuki/QR-Code-generator#license))
* CMake ([New BSD License](https://github.com/Kitware/CMake/blob/master/Copyright.txt))
* Hunspell ([LGPL](https://github.com/hunspell/hunspell/blob/master/COPYING.LESSER))
* Ada ([Apache License 2.0](https://github.com/ada-url/ada/blob/main/LICENSE-APACHE))

## Build instructions

* Windows [(32-bit)][win32] [(64-bit)][win64]
* [macOS][mac]
* [GNU/Linux using Docker][linux]

## Links

* [Official Telegram Channel](https://t.me/tg_x64)
* [Official discussion group](https://t.me/tg_x64_chat)

## Credits

* [dic1911](https://github.com/dic1911) for Google Translate API code
* [nubesurrealista](https://github.com/nubesurrealista) for CI optimizations

## Sponsors
<a href="https://www.jetbrains.com/?from=64Gram">
     <img src="https://www.jetbrains.com/icon-512.png"  alt="JetBrains" width="150"/>
</a>

[//]: # (LINKS)
[license]: LICENSE
[win32]: docs/building-win.md
[win64]: docs/building-win-x64.md
[mac]: docs/building-mac.md
[linux]: docs/building-linux.md
[preview_image]: https://github.com/TDesktop-x64/tdesktop/blob/dev/docs/assets/preview.png "Preview of 64Gram Desktop"
[preview_image_url]: https://raw.githubusercontent.com/TDesktop-x64/tdesktop/dev/docs/assets/preview.png
