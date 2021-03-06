//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVAirPlayLegacySession-Protocol.h"
#import "TVAirPlayPinSession-Protocol.h"

@class NSString, NSTimer;
@protocol TVAirPlayLegacySessionDelegate;

@interface TVAirPlayInfoSession : NSObject <TVAirPlayLegacySession, TVAirPlayPinSession>
{
    _Bool _deactivated;	// 8 = 0x8
    unsigned int _sessionID;	// 12 = 0xc
    NSObject<TVAirPlayLegacySessionDelegate> *_delegate;	// 16 = 0x10
    NSString *_commandKey;	// 24 = 0x18
    NSTimer *_timeoutTimer;	// 32 = 0x20
    long long _sessionType;	// 40 = 0x28
    NSString *_titleString;	// 48 = 0x30
    NSString *_promptString;	// 56 = 0x38
    NSString *_messageString;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010000fe4c
@property(copy, nonatomic) NSString *messageString; // @synthesize messageString=_messageString;
@property(copy, nonatomic) NSString *promptString; // @synthesize promptString=_promptString;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(nonatomic) long long sessionType; // @synthesize sessionType=_sessionType;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(copy, nonatomic) NSString *commandKey; // @synthesize commandKey=_commandKey;
@property(readonly, nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) __weak NSObject<TVAirPlayLegacySessionDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool deactivated; // @synthesize deactivated=_deactivated;
- (void)_messageTimedOut;	// IMP=0x000000010000fcd4
- (void)userStop;	// IMP=0x000000010000fc0c
- (_Bool)performAction:(id)arg1 withOptions:(id)arg2 outInfo:(id *)arg3 error:(id *)arg4;	// IMP=0x000000010000fc04
- (_Bool)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 error:(id *)arg4;	// IMP=0x000000010000fbfc
- (id)getProperty:(id)arg1 qualifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000010000fbf4
- (_Bool)stopWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000fb64
- (void)startWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000f728
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

