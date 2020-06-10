/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSMutableArray, TVSWiFiThroughputMeasurementTask, TVSWiFiNetwork, BSWatchdog;

@interface TVSWiFiQualityMeasurement : NSObject {

	unsigned long long _downloadedBytes;
	double _downloadDuration;
	NSMutableArray* _networkData;
	id<NSObject> _urlBagLoadObserver;
	unsigned long long _state;
	TVSWiFiThroughputMeasurementTask* _throughputMeasurementTask;
	TVSWiFiNetwork* _connectedWiFiNetwork;
	/*^block*/id _completionHandler;
	BSWatchdog* _watchdog;

}

@property (assign,nonatomic) unsigned long long state;                                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) TVSWiFiThroughputMeasurementTask * throughputMeasurementTask;              //@synthesize throughputMeasurementTask=_throughputMeasurementTask - In the implementation block
@property (assign,nonatomic) unsigned long long downloadedBytes;                                        //@synthesize downloadedBytes=_downloadedBytes - In the implementation block
@property (assign,nonatomic) double downloadDuration;                                                   //@synthesize downloadDuration=_downloadDuration - In the implementation block
@property (nonatomic,retain) NSMutableArray * networkData;                                              //@synthesize networkData=_networkData - In the implementation block
@property (nonatomic,retain) id<NSObject> urlBagLoadObserver;                                           //@synthesize urlBagLoadObserver=_urlBagLoadObserver - In the implementation block
@property (nonatomic,retain) TVSWiFiNetwork * connectedWiFiNetwork;                                     //@synthesize connectedWiFiNetwork=_connectedWiFiNetwork - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                        //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) BSWatchdog * watchdog;                                                     //@synthesize watchdog=_watchdog - In the implementation block
+(unsigned long long)compareIdeal:(id)arg1 withActual:(id)arg2 ;
-(id)debugDescription;
-(id)init;
-(void)dealloc;
-(unsigned long long)state;
-(void)cancel;
-(void)setState:(unsigned long long)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setDownloadDuration:(double)arg1 ;
-(double)downloadDuration;
-(BSWatchdog *)watchdog;
-(void)setWatchdog:(BSWatchdog *)arg1 ;
-(unsigned long long)downloadedBytes;
-(NSMutableArray *)networkData;
-(TVSWiFiNetwork *)connectedWiFiNetwork;
-(TVSWiFiThroughputMeasurementTask *)throughputMeasurementTask;
-(void)setConnectedWiFiNetwork:(TVSWiFiNetwork *)arg1 ;
-(void)_startWithCompletion:(/*^block*/id)arg1 ;
-(void)setUrlBagLoadObserver:(id<NSObject>)arg1 ;
-(id<NSObject>)urlBagLoadObserver;
-(void)_recordCurrentNetworkData;
-(void)setThroughputMeasurementTask:(TVSWiFiThroughputMeasurementTask *)arg1 ;
-(void)_recordDownloadSize:(unsigned long long)arg1 in:(double)arg2 ;
-(void)setDownloadedBytes:(unsigned long long)arg1 ;
-(void)measureQualityWithCompletion:(/*^block*/id)arg1 ;
-(void)setNetworkData:(NSMutableArray *)arg1 ;
@end

