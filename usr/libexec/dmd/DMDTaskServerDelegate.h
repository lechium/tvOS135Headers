//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CATTaskServerDelegate-Protocol.h"
#import "DMDConfigurationEngineDelegate-Protocol.h"
#import "DMDTaskOperationProvider-Protocol.h"

@class CATOperationQueue, DMDConfigurationEngine, DMDDeviceStateObserver, DMFOSStateHandler, NSDictionary, NSString;

@interface DMDTaskServerDelegate : NSObject <DMDConfigurationEngineDelegate, CATTaskServerDelegate, DMDTaskOperationProvider>
{
    CATOperationQueue *_concurrentOperationQueue;	// 8 = 0x8
    NSDictionary *_serialOperationQueuesByGroup;	// 16 = 0x10
    DMDDeviceStateObserver *_deviceStateObserver;	// 24 = 0x18
    DMDConfigurationEngine *_configurationEngine;	// 32 = 0x20
    DMFOSStateHandler *_stateHandler;	// 40 = 0x28
}

+ (id)_specialCasedRequestNamesToOperationNames;	// IMP=0x000000010006ea74
- (void).cxx_destruct;	// IMP=0x000000010006ec8c
@property(readonly, nonatomic) DMFOSStateHandler *stateHandler; // @synthesize stateHandler=_stateHandler;
@property(readonly, nonatomic) DMDConfigurationEngine *configurationEngine; // @synthesize configurationEngine=_configurationEngine;
@property(readonly, nonatomic) DMDDeviceStateObserver *deviceStateObserver; // @synthesize deviceStateObserver=_deviceStateObserver;
@property(readonly, nonatomic) NSDictionary *serialOperationQueuesByGroup; // @synthesize serialOperationQueuesByGroup=_serialOperationQueuesByGroup;
@property(readonly, nonatomic) CATOperationQueue *concurrentOperationQueue; // @synthesize concurrentOperationQueue=_concurrentOperationQueue;
- (id)_nameForOperationGroup:(unsigned long long)arg1;	// IMP=0x000000010006ec48
- (void)_currentLocaleDidChange:(id)arg1;	// IMP=0x000000010006ebec
- (void)configurationEngineWillSuspend:(id)arg1;	// IMP=0x000000010006ea1c
- (void)configurationEngineDidResume:(id)arg1;	// IMP=0x000000010006e9c4
- (void)server:(id)arg1 clientSession:(id)arg2 enqueueOperation:(id)arg3;	// IMP=0x000000010006e6cc
- (void)server:(id)arg1 clientSession:(id)arg2 didReceiveNotificationWithName:(id)arg3 userInfo:(id)arg4;	// IMP=0x000000010006e5d4
- (void)server:(id)arg1 clientSession:(id)arg2 didInterruptWithError:(id)arg3;	// IMP=0x000000010006e4c8
- (void)server:(id)arg1 clientSessionDidInvalidate:(id)arg2;	// IMP=0x000000010006e41c
- (void)server:(id)arg1 clientSessionDidDisconnect:(id)arg2;	// IMP=0x000000010006e370
- (void)server:(id)arg1 clientSessionDidConnect:(id)arg2;	// IMP=0x000000010006e2c4
- (id)server:(id)arg1 clientSession:(id)arg2 operationForRequest:(id)arg3 error:(id *)arg4;	// IMP=0x000000010006df6c
- (void)prepareToRunOperation:(id)arg1 withContext:(id)arg2 withDatabase:(id)arg3;	// IMP=0x000000010006de50
- (Class)operationClassForRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000010006dac0
- (id)operationForRequest:(id)arg1 targetUID:(unsigned int)arg2 appleID:(id)arg3 transport:(id)arg4 error:(id *)arg5;	// IMP=0x000000010006d68c
@property(readonly, copy) NSString *description;
- (void)run;	// IMP=0x000000010006d2c4
- (id)initWithPolicyPersistence:(id)arg1 activationManager:(id)arg2;	// IMP=0x000000010006ce18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

