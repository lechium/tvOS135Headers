/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VCUserDefaults;

@interface VCShortcutsAssetUpdater : NSObject {

	VCUserDefaults* _defaults;

}

@property (nonatomic,readonly) VCUserDefaults * defaults;              //@synthesize defaults=_defaults - In the implementation block
+(BOOL)updateAsset;
+(void)scheduleAssetUpdate;
-(id)init;
-(VCUserDefaults *)defaults;
-(BOOL)updateAsset;
-(BOOL)downloadAsset:(id)arg1 ;
-(id)fetchLatestAsset;
-(BOOL)downloadAssetCatalog;
-(BOOL)updateVoiceShortcutsBlacklistWithAsset:(id)arg1 ;
@end

