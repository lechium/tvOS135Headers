//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSDDemoUpdateStatusDelegate-Protocol.h"

@class BKSApplicationStateMonitor, MSDProgress, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface MSDUIHelper : NSObject <MSDDemoUpdateStatusDelegate>
{
    _Bool _allowCancel;	// 8 = 0x8
    int _fullScreenState;	// 12 = 0xc
    NSObject<OS_xpc_object> *_connection;	// 16 = 0x10
    NSString *_fullScreenUIAppId;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_uiHelperQueue;	// 32 = 0x20
    BKSApplicationStateMonitor *_fullScreenUIAppMonitor;	// 40 = 0x28
    NSString *_message;	// 48 = 0x30
    NSObject<OS_xpc_object> *_pendingMessage;	// 56 = 0x38
    MSDProgress *_currentProgress;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x0000000100065cfc
- (void).cxx_destruct;	// IMP=0x00000001000681bc
@property(retain) MSDProgress *currentProgress; // @synthesize currentProgress=_currentProgress;
@property(retain) NSObject<OS_xpc_object> *pendingMessage; // @synthesize pendingMessage=_pendingMessage;
@property int fullScreenState; // @synthesize fullScreenState=_fullScreenState;
@property _Bool allowCancel; // @synthesize allowCancel=_allowCancel;
@property(retain) NSString *message; // @synthesize message=_message;
@property(retain) BKSApplicationStateMonitor *fullScreenUIAppMonitor; // @synthesize fullScreenUIAppMonitor=_fullScreenUIAppMonitor;
@property(retain) NSObject<OS_dispatch_queue> *uiHelperQueue; // @synthesize uiHelperQueue=_uiHelperQueue;
@property(retain) NSString *fullScreenUIAppId; // @synthesize fullScreenUIAppId=_fullScreenUIAppId;
- (_Bool)launchFullScreenUI_tv;	// IMP=0x0000000100067c8c
- (void)handleFullScreenUIAppStateChange:(unsigned int)arg1;	// IMP=0x00000001000678a0
- (void)deactivateFullScreenUIAppMonitor;	// IMP=0x000000010006780c
- (void)activateFullScreenUIAppMonitor;	// IMP=0x0000000100067604
- (_Bool)launchFullScreenUI;	// IMP=0x000000010006758c
- (void)requestFullScreenUI;	// IMP=0x000000010006734c
- (void)demoUpdateCompleted:(id)arg1;	// IMP=0x000000010006733c
- (void)demoUpdateProgress:(id)arg1;	// IMP=0x0000000100066fec
- (void)demoUpdateFailed:(id)arg1;	// IMP=0x0000000100066a20
- (void)fullScreenUICanceledByUser;	// IMP=0x00000001000668dc
- (void)stopFullScreenUI:(id)arg1;	// IMP=0x0000000100066320
- (void)startFullScreenUIWith:(id)arg1 allowCancel:(_Bool)arg2;	// IMP=0x0000000100066130
@property(retain) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (id)init;	// IMP=0x0000000100065d68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

