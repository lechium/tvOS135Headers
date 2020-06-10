/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface MiroCloudDownloader : NSObject {

	float _progress;
	/*^block*/id _progressBlock;
	/*^block*/id _itemCompletedBlock;
	double _totalInitialDownloadSize;
	NSMutableArray* _requests;

}

@property (nonatomic,retain) NSMutableArray * requests;                                      //@synthesize requests=_requests - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> cancellationQueueFor26820423; 
@property (assign,nonatomic) double totalInitialDownloadSize;                                //@synthesize totalInitialDownloadSize=_totalInitialDownloadSize - In the implementation block
@property (nonatomic,readonly) float progress;                                               //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) NSArray * localAssets; 
@property (nonatomic,copy) id progressBlock;                                                 //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,copy) id itemCompletedBlock;                                            //@synthesize itemCompletedBlock=_itemCompletedBlock - In the implementation block
@property (nonatomic,readonly) unsigned long long nonLocalCount; 
+(id)cloudDownloaderWithAssets:(id)arg1 ;
-(float)progress;
-(NSMutableArray *)requests;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
-(void)cancelDownloads;
-(id)initWithAssets:(id)arg1 ;
-(void)startDownloadsWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSArray *)localAssets;
-(unsigned long long)nonLocalCount;
-(void)setItemCompletedBlock:(id)arg1 ;
-(double)totalInitialDownloadSize;
-(void)setTotalInitialDownloadSize:(double)arg1 ;
-(id)itemCompletedBlock;
-(NSObject*<OS_dispatch_queue>)cancellationQueueFor26820423;
@end

