//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBSRestrictionServiceInterface-Protocol.h"

@class NSString, PBSystemServiceConnection;

@interface PBRestrictionService : NSObject <PBSRestrictionServiceInterface>
{
    PBSystemServiceConnection *_remoteConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000b3750
@property(readonly, nonatomic) PBSystemServiceConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
- (id)_getDefaultServiceRequestWithResultHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000b3668
- (void)validatePIN:(id)arg1 withResult:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b32c8
- (void)authorizeRestrictionsWithResult:(CDUnknownBlockType)arg1;	// IMP=0x00000001000b31f4
- (void)restrictionsEnabledWithResult:(CDUnknownBlockType)arg1;	// IMP=0x00000001000b3120
- (void)cancelRestrictionAuthorization:(id)arg1;	// IMP=0x00000001000b3084
- (void)validateRestrictionForSetting:(unsigned long long)arg1 allowInteraction:(_Bool)arg2 requestToken:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000b2f10
- (void)validateRestrictionForContentType:(unsigned long long)arg1 withRating:(id)arg2 allowInteraction:(_Bool)arg3 requestToken:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x00000001000b2d44
- (void)invalidate;	// IMP=0x00000001000b2d30
- (id)initWithRemoteConnection:(id)arg1;	// IMP=0x00000001000b2bfc
- (id)init;	// IMP=0x00000001000b2bc8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

