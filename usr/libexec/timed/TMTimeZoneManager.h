//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSOrderedSet, TMTimeZone;
@protocol TMTimeZoneManagerDelegate;

@interface TMTimeZoneManager : NSObject
{
    NSMutableDictionary *inputs;	// 8 = 0x8
    NSMutableSet *availableSources;	// 16 = 0x10
    NSOrderedSet *rules;	// 24 = 0x18
    TMTimeZone *_currentTimeZone;	// 32 = 0x20
    id <TMTimeZoneManagerDelegate> _delegate;	// 40 = 0x28
}

@property(nonatomic) id <TMTimeZoneManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) TMTimeZone *currentTimeZone; // @synthesize currentTimeZone=_currentTimeZone;
- (id)description;	// IMP=0x000000010000e738
- (_Bool)isSourceAvailable:(id)arg1;	// IMP=0x000000010000e5e8
- (void)setSourceUnavailable:(id)arg1;	// IMP=0x000000010000e3f0
- (void)setSourceAvailable:(id)arg1;	// IMP=0x000000010000e1fc
- (id)highestAvailableSource;	// IMP=0x000000010000e094
- (id)initWithRules:(id)arg1 delegate:(id)arg2;	// IMP=0x000000010000df04
- (id)initWithRules:(id)arg1;	// IMP=0x000000010000def4
- (void)dealloc;	// IMP=0x000000010000de88
- (void)reset:(id)arg1;	// IMP=0x000000010000dcc4
- (void)setSourceTimeZone:(id)arg1;	// IMP=0x000000010000da98
- (void)recomputeDueToSource:(id)arg1;	// IMP=0x000000010000d7f8
- (void)fetchSource:(id)arg1;	// IMP=0x000000010000d6e4

@end
