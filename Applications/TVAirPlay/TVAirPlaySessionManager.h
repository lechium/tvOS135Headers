//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVAirPlayMediaViewControllerDelegate-Protocol.h"

@class NSArray, NSMapTable, NSMutableArray, NSString, TVAirPlayMediaViewController, TVSStateMachine;

@interface TVAirPlaySessionManager : NSObject <TVAirPlayMediaViewControllerDelegate>
{
    NSMutableArray *_sessions;	// 8 = 0x8
    NSMapTable *_pendingCompletionHandlers;	// 16 = 0x10
    TVSStateMachine *_stateMachine;	// 24 = 0x18
    TVAirPlayMediaViewController *_mediaViewController;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00000001000095a0
- (void).cxx_destruct;	// IMP=0x000000010000b208
- (void)_callPendingCompletionHandlersWithError:(id)arg1;	// IMP=0x000000010000b088
- (void)_updatePresentedViewController;	// IMP=0x000000010000b070
- (void)_updateForSessionChange;	// IMP=0x000000010000b014
- (id)_sessionOfType:(long long)arg1 identifier:(id)arg2 activeOnly:(_Bool)arg3;	// IMP=0x000000010000ae2c
- (void)_requestMediaViewController;	// IMP=0x000000010000abc4
- (id)_cleanupWithError:(id)arg1;	// IMP=0x000000010000a9ac
- (id)_handleForegroundUpdate;	// IMP=0x000000010000a788
- (id)_handleBackgroundSessionUpdate;	// IMP=0x000000010000a5dc
- (void)_initializeStateMachine;	// IMP=0x000000010000a298
- (void)mediaViewControllerDidDismiss:(id)arg1;	// IMP=0x000000010000a1b4
- (void)mediaViewControllerDidBecomeReady:(id)arg1;	// IMP=0x000000010000a08c
@property(readonly, copy, nonatomic) NSArray *activeSessions;
- (id)APRKVideoSessionSession;	// IMP=0x000000010000a054
- (id)APRKPinSession;	// IMP=0x0000000100009fe8
- (id)urlSessionWithID:(id)arg1;	// IMP=0x0000000100009f58
- (id)streamingSessionWithID:(id)arg1;	// IMP=0x0000000100009f40
- (id)presentationSessionWithID:(id)arg1;	// IMP=0x0000000100009f28
- (id)infoSessionWithID:(id)arg1;	// IMP=0x0000000100009e68
- (id)pinSessionWithID:(id)arg1;	// IMP=0x0000000100009e50
- (void)_removeSession:(id)arg1;	// IMP=0x0000000100009d94
- (void)_deregisterLegacySession:(id)arg1 options:(long long)arg2;	// IMP=0x0000000100009a20
- (void)deregisterSession:(id)arg1 options:(long long)arg2;	// IMP=0x0000000100009900
- (void)registerSession:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100009764
- (void)dealloc;	// IMP=0x00000001000096ec
- (id)init;	// IMP=0x0000000100009644

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

