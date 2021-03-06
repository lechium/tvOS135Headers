//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVAirPlayLegacySession-Protocol.h"

@class NSDictionary, NSString;
@protocol TVAirPlayLegacySessionDelegate;

@interface TVAirPlayStreamingAudioSession : NSObject <TVAirPlayLegacySession>
{
    _Bool _deactivated;	// 8 = 0x8
    unsigned int _sessionID;	// 12 = 0xc
    NSObject<TVAirPlayLegacySessionDelegate> *_delegate;	// 16 = 0x10
    NSDictionary *_initialOptions;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010000f65c
@property(copy, nonatomic) NSDictionary *initialOptions; // @synthesize initialOptions=_initialOptions;
@property(readonly, nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) __weak NSObject<TVAirPlayLegacySessionDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool deactivated; // @synthesize deactivated=_deactivated;
- (_Bool)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 error:(id *)arg4;	// IMP=0x000000010000f528
- (_Bool)performAction:(id)arg1 withOptions:(id)arg2 outInfo:(id *)arg3 error:(id *)arg4;	// IMP=0x000000010000f520
- (id)getProperty:(id)arg1 qualifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000010000f518
- (_Bool)stopWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000f498
- (void)startWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000f2e4
- (void)userStop;	// IMP=0x000000010000f2e0
@property(readonly, nonatomic) long long sessionType;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

