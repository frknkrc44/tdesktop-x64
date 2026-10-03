# NFGram - A third-party Telegram client based on 64Gram and Telegram Desktop

## About Us

We forked 64Gram from [v1.1.58](https://github.com/TDesktop-x64/tdesktop/releases/tag/v1.1.58).

Our code has diverged since then, and while we share a common base, we have fixed bugs and implemented new ideas completely independently of Upstream. We have not performed an upstream merge since we started, pulling updates only from Telegram Desktop.

[![Preview of 64Gram][preview_image]][preview_image_url]

## Project Goal

- Offer a useful, actively maintained Telegram client with all changes being open source and verifiable.
- Leave a ready-to-use base open to contributors, so that a surprise discontinuation does not extinguish the project's flame.
- Incorporate useful features from other forks whenever possible and necessary
- Provide the user with a reliable and easy-to-use client
  
## [Features](features.md)

## Supported systems

Windows 7 and above

Linux 64 bit

macOS > 10.12 and above

The latest version is available on the [Release](https://github.com/TDesktop-x64/tdesktop/releases) page.

## Localization

If you want to translate this project, **Just Do It!**

Create a Pull Request: [Localization Repo](https://github.com/nubesurrealista/Localization).

**Template: [English template](https://github.com/nubesurrealista/Localization/blob/master/en.json).**

You can find a language ID on Telegram's log.txt

For example: `[2022.04.23 10:37:45] Current Language pack ID: de, Base ID: `

Then your language translation filename is `de.json` or something like that.

***Note: Ignore base ID(base ID translation - Work in progress)***

## Libraries used in this project

* Qt 6 ([LGPL](http://doc.qt.io/qt-6/lgpl.html)) and Qt 5.15 ([LGPL](http://doc.qt.io/qt-5/lgpl.html)) slightly patched
* OpenSSL 3.2.1 ([Apache License 2.0](https://openssl-library.org/source/license/apache-license-2.0.txt))
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

* [Windows (32-bit and 64-bit)][win]
* [macOS][mac]
* [GNU/Linux using Docker][linux]
  
## Credits

* [64Gram](https://github.com/TDesktop-x64/tdesktop) for its original base that allowed us to work on this
* [dic1911](https://github.com/dic1911) for Google Translate API code
* [nubesurrealista](https://github.com/nubesurrealista) for CI optimizations

The source code is published under GPLv3 with OpenSSL exception, the license is available [here][license].

[//]: # (LINKS)
[license]: LICENSE
[win]: docs/building-win.md
[mac]: docs/building-mac.md
[linux]: docs/building-linux.md
[preview_image]: https://github.com/TDesktop-x64/tdesktop/blob/dev/docs/assets/preview.png "Preview of 64Gram Desktop"
[preview_image_url]: https://raw.githubusercontent.com/TDesktop-x64/tdesktop/dev/docs/assets/preview.png
