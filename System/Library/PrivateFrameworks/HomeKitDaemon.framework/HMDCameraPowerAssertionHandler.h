/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSString;

@interface HMDCameraPowerAssertionHandler : HMFObject <HMFLogging> {

	unsigned _powerAssertion;
	NSMutableSet* _currentRequestHandlerSessionIDs;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,readonly) NSMutableSet * currentRequestHandlerSessionIDs;              //@synthesize currentRequestHandlerSessionIDs=_currentRequestHandlerSessionIDs - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                      //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic) unsigned powerAssertion;                                       //@synthesize powerAssertion=_powerAssertion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedHandler;
-(id)init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(unsigned)powerAssertion;
-(void)setPowerAssertion:(unsigned)arg1 ;
-(void)registerRemoteRequestHandler:(id)arg1 forSessionID:(id)arg2 ;
-(void)deregisterRemoteRequestHandler:(id)arg1 ;
-(NSMutableSet *)currentRequestHandlerSessionIDs;
@end

