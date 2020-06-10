//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol RPDaemonProtocol><RPSessionManagerDelegate;

@interface RPSessionManager : NSObject
{
    NSMutableDictionary *_bundleIDToRecordingSessionLookup;	// 8 = 0x8
    id <RPDaemonProtocol><RPSessionManagerDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010001a98c
@property(retain, nonatomic) id <RPDaemonProtocol><RPSessionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *bundleIDToRecordingSessionLookup; // @synthesize bundleIDToRecordingSessionLookup=_bundleIDToRecordingSessionLookup;
- (void)notifySystemRecordingResumed;	// IMP=0x000000010001a910
- (void)notifySystemRecordingMayBeStopped;	// IMP=0x000000010001a8bc
- (void)applicationDisconnectedWithBundleID:(id)arg1 withProcessIdentifier:(int)arg2;	// IMP=0x000000010001a6f4
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification;	// IMP=0x000000010001a444
- (void)stopInAppRecordingSessionsBecauseOfMultitasking;	// IMP=0x000000010001a240
- (void)stopAllRecordingSessionsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100019aa4
- (void)stopSystemRecordingWithError:(id)arg1;	// IMP=0x00000001000198d8
- (void)stopRecordingSession:(id)arg1 startClipDuration:(double)arg2 endClipDuration:(double)arg3 discardRecording:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100019570
- (_Bool)clientEligibleForSystemRecordingWithBundleIdentifier:(id)arg1;	// IMP=0x0000000100019504
- (void)removeInAppSessionWithBundleIdentifier:(id)arg1;	// IMP=0x0000000100019494
- (id)getRecordingSessionWithBundleIdentifier:(id)arg1;	// IMP=0x000000010001941c
- (id)recordingSessionInstanceWithBundleIdentifier:(id)arg1;	// IMP=0x0000000100019250
- (id)getActiveInAppRecordingSessions;	// IMP=0x00000001000190d8
- (id)getActiveRecordingSessions;	// IMP=0x0000000100018f78
- (id)getCurrentRecordingSession;	// IMP=0x0000000100018e30
- (id)getSystemRecordingSession;	// IMP=0x0000000100018e18
- (id)init;	// IMP=0x0000000100018d94

@end
