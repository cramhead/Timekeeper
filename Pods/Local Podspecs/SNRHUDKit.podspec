Pod::Spec.new do |s|
    s.name = 'SNRHUDKit'
    s.version = '0.1.0'
    s.license = 'MIT'
    s.author = { 'Indragie Karunaratne' => 'i@indragie.com', 'Paul Schoenfelder' => 'paulschoenfelder@gmail.com' }
    s.homepage = 'https://github.com/bitwalker/SNRHUDKit'
    s.source = { :git => 'https://github.com/bitwalker/SNRHUDKit.git', :tag => "#{s.version.to_s}" }
    s.source_files = 'SNRHUDKit/Classes/*.{h,m}'
    s.requires_arc = true
end
