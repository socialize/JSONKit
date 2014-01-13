Pod::Spec.new do |s|
  s.name     = 'SZJSONKit'
  s.version  = '1.4'
  s.license  = 'BSD / Apache License, Version 2.0'
  s.summary  = 'A Very High Performance Objective-C JSON Library.'
  s.homepage = 'https://github.com/johnezang/JSONKit'
  s.author   = 'John Engelhart'
  #s.source   = { :git => 'https://github.com/johnezang/JSONKit.git', :tag => 'v1.4' }
  s.source   = { :path => '.'}
  s.header_dir   =  'JSONKit'

  s.source_files = 'JSONKit.{h,m}', 'hide_symbols_jsonkit.h'
  s.prefix_header_file = 'JSONKit/JSONKit-Prefix.pch'
  s.xcconfig     = { 'CLANG_WARN_DIRECT_OBJC_ISA_USAGE' => 'YES' }
end