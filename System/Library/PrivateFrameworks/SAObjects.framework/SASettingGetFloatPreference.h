/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingGetFloat.h>

@class NSString;

@interface SASettingGetFloatPreference : SASettingGetFloat

@property (nonatomic,copy) NSString * settingKey; 
+(id)getFloatPreference;
+(id)getFloatPreferenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)settingKey;
-(void)setSettingKey:(NSString *)arg1 ;
@end

