/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTraffic/ATSessionTask.h>
#import <libobjc.A.dylib/ATAssetLinkControllerObserver.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableOrderedSet, NSMutableSet, NSString, NSObject, NSPredicate, ATAssetLinkController;

@interface ATAssetSessionTask : ATSessionTask <ATAssetLinkControllerObserver> {

	NSMutableOrderedSet* _remainingAssets;
	NSMutableSet* _failedAssets;
	NSMutableSet* _currentAssets;
	NSString* _dataClass;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _cancelAtStart;
	double _retryInterval;
	NSObject*<OS_dispatch_source> _retryTimer;
	BOOL _waitingForRetry;
	BOOL _retryUntilFinished;
	NSPredicate* _filterPredicate;
	/*^block*/id _shouldRetryAssetBlock;
	ATAssetLinkController* _assetLinkController;
	unsigned long long _failedAssetsCount;

}

@property (nonatomic,copy,readonly) NSString * dataClass;                              //@synthesize dataClass=_dataClass - In the implementation block
@property (nonatomic,copy) NSPredicate * filterPredicate;                              //@synthesize filterPredicate=_filterPredicate - In the implementation block
@property (nonatomic,copy) id shouldRetryAssetBlock;                                   //@synthesize shouldRetryAssetBlock=_shouldRetryAssetBlock - In the implementation block
@property (nonatomic,retain) ATAssetLinkController * assetLinkController;              //@synthesize assetLinkController=_assetLinkController - In the implementation block
@property (assign,nonatomic) BOOL retryUntilFinished;                                  //@synthesize retryUntilFinished=_retryUntilFinished - In the implementation block
@property (nonatomic,readonly) unsigned long long failedAssetsCount;                   //@synthesize failedAssetsCount=_failedAssetsCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)debugDescription;
-(id)init;
-(void)cancel;
-(void)resume;
-(void)suspend;
-(void)start;
-(id)remainingAssets;
-(NSString *)dataClass;
-(NSPredicate *)filterPredicate;
-(id)sessionGroupingKey;
-(void)setFilterPredicate:(NSPredicate *)arg1 ;
-(id)initWithAssets:(id)arg1 ;
-(void)_finishAsset:(id)arg1 withError:(id)arg2 ;
-(void)assetLinkController:(id)arg1 didUpdateAsset:(id)arg2 ;
-(void)assetLinkController:(id)arg1 didFinishAsset:(id)arg2 ;
-(id)initWithDataClass:(id)arg1 ;
-(void)setRetryUntilFinished:(BOOL)arg1 ;
-(void)setShouldRetryAssetBlock:(id)arg1 ;
-(ATAssetLinkController *)assetLinkController;
-(id)shouldRetryAssetBlock;
-(void)cancelAllAssets;
-(void)setAssetLinkController:(ATAssetLinkController *)arg1 ;
-(BOOL)retryUntilFinished;
-(unsigned long long)failedAssetsCount;
@end

