/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMISystemResourceUsageMonitorProtocol.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMISystemResourceUsageMonitorDelegate, OS_dispatch_queue;
@class NSObject, HMISystemResourceUsage, HMINotifydObserver, NSString;

@interface HMISystemResourceUsageMonitorHomePod : HMFObject <HMISystemResourceUsageMonitorProtocol, HMFLogging> {

	id<HMISystemResourceUsageMonitorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMISystemResourceUsage* _currentSystemResourceUsage;
	HMINotifydObserver* _notifydObserver;

}

@property (__weak) id<HMISystemResourceUsageMonitorDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                           //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) HMISystemResourceUsage * currentSystemResourceUsage;              //@synthesize currentSystemResourceUsage=_currentSystemResourceUsage - In the implementation block
@property (readonly) HMINotifydObserver * notifydObserver;                             //@synthesize notifydObserver=_notifydObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMISystemResourceUsageMonitorDelegate>)delegate;
-(void)setDelegate:(id<HMISystemResourceUsageMonitorDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)start;
-(id)initWithWorkQueue:(id)arg1 ;
-(id)getCurrentSystemResourceUsage;
-(void)handleSystemLoadChanged:(unsigned long long)arg1 ;
-(HMINotifydObserver *)notifydObserver;
-(HMISystemResourceUsage *)currentSystemResourceUsage;
@end

