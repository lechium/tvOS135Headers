/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DeviceCheckInternal.framework/DeviceCheckInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DCAssetFetcher : NSObject
+(id)sharedFetcher;
-(void)initiateMetadataFetchIgnoringCachesWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchAssetWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_queryMetadataWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_assetQuery;
-(void)_handleMissingMetadataWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleSuccessForQuery:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_validateAsset:(id)arg1 error:(id*)arg2 ;
-(void)fetchPublicKeyAssetWithCompletion:(/*^block*/id)arg1 ;
@end

