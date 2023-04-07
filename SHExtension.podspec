Pod::Spec.new do |s|
    s.name         = 'SHExtension'
    s.version      = '1.6.1'
    
    s.platform     = :ios, '11.0'
    
    s.requires_arc = true
    s.license      = 'MIT'
    s.summary      = '常用类别方法，拓展'
    s.authors      = { 'CCSH' => '624089195@qq.com' }
    s.homepage     = 'https://github.com/CCSH/SHExtension'
    s.source       = { :git => 'https://github.com/CCSH/SHExtension.git', :tag => s.version.to_s }
    
    s.source_files = 'SHExtension/**/*'
    #s.exclude_files = ''
    s.public_header_files = 'SHExtension/SHExtension.h'
    
    #部分功能
    s.subspec 'NSString' do |ss|
        ss.dependency 'GTMBase64'
        ss.source_files = 'SHExtension/NSString/*.{h,m}'
    end

    s.subspec 'UIButton' do |ss|
        ss.source_files = 'SHExtension/UIButton/*.{h,m}'
    end

    s.subspec 'UIColor' do |ss|
        ss.source_files = 'SHExtension/UIColor/*.{h,m}'
    end

    s.subspec 'UIImage' do |ss|
        ss.source_files = 'SHExtension/UIImage/*.{h,m}'
    end

    s.subspec 'UIImageView' do |ss|
        ss.source_files = 'SHExtension/UIImageView/*.{h,m}'
    end

    s.subspec 'UIView' do |ss|
        ss.source_files = 'SHExtension/UIView/*.{h,m}'
    end

    s.subspec 'Tool' do |ss|
        ss.source_files = 'SHExtension/Tool/*.{h,m}'
    end
    
    s.subspec 'Safe' do |ss|
        ss.source_files = 'SHExtension/Safe/*.{h,m}'
    end

    s.subspec 'Exception' do |ss|
        ss.source_files = 'SHExtension/Exception/*.{h,m}'
    end
    
    s.subspec 'UIViewController' do |ss|
        ss.source_files = 'SHExtension/UIViewController/*.{h,m}'
    end
    
    s.subspec 'UIScrollView' do |ss|
        ss.source_files = 'SHExtension/UIScrollView/*.{h,m}'
    end
    
end
