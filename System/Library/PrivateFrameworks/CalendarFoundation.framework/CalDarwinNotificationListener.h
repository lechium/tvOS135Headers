/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarFoundation/CalActivatable.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface CalDarwinNotificationListener : NSObject <CalActivatable> {

	BOOL _listening;
	NSString* _notificationName;
	/*^block*/id _callback;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,copy) id callback;                                               //@synthesize callback=_callback - In the implementation block
@property (nonatomic,retain) NSString * notificationName;                             //@synthesize notificationName=_notificationName - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                  //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign,nonatomic) BOOL listening;                                          //@synthesize listening=_listening - In the implementation block
-(id)description;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)activate;
-(void)deactivate;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)notificationName;
-(id)initWithNotificationName:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)setNotificationName:(NSString *)arg1 ;
-(BOOL)listening;
-(BOOL)_removeObserver;
-(BOOL)_addObserver;
-(void)setListening:(BOOL)arg1 ;
-(void)_notificationWithNameReceived:(id)arg1 ;
@end
