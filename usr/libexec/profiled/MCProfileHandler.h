//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCInteractionClientDelegate-Protocol.h"

@class MCProfile, NSArray, NSMutableArray, NSMutableDictionary;

@interface MCProfileHandler : NSObject <MCInteractionClientDelegate>
{
    MCProfile *_profile;	// 8 = 0x8
    NSMutableArray *_payloadHandlers;	// 16 = 0x10
    NSMutableDictionary *_UUIDToPersistentIDMap;	// 24 = 0x18
    _Bool _isSetAside;	// 32 = 0x20
}

+ (id)payloadsOfClass:(Class)arg1 removedBeforePayload:(id)arg2;	// IMP=0x0000000100028ac8
+ (id)payloadsOfClass:(Class)arg1 installedBeforePayload:(id)arg2;	// IMP=0x0000000100028920
+ (id)userCancelledError;	// IMP=0x000000010002655c
- (void).cxx_destruct;	// IMP=0x0000000100028db8
@property(readonly, retain, nonatomic) NSArray *payloadHandlers; // @synthesize payloadHandlers=_payloadHandlers;
@property(readonly, nonatomic) _Bool isSetAside; // @synthesize isSetAside=_isSetAside;
@property(readonly, retain, nonatomic) MCProfile *profile; // @synthesize profile=_profile;
- (_Bool)interactionClient:(id)arg1 didRequestPreflightUserInputResponses:(id)arg2 forPayloadIndex:(unsigned long long)arg3 outError:(id *)arg4;	// IMP=0x0000000100028d88
- (id)persistentIDForCertificateUUID:(id)arg1;	// IMP=0x0000000100028d54
- (void)setUserInputResponses:(id)arg1;	// IMP=0x0000000100028d50
- (_Bool)preflightUserInputResponses:(id)arg1 forPayloadIndex:(unsigned long long)arg2 outError:(id *)arg3;	// IMP=0x0000000100028c60
- (id)userInputArray;	// IMP=0x0000000100028c58
- (void)convertPayloadWithUUIDToUnknownPayload:(id)arg1;	// IMP=0x0000000100028704
- (void)removeWithInstaller:(id)arg1 options:(id)arg2;	// IMP=0x000000010002847c
- (void)unsetAside;	// IMP=0x00000001000282fc
- (void)setAsideWithInstaller:(id)arg1;	// IMP=0x00000001000280f8
- (_Bool)isInstalled;	// IMP=0x0000000100027fb8
- (void)didRemoveOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x0000000100027e68
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x0000000100027cb8
- (void)unstageFromInstallationWithInstaller:(id)arg1;	// IMP=0x0000000100027ad8
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x00000001000272e0
- (_Bool)stageForInstallationWithInstaller:(id)arg1 interactionClient:(id)arg2 outError:(id *)arg3;	// IMP=0x00000001000267d8
- (id)_profileInstallationErrorWithUnderlyingError:(id)arg1;	// IMP=0x00000001000266d4
- (id)userCancelledError;	// IMP=0x00000001000265f4
- (id)initWithProfile:(id)arg1;	// IMP=0x0000000100026270
- (id)payloadHandlerWithUUID:(id)arg1;	// IMP=0x00000001000260cc

@end

