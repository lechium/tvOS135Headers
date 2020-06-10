//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLClientManagerAuthorizationContext : NSObject
{
    int _transientAwareRegistrationResult;	// 8 = 0x8
    int _registrationResult;	// 12 = 0xc
    int _inUseLevel;	// 16 = 0x10
    unsigned long long _staticServiceMask;	// 24 = 0x18
    unsigned long long _effectiveServiceMask;	// 32 = 0x20
    unsigned long long _provisionalServiceMask;	// 40 = 0x28
}

@property(readonly, nonatomic) unsigned long long provisionalServiceMask; // @synthesize provisionalServiceMask=_provisionalServiceMask;
@property(readonly, nonatomic) unsigned long long effectiveServiceMask; // @synthesize effectiveServiceMask=_effectiveServiceMask;
@property(readonly, nonatomic) unsigned long long staticServiceMask; // @synthesize staticServiceMask=_staticServiceMask;
@property(readonly, nonatomic) int inUseLevel; // @synthesize inUseLevel=_inUseLevel;
@property(readonly, nonatomic) int registrationResult; // @synthesize registrationResult=_registrationResult;
@property(readonly, nonatomic) int transientAwareRegistrationResult; // @synthesize transientAwareRegistrationResult=_transientAwareRegistrationResult;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100787960
- (_Bool)inUseLevelIsAtLeast:(int)arg1;	// IMP=0x0000000100787950
- (_Bool)isStaticallyAuthorizedForServiceType:(unsigned long long)arg1;	// IMP=0x0000000100787938
- (_Bool)isStaticallyAuthorizedForServiceTypeMask:(unsigned long long)arg1;	// IMP=0x0000000100787908
- (_Bool)isAuthorizedForServiceType:(unsigned long long)arg1;	// IMP=0x00000001007878f0
- (_Bool)isAuthorizedForServiceTypeMask:(unsigned long long)arg1;	// IMP=0x000000010078789c
- (_Bool)isNonProvisionallyAuthorizedForServiceType:(unsigned long long)arg1;	// IMP=0x0000000100787884
- (_Bool)isNonProvisionallyAuthorizedForServiceTypeMask:(unsigned long long)arg1;	// IMP=0x0000000100787854
- (id)description;	// IMP=0x00000001007877fc
- (id)initWithInUseLevel:(int)arg1 registrationResult:(int)arg2 transientAwareRegistrationResult:(int)arg3 serviceMaskTuple:(struct CLClientServiceTypeMaskTuple)arg4;	// IMP=0x0000000100787784

@end

