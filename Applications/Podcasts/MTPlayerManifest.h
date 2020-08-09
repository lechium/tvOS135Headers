//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IMPlayerManifest.h"

#import "IMMetricsDataSource-Protocol.h"

@class MTPlayerItem, NSString;

@interface MTPlayerManifest : IMPlayerManifest <IMMetricsDataSource>
{
    unsigned long long _playReason;	// 8 = 0x8
    NSString *_manifestIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000f4d20
@property(retain, nonatomic) NSString *manifestIdentifier; // @synthesize manifestIdentifier=_manifestIdentifier;
@property(nonatomic) unsigned long long playReason; // @synthesize playReason=_playReason;
- (id)metricsAdditionalData;	// IMP=0x00000001000f4b48
- (id)metricsContentIdentifier;	// IMP=0x00000001000f4b34
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000f4a84
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000f4a50
- (_Bool)userActivityContainsPlayhead;	// IMP=0x00000001000f4a48
- (id)activitySpotlightIdentifier;	// IMP=0x00000001000f4a40
- (id)activity;	// IMP=0x00000001000f49e4
- (id)init;	// IMP=0x00000001000f4938

// Remaining properties
@property(readonly, nonatomic) MTPlayerItem *currentItem; // @dynamic currentItem;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

