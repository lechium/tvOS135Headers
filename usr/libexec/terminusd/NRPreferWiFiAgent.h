//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NWNetworkAgent-Protocol.h"

@class NSString, NSUUID, NWNetworkAgentRegistration;
@protocol OS_dispatch_queue;

@interface NRPreferWiFiAgent : NSObject <NWNetworkAgent>
{
    _Bool active;	// 8 = 0x8
    _Bool kernelActivated;	// 9 = 0x9
    _Bool userActivated;	// 10 = 0xa
    _Bool voluntary;	// 11 = 0xb
    _Bool specificUseOnly;	// 12 = 0xc
    _Bool networkProvider;	// 13 = 0xd
    _Bool _isRegistered;	// 14 = 0xe
    _Bool _invalidated;	// 15 = 0xf
    int _assertCount;	// 16 = 0x10
    NSUUID *agentUUID;	// 24 = 0x18
    NSString *agentDescription;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NWNetworkAgentRegistration *_registrationObject;	// 48 = 0x30
    NSString *_policyIdentifier;	// 56 = 0x38
}

+ (id)agentFromData:(id)arg1;	// IMP=0x000000010002ef8c
+ (id)agentType;	// IMP=0x000000010002ef48
+ (id)agentDomain;	// IMP=0x000000010002ef04
- (void).cxx_destruct;	// IMP=0x000000010002e83c
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) NSString *policyIdentifier; // @synthesize policyIdentifier=_policyIdentifier;
@property(nonatomic) _Bool isRegistered; // @synthesize isRegistered=_isRegistered;
@property(nonatomic) int assertCount; // @synthesize assertCount=_assertCount;
@property(retain, nonatomic) NWNetworkAgentRegistration *registrationObject; // @synthesize registrationObject=_registrationObject;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic, getter=isNetworkProvider) _Bool networkProvider; // @synthesize networkProvider;
@property(nonatomic, getter=isSpecificUseOnly) _Bool specificUseOnly; // @synthesize specificUseOnly;
@property(nonatomic, getter=isVoluntary) _Bool voluntary; // @synthesize voluntary;
@property(nonatomic, getter=isUserActivated) _Bool userActivated; // @synthesize userActivated;
@property(nonatomic, getter=isKernelActivated) _Bool kernelActivated; // @synthesize kernelActivated;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active;
@property(copy, nonatomic) NSString *agentDescription; // @synthesize agentDescription;
@property(copy, nonatomic) NSUUID *agentUUID; // @synthesize agentUUID;
- (void)unassertAgentWithOptions:(id)arg1;	// IMP=0x000000010002e6ac
- (_Bool)assertAgentWithOptions:(id)arg1;	// IMP=0x000000010002e608
- (_Bool)startAgentWithOptions:(id)arg1;	// IMP=0x000000010002e568
- (_Bool)unregisterAgent;	// IMP=0x000000010002e3ac
- (void)activateAgent;	// IMP=0x000000010002e2dc
- (_Bool)registerAgentOnQueue:(id)arg1;	// IMP=0x000000010002e1b8
- (id)copyAgentData;	// IMP=0x000000010002e1b0
- (id)description;	// IMP=0x000000010002e0c8
- (void)dealloc;	// IMP=0x000000010002e014
- (id)init;	// IMP=0x000000010002dd6c

// Remaining properties
@property(nonatomic, getter=isNexusProvider) _Bool nexusProvider;
@property(nonatomic) _Bool requiresAssert;
@property(nonatomic) _Bool supportsBrowseRequests;
@property(nonatomic) _Bool supportsResolveRequests;
@property(nonatomic) _Bool updateClientsImmediately;

@end

