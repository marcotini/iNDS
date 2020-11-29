# Uncomment the next line to define a global platform for your project
platform :ios, '9.0'

target 'DeSmuME-OpenEmu' do
  # Uncomment this line if you're using Swift or would like to use dynamic frameworks
  # use_frameworks!

  # Pods for DeSmuME

end

target 'iNDS' do
  # Uncomment the next line if you're using Swift or would like to use dynamic frameworks
  # use_frameworks!

  # Pods for iNDS
  pod 'ObjectiveDropboxOfficial', '~> 3.10.0'
  pod 'SCLAlertView-Objective-C', '~> 1.1'
  pod 'UnrarKit', '~> 2.6'
  pod 'MHWDirectoryWatcher', :git => 'https://github.com/hwaxxer/MHWDirectoryWatcher.git', :tag => '0.0.8'
  pod 'SDWebImage', '~> 4.0'
  pod 'FileMD5Hash', '~> 2.0'
end


# inhibit_all_warnings! because there are too many

post_install do |installer|
    installer.pods_project.targets.each do |target|
        target.build_configurations.each do |config|
            config.build_settings['GCC_WARN_INHIBIT_ALL_WARNINGS'] = "YES"
        end
    end
end
