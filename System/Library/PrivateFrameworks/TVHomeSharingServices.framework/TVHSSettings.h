/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/TVHomeSharingServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVSPreferences;

@interface TVHSSettings : NSObject {

	id _preferencesDomainObserver;
	TVSPreferences* _preferences;

}

@property (nonatomic,retain) id preferencesDomainObserver;              //@synthesize preferencesDomainObserver=_preferencesDomainObserver - In the implementation block
@property (nonatomic,retain) TVSPreferences * preferences;              //@synthesize preferences=_preferences - In the implementation block
-(id)init;
-(void)dealloc;
-(TVSPreferences *)preferences;
-(void)setPreferences:(TVSPreferences *)arg1 ;
-(id)initWithPreferencesDomain:(id)arg1 ;
-(void)_updateSettingWithBlock:(/*^block*/id)arg1 shouldNotify:(BOOL)arg2 forKey:(id)arg3 ;
-(void)_refreshSettingsFromPreferencesAndShouldNotify:(BOOL)arg1 ;
-(id)preferencesDomainObserver;
-(void)setPreferencesDomainObserver:(id)arg1 ;
@end

