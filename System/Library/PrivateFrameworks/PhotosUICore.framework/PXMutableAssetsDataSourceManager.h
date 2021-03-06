/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXMutableAssetsDataSourceManager <NSObject>
@property (assign,nonatomic) long long backgroundFetchOriginSection; 
@required
-(void)setCurationEnabled:(BOOL)arg1 forAssetCollection:(id)arg2;
-(BOOL)forceAccurateAllSectionsIfNeeded;
-(BOOL)forceAccurateSectionsIfNeeded:(id)arg1;
-(BOOL)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;
-(id)pauseChangeDeliveryWithTimeout:(double)arg1;
-(void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1;
-(void)startBackgroundFetchIfNeeded;
-(long long)backgroundFetchOriginSection;
-(void)setBackgroundFetchOriginSection:(long long)arg1;

@end

