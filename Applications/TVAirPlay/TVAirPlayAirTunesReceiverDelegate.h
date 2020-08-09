//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVAirPlayLegacyReceiverDelegate.h"

#import "TVAirPlayLegacyReceiverDelegateEventSink-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface TVAirPlayAirTunesReceiverDelegate : TVAirPlayLegacyReceiverDelegate <TVAirPlayLegacyReceiverDelegateEventSink>
{
    NSObject<OS_dispatch_queue> *_receiverQueue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010000f224
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *receiverQueue; // @synthesize receiverQueue=_receiverQueue;
- (void)airPlayReceiverDelegate:(id)arg1 postEvent:(id)arg2 withInfo:(id)arg3;	// IMP=0x000000010000f060
- (id)init;	// IMP=0x000000010000efd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

