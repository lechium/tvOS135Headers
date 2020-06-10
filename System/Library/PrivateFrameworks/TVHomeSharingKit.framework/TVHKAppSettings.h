/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingServices/TVHSSettings.h>

@class NSArray, NSMutableDictionary, TVHKMediaServerSettings;

@interface TVHKAppSettings : TVHSSettings {

	BOOL _allowDAAPServerDiscovery;
	long long _mediaRepeatMode;
	NSArray* _sortedMediaServers;
	NSMutableDictionary* _mediaServerByIdentifier;

}

@property (nonatomic,retain) NSArray * sortedMediaServers;                                                  //@synthesize sortedMediaServers=_sortedMediaServers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mediaServerByIdentifier;                                 //@synthesize mediaServerByIdentifier=_mediaServerByIdentifier - In the implementation block
@property (assign,nonatomic) BOOL allowDAAPServerDiscovery;                                                 //@synthesize allowDAAPServerDiscovery=_allowDAAPServerDiscovery - In the implementation block
@property (assign,nonatomic) long long mediaRepeatMode;                                                     //@synthesize mediaRepeatMode=_mediaRepeatMode - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mediaServers; 
@property (nonatomic,copy,readonly) TVHKMediaServerSettings * mostRecentlyModifiedMediaServer; 
+(id)sharedInstance;
+(id)_mediaServersSortedByModifiedDate:(id)arg1 ;
+(id)_readMediaServersFromPreferences:(id)arg1 ;
-(id)init;
-(id)_init;
-(void)_migrateSettingsIfNecessary;
-(NSMutableDictionary *)mediaServerByIdentifier;
-(NSArray *)sortedMediaServers;
-(void)_updateMediaServersWithBlock:(/*^block*/id)arg1 shouldNotify:(BOOL)arg2 ;
-(void)_writeMediaServersToPreferences;
-(void)setMediaServerByIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setSortedMediaServers:(NSArray *)arg1 ;
-(void)setAllowDAAPServerDiscovery:(BOOL)arg1 ;
-(void)setMediaRepeatMode:(long long)arg1 ;
-(NSArray *)mediaServers;
-(TVHKMediaServerSettings *)mostRecentlyModifiedMediaServer;
-(void)saveMediaServer:(id)arg1 ;
-(id)mediaServerForIdentifier:(id)arg1 ;
-(void)resetAccountRelatedSettings;
-(void)_refreshSettingsFromPreferencesAndShouldNotify:(BOOL)arg1 ;
-(BOOL)allowDAAPServerDiscovery;
-(long long)mediaRepeatMode;
@end

