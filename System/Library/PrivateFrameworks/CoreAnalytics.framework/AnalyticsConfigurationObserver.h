/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreAnalytics.framework/CoreAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AnalyticsConfigurationObserverDelegate;
#import <CoreAnalytics/CoreAnalytics-Structs.h>
@class NSObject;

@interface AnalyticsConfigurationObserver : NSObject {

	shared_ptr<(anonymous namespace)::ConfigurationObserverImpl>* observer;
	NSObject*<OS_dispatch_queue> _queue;
	id<AnalyticsConfigurationObserverDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                      //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<AnalyticsConfigurationObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                              //@synthesize delegateQueue=_delegateQueue - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<AnalyticsConfigurationObserverDelegate>)delegate;
-(void)setDelegate:(id<AnalyticsConfigurationObserverDelegate>)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setConfigurationObserverDelegate:(id)arg1 queue:(id)arg2 ;
-(BOOL)startObservingConfigurationType:(id)arg1 ;
-(BOOL)stopObservingConfigurationType:(id)arg1 ;
@end

