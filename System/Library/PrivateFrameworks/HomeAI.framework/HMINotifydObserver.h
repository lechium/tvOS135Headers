/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface HMINotifydObserver : HMFObject <HMFLogging> {

	int _token;
	const char* _notificationName;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _callback;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id callback;                                     //@synthesize callback=_callback - In the implementation block
@property (assign,nonatomic) int token;                                         //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) const char* notificationName;                    //@synthesize notificationName=_notificationName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(int)token;
-(BOOL)start;
-(id)callback;
-(void)setToken:(int)arg1 ;
-(const char*)notificationName;
-(id)initWithNotificationName:(const char*)arg1 andQueue:(id)arg2 andCallback:(/*^block*/id)arg3 ;
-(void)publishValueForToken:(int)arg1 ;
-(void)publishInitialValue;
@end

