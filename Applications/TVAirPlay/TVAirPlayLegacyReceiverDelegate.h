//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AirPlayReceiverUIDelegate-Protocol.h"
#import "TVAirPlayLegacySessionDelegate-Protocol.h"

@class NSNumber, NSString;
@protocol TVAirPlayLegacyReceiverDelegateEventSink;

@interface TVAirPlayLegacyReceiverDelegate : NSObject <TVAirPlayLegacySessionDelegate, AirPlayReceiverUIDelegate>
{
    id <TVAirPlayLegacyReceiverDelegateEventSink> _eventSink;	// 8 = 0x8
    NSNumber *_audioSessionID;	// 16 = 0x10
    double _lastElapsedTime;	// 24 = 0x18
    double _lastDuration;	// 32 = 0x20
}

+ (int)_allowInterruption:(id *)arg1;	// IMP=0x0000000100016f34
- (void).cxx_destruct;	// IMP=0x0000000100016f84
@property(readonly, nonatomic) double lastDuration; // @synthesize lastDuration=_lastDuration;
@property(readonly, nonatomic) double lastElapsedTime; // @synthesize lastElapsedTime=_lastElapsedTime;
@property(copy, nonatomic) NSNumber *audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property(nonatomic) __weak id <TVAirPlayLegacyReceiverDelegateEventSink> eventSink; // @synthesize eventSink=_eventSink;
- (void)session:(id)arg1 didPerformEvent:(id)arg2 withInfo:(id)arg3;	// IMP=0x0000000100016e1c
- (int)airplayUIStopVideo:(id)arg1;	// IMP=0x0000000100016a98
- (int)airplayUIStartVideo:(id)arg1 outputParams:(id *)arg2;	// IMP=0x00000001000164a8
- (int)airplayUIUpdateAudioProgress:(double)arg1 duration:(double)arg2;	// IMP=0x000000010001618c
- (int)airplayUIUpdateAudioMetaData:(id)arg1;	// IMP=0x0000000100016184
- (int)airplayUIStopAudio:(id)arg1;	// IMP=0x0000000100015e00
- (int)airplayUIStartAudio:(id)arg1 outputParams:(id *)arg2;	// IMP=0x00000001000159e0
- (void)airplayUIActivity;	// IMP=0x0000000100015998
- (int)airplayUIHideProgress;	// IMP=0x000000010001571c
- (int)airplayUIShowProgress;	// IMP=0x0000000100015484
- (int)airplayUIStopPresentation:(id)arg1;	// IMP=0x0000000100015100
- (int)airplayUIStartPresentation:(id)arg1 outputParams:(id *)arg2;	// IMP=0x0000000100014a24
- (int)airplayUIPerform:(id)arg1 inputParams:(id)arg2 outputParams:(id *)arg3;	// IMP=0x00000001000141bc
- (int)airplayUISetProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3;	// IMP=0x0000000100013d40
- (id)airplayUIGetProperty:(id)arg1 qualifier:(id)arg2 error:(int *)arg3;	// IMP=0x0000000100013894
- (id)init;	// IMP=0x0000000100013844

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

