//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKGameInternal.h"

@class NSString;

@interface GKGameRecommendationInternal : GKGameInternal
{
    NSString *_reason;	// 104 = 0x68
    NSString *_engineID;	// 112 = 0x70
}

+ (id)secureCodedPropertyKeys;	// IMP=0x000000010012435c
+ (id)propertiesToFetch;	// IMP=0x000000010013a50c
@property(retain, nonatomic) NSString *engineID; // @synthesize engineID=_engineID;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (id)serverRepresentation;	// IMP=0x00000001001244b8
- (void)dealloc;	// IMP=0x00000001001242fc
- (id)initWithGame:(id)arg1;	// IMP=0x000000010012429c
- (void)updateWithProperties:(id)arg1;	// IMP=0x000000010013a5ec

@end

