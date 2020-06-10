//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NEPolicySession, NSMutableArray;

@interface NESMPolicyMasterSession : NSObject
{
    unsigned int _currentFilterUnit;	// 8 = 0x8
    NEPolicySession *_policySession;	// 16 = 0x10
    NEPolicySession *_policySessionLow;	// 24 = 0x18
    NSMutableArray *_pathRuleFilterPolicyIDs;	// 32 = 0x20
}

+ (id)sharedMasterSession;	// IMP=0x0000000100024b64
- (void).cxx_destruct;	// IMP=0x0000000100025684
@property(retain) NSMutableArray *pathRuleFilterPolicyIDs; // @synthesize pathRuleFilterPolicyIDs=_pathRuleFilterPolicyIDs;
@property unsigned int currentFilterUnit; // @synthesize currentFilterUnit=_currentFilterUnit;
@property(retain) NEPolicySession *policySessionLow; // @synthesize policySessionLow=_policySessionLow;
@property(retain) NEPolicySession *policySession; // @synthesize policySession=_policySession;
- (_Bool)unregisterSession:(id)arg1;	// IMP=0x000000010002558c
- (_Bool)registerSession:(id)arg1;	// IMP=0x00000001000254e0
- (_Bool)apply;	// IMP=0x00000001000253ac
- (_Bool)removeAllPoliciesLow:(id)arg1;	// IMP=0x00000001000251e0
- (_Bool)removeAllPolicies:(id)arg1;	// IMP=0x0000000100025014
- (_Bool)addPolicyLow:(id)arg1 policyIDList:(id)arg2;	// IMP=0x0000000100024df8
- (_Bool)addPolicy:(id)arg1 policyIDList:(id)arg2;	// IMP=0x0000000100024bdc
- (id)initPrivate;	// IMP=0x0000000100024a28
- (id)init;	// IMP=0x0000000100024a1c

@end

