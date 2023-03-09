# Apple-SwiftPackage-KochavaAdNetwork

[![Releases](https://img.shields.io/github/v/release/kochava/Apple-SwiftPackage-KochavaAdNetwork?include_prereleases&sort=semver)](https://github.com/Kochava/Apple-SwiftPackage-KochavaAdNetwork/releases)

<img src="https://storage.googleapis.com/kochava-web/2016/07/Kochava-horizontal-black-800x154.png" width="260" />

## Deprecation Advisory

The contents of optional module KochavaAdNetwork were merged into primary module KochavaTracker in v6.0.0.  Module KochavaAdNetwork is now no longer needed, as its symbols are now always available from within module KochavaTracker.  In the meantime if you have this module in your project it will have no other adverse effects.  Module KochavaAdNetwork should be now removed from your build processes- including any Swift Package references, Cocoapods references, target inclusions, imports, registration calls, etc.  Thank you!

## KochavaAdNetwork

The KochavaAdNetwork swift package is an optional module within the Kochava SDK providing advertising network support, and is a high-level interface to Apple's SKAdNetwork.

The Kochava SDK is a lightweight and easy to integrate SDK written in Swift, providing first-class integration with Kochava’s industry leading mobile attribution and analytics platform.

## Built on

* Xcode 14.1

## Platforms

* iOS 12.4
* macOS 10.14
* tvOS 12.4
* watchOS 5.2

## Dependencies

* [KochavaCore](https://github.com/Kochava/Apple-SwiftPackage-KochavaCore) [![Download](https://img.shields.io/github/v/release/kochava/Apple-SwiftPackage-KochavaCore?include_prereleases&sort=semver)](https://github.com/Kochava/Apple-SwiftPackage-KochavaCore/releases)

## Integration

KochavaAdNetwork is a Swift package.  To install it, simply add this package as a dependency.

In Xcode, see File > Swift Packages > Add Package Dependency ... > and enter the URL for this package repository.

[Kochava Apple SDK Integration](https://support.kochava.com/sdk-integration/ios-sdk-integration/)

## Author

Kochava, support@kochava.com

## License

KochavaAdNetwork is available under the [Kochava Terms of Service](https://www.kochava.com/terms-of-service/). See the LICENSE file for more info.
