/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface CFMorphunAssetsManager : NSObject {

	NSObject*<OS_dispatch_queue> queue;

}
+(id)sharedMorphunAssetsManager;
-(id)init;
-(void)cancelDownload:(id)arg1 ;
-(void)triggerMorphunAssetsManagement;
-(void)downloadAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)downloadAssetsForAssetType:(id)arg1 forLanguage:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)replaceLanguageCodeFormat:(id)arg1 ;
-(id)downloadedLocalAsset:(id)arg1 forLanguage:(id)arg2 error:(id*)arg3 ;
-(void)downloadAssets:(id)arg1 language:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)morphunAssetsVersion:(id)arg1 forLanguage:(id)arg2 ;
-(id)morphunAssetsPathForLanguage:(id)arg1 ;
-(void)downloadMorphunAssetsForLanguage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)registerPath:(id)arg1 withLanguage:(id)arg2 ;
@end

