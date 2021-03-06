/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMutableCuratedLibraryItemCountsController.h>
#import <libobjc.A.dylib/PXAssetsDataSourceManagerObserver.h>

@protocol OS_dispatch_queue, PXCuratedLibraryEventLogger;
@class NSObject, PXCuratedLibraryAssetsDataSourceManager, NSString;

@interface PXCuratedLibraryItemCountsController : PXObservable <PXMutableCuratedLibraryItemCountsController, PXAssetsDataSourceManagerObserver> {

	NSObject*<OS_dispatch_queue> _prepareCountsQueue;
	BOOL _isCountingAssetTypes;
	BOOL _hasUsableCounts;
	BOOL _waitingToPrepare;
	PXCuratedLibraryAssetsDataSourceManager* _assetsDataSourceManager;
	id<PXCuratedLibraryEventLogger> _eventLogger;
	SCD_Struct_PX139 _counts;

}

@property (assign,nonatomic) BOOL isCountingAssetTypes;                                                        //@synthesize isCountingAssetTypes=_isCountingAssetTypes - In the implementation block
@property (assign,nonatomic) BOOL hasUsableCounts;                                                             //@synthesize hasUsableCounts=_hasUsableCounts - In the implementation block
@property (assign,nonatomic) BOOL waitingToPrepare;                                                            //@synthesize waitingToPrepare=_waitingToPrepare - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryAssetsDataSourceManager * assetsDataSourceManager;              //@synthesize assetsDataSourceManager=_assetsDataSourceManager - In the implementation block
@property (nonatomic,retain) id<PXCuratedLibraryEventLogger> eventLogger;                                      //@synthesize eventLogger=_eventLogger - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PX139 counts;                                                        //@synthesize counts=_counts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(SCD_Struct_PX139)counts;
-(void)setCounts:(SCD_Struct_PX139)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(PXCuratedLibraryAssetsDataSourceManager *)assetsDataSourceManager;
-(id<PXCuratedLibraryEventLogger>)eventLogger;
-(id)initWithAssetsDataSourceManager:(id)arg1 ;
-(void)_updateCounts;
-(void)_updateEventLogging;
-(void)setEventLogger:(id<PXCuratedLibraryEventLogger>)arg1 ;
-(void)setHasUsableCounts:(BOOL)arg1 ;
-(void)prepareCountsIfNeeded;
-(BOOL)_prepareCounts;
-(void)_handlePreparationCompletion;
-(BOOL)isCountingAssetTypes;
-(void)setIsCountingAssetTypes:(BOOL)arg1 ;
-(BOOL)hasUsableCounts;
-(BOOL)waitingToPrepare;
-(void)setWaitingToPrepare:(BOOL)arg1 ;
@end

