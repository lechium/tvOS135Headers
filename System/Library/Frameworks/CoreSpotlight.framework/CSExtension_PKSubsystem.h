/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKModularService.h>

@class NSString;

@interface CSExtension_PKSubsystem : NSObject <PKModularService>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)initForPlugInKit;
-(void)endUsing:(id)arg1 ;
-(void)beginUsing:(id)arg1 withBundle:(id)arg2 ;
-(id)principleClassFromDictionary:(id)arg1 ;
@end
