/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVSDocumentPostprocessor.h>

@class NSString;

@interface TVSDocumentPlistDeserializationPostProcessor : NSObject <TVSDocumentPostprocessor>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)postprocessorName;
-(id)processDocument:(id)arg1 forResponse:(id)arg2 error:(id*)arg3 ;
@end

