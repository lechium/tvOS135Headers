/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/Frameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface TTSVoiceAssetManager : NSObject {

	NSMutableDictionary* _resourceCache;

}
+(id)sharedInstance;
+(id)voiceResourceFromAsset:(id)arg1 ;
+(id)_nonLocalMobileAssetQueue;
+(long long)_downloadCatalogForAssetType:(id)arg1 ;
+(id)queryForVoiceResourceAsset:(id)arg1 localOnly:(BOOL)arg2 ;
+(id)_getLatestAssetFromArray:(id)arg1 ;
+(id)voiceResourceAssetForLanguage:(id)arg1 ;
-(id)resourcePathForLanguage:(id)arg1 gender:(long long)arg2 footprint:(long long)arg3 voiceName:(id)arg4 voiceType:(long long)arg5 outAsset:(id*)arg6 ;
-(id)_voiceAssetQueryForVoiceName:(id)arg1 language:(id)arg2 gender:(long long)arg3 footprint:(long long)arg4 version:(id)arg5 voiceType:(long long)arg6 ;
-(id)_voiceAssetQueryResultsPredicateForLanguage:(id)arg1 voiceType:(long long)arg2 ;
-(BOOL)_assetExistsOnDisk:(id)arg1 ;
-(id)_voiceAssetForMAAsset:(id)arg1 voiceType:(long long)arg2 ;
-(id)getPreinstalledGryphonAssetsForLanguage:(id)arg1 ;
-(id)getPreinstalledNeuralAssetsForLanguage:(id)arg1 ;
-(id)convertVSVoiceAssetSelectionsToTTSVoiceAssets:(id)arg1 language:(id)arg2 ;
-(void)getCustomVoiceAssetsLocalOnly:(BOOL)arg1 language:(id)arg2 voiceType:(long long)arg3 reply:(/*^block*/id)arg4 ;
@end
