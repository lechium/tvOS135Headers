/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMDefaults : NSObject
+(id)sharedInstance;
-(BOOL)getBoolFromDomain:(id)arg1 forKey:(id)arg2 ;
-(BOOL)getBoolFromDomain:(id)arg1 forKey:(id)arg2 defaultValue:(BOOL)arg3 ;
-(void)setBool:(BOOL)arg1 forDomain:(id)arg2 forKey:(id)arg3 ;
-(id)getValueFromDomain:(id)arg1 forKey:(id)arg2 ;
-(void)setValue:(id)arg1 forDomain:(id)arg2 forKey:(id)arg3 ;
@end

