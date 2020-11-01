#
#  Be sure to run `pod spec lint FrameworkTest.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  # ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  These will help people to find your library, and whilst it
  #  can feel like a chore to fill in it's definitely to your advantage. The
  #  summary should be tweet-length, and the description more in depth.
  #

  spec.name         = "TDSGlobalFrameworkTest"
  spec.version      = "0.0.3"
  spec.summary      = "Test TDSGlobalFrameworks"
  spec.description  = <<-DESC
  Test for TDSGlobalFrameworks.
                   DESC

  spec.homepage     = "https://github.com/horizon554/FrameworkTest"
  spec.license      = { :type => "MIT", :file => "LICENSE" }


  spec.author       = { "jiangjiahao" => "jiangjiahao@taptap.com" }

  spec.platform     = :ios, "10.0"

  spec.source       = { :git => "https://github.com/horizon554/FrameworkTest.git", :tag => "#{spec.version}" }


  # ――― Source Code ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  CocoaPods is smart about how it includes source code. For source files
  #  giving a folder will include any swift, h, m, mm, c & cpp files.
  #  For header files it will include any header in the folder.
  #  Not including the public_header_files will make all headers public.
  #

  spec.source_files  = "TDSGlobalSDK/TDSSDK/TDSGlobalSDKCoreKit.framework/Headers/*.{h}", "TDSGlobalSDK/TDSSDK/TDSGlobalSDKLoginKit.framework/Headers/*.{h}","TDSGlobalSDK/TDSSDK/TDSGlobalSDKIAPKit.framework/Headers/*.{h}"
  # spec.exclude_files = "Classes/Exclude"
  spec.vendored_frameworks = "TDSGlobalSDK/TDSSDK/*.{framework}","TDSGlobalSDK/Libs/Adjust/*.{framework}","TDSGlobalSDK/Libs/AppsFlyer/*.{framework}","TDSGlobalSDK/Libs/TapDB/*.{framework}","TDSGlobalSDK/Libs/TapTap/*.{framework}"
  # spec.public_header_files = "Classes/**/*.h"


  # ――― Resources ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  A list of resources included with the Pod. These are copied into the
  #  target bundle with a build phase script. Anything else will be cleaned.
  #  You can preserve files from being cleaned, please don't preserve
  #  non-essential files like tests, examples and documentation.
  #

    spec.resource  = "TDSGlobalSDK/TDSSDK/TDSGlobalSDKResources.bundle"
  # spec.resources = "Resources/*.png"

  # spec.preserve_paths = "FilesToSave", "MoreFilesToSave"


  # ――― Project Linking ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  Link your library with frameworks, or libraries. Libraries do not include
  #  the lib prefix of their name.
  #

  # spec.framework  = "SomeFramework"
  spec.frameworks = "AdSupport", "LocalAuthentication","AuthenticationServices","SystemConfiguration","Accelerate","Webkit","SafariServices"

    spec.library   = "c++"
  # spec.libraries = "iconv", "xml2"


  # ――― Project Settings ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  If your library depends on compiler flags you can set them in the xcconfig hash
  #  where they will only apply to your library. If you depend on other Podspecs
  #  you can include multiple dependencies to ensure it works.

  # spec.requires_arc = true

  # spec.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  spec.dependency "FBSDKCoreKit", "~> 7.1.1"
    spec.dependency "FBSDKLoginKit", "~> 7.1.1"
  spec.dependency "FBSDKShareKit", "~> 7.1.1"
  
  
  spec.dependency "GoogleSignIn"
    spec.dependency "Firebase/Analytics"
    spec.dependency "FirebaseMessaging"
end
