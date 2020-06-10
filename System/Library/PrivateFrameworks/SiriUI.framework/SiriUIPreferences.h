/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults;

@interface SiriUIPreferences : NSObject {

	NSUserDefaults* _userDefaults;
	long long _numberOfTimesSiriCardShown;
	BOOL _voiceRequestMadeWhileInCarDND;

}
+(id)sharedPreferences;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 ;
-(long long)integerForKey:(id)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(BOOL)voiceRequestMadeWhileInCarDND;
-(long long)numberOfTimesCarDNDSiriCardShown;
-(void)setNumberOfTimesCarDNDSiriCardShown:(long long)arg1 ;
-(void)setVoiceRequestMadeWhileInCarDND:(BOOL)arg1 ;
@end

