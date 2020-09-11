Pod::Spec.new do |s|
  s.name         = "JMSmartUtils"
  s.version      = "1.0.5"
  s.summary      = "Provide basic functions and extensions for Jimi iOS Platform."

  s.description  = <<-DESC
  Provide basic functions and extensions for Jimi iOS Platform.
                   DESC

  s.homepage     = "https://github.com/JimiPlatform/JMSmartUtils"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "Eafy" => "lizhijian_21@163.com" }
  s.platform     = :ios, "8.0"
  #s.source = { :http => "http://10.0.10.85/apppublic/jimirepofile/raw/master/#{s.name}/#{s.name}-#{s.version}.zip?inline=false", :type => "zip" }
  s.source = { :git => "https://github.com/JimiPlatform/JMSmartUtils.git", :tag => "#{s.version}" }

  s.ios.vendored_frameworks = "JMSmartUtils.framework"
  s.frameworks = 'GLKit','AVFoundation','CoreLocation','AssetsLibrary','SystemConfiguration','Photos','Security','UIKit','CoreText'
  s.libraries = "c++"
  s.requires_arc = true

end

#打包命令
#pod package JMSmartUtils.podspec --force --no-mangle --exclude-deps

#推送命令
#pod trunk push JMSmartUtils.podspec --verbose --allow-warnings --use-libraries

