/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppSupport/AppSupport-Structs.h>
@class NSLock, NSString;

@interface _ReachabilityRequest : NSObject {

	NSLock* _lock;
	NSString* _hostname;
	SCNetworkReachabilityRef _reachability;
	unsigned _flags;
	CFDictionaryRef _observers;
	BOOL _isReachable;
	BOOL _receivedAtLeastOneCallback;

}

@property (nonatomic,readonly) NSString * hostname;              //@synthesize hostname=_hostname - In the implementation block
-(id)description;
-(void)dealloc;
-(BOOL)hasObservers;
-(void)removeObserver:(id)arg1 ;
-(NSString *)hostname;
-(void)reachabilityChangedWithFlags:(unsigned)arg1 ;
-(id)initWithHostname:(id)arg1 ;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 ;
@end
