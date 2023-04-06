Pod::Spec.new do |s|
    s.name         = 'SHExtension'
    s.version      = '1.6.0'
    s.summary      = '常用类别方法，拓展'
    s.license      = 'MIT'
    s.authors      = { 'CCSH' => '624089195@qq.com' }
    s.platform     = :ios, '8.0'
    s.requires_arc = true
    s.homepage     = 'https://github.com/CCSH/#{s.name}'
    s.source       = { :git => 'https://github.com/CCSH/#{s.name}.git', :tag => s.version }
    s.source_files = '#{s.name}',
    #s.exclude_files = '',
    s.frameworks   = 'UIKit'
    s.public_header_files = '#{s.name}/#{s.name}.h'

    #部分功能
    s.subspec 'NSString' do |ss|
        ss.dependency 'GTMBase64'
        ss.source_files = '#{s.name}/NSString/*.{h,m}'
    end

    s.subspec 'UIButton' do |ss|
        ss.source_files = '#{s.name}/UIButton/*.{h,m}'
    end

    s.subspec 'UIColor' do |ss|
        ss.source_files = '#{s.name}/UIColor/*.{h,m}'
    end

    s.subspec 'UIImage' do |ss|
        ss.source_files = '#{s.name}/UIImage/*.{h,m}'
    end

    s.subspec 'UIImageView' do |ss|
        ss.source_files = '#{s.name}/UIImageView/*.{h,m}'
    end

    s.subspec 'UIView' do |ss|
        ss.source_files = '#{s.name}/UIView/*.{h,m}'
    end

    s.subspec 'Tool' do |ss|
        ss.source_files = '#{s.name}/Tool/*.{h,m}'
    end
    
    s.subspec 'Safe' do |ss|
        ss.source_files = '#{s.name}/Safe/*.{h,m}'
    end

    s.subspec 'Exception' do |ss|
        ss.source_files = '#{s.name}/Exception/*.{h,m}'
    end
    
    s.subspec 'UIViewController' do |ss|
        ss.source_files = '#{s.name}/UIViewController/*.{h,m}'
    end
    
    s.subspec 'UIScrollView' do |ss|
        ss.source_files = '#{s.name}/UIScrollView/*.{h,m}'
    end
    
end
