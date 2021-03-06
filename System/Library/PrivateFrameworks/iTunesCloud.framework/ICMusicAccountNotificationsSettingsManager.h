/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICMusicAccountNotificationsSettingsManager : NSObject
+(id)sharedManager;
-(id)storeRequestContext;
-(id)_getSwitchesDependingOnSubscriptionStatus:(id)arg1 withResponse:(id)arg2 togglingSwitchesToValue:(BOOL)arg3 ;
-(void)getAccountNotificationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setAccountNotificationsArtistContentFeature:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setCachedAccountNotificationsShowInLibraryEnabled:(BOOL)arg1 ;
-(id)cachedAccountNotificationsShowInLibrarySwitch;
@end

