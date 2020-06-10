/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSObject;

@interface VCPInternetReachability : NSObject {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	SCNetworkReachabilityRef _reachability;
	BOOL _hasWifiOrEthernetConnection;

}

@property (nonatomic,readonly) BOOL hasWifiOrEthernetConnection;              //@synthesize hasWifiOrEthernetConnection=_hasWifiOrEthernetConnection - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)setReachabilityForFlags:(unsigned)arg1 update:(BOOL)arg2 ;
-(BOOL)hasWifiOrEthernetConnection;
@end

