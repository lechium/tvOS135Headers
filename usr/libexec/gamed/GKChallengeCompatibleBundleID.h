//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKCacheObject.h"

@class GKChallengeCacheObject, NSString;

@interface GKChallengeCompatibleBundleID : GKCacheObject
{
}

+ (id)entityName;	// IMP=0x000000010005b2fc
- (id)internalRepresentation;	// IMP=0x000000010005b308
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x000000010005b2f8

// Remaining properties
@property(retain, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(retain, nonatomic) GKChallengeCacheObject *challenge; // @dynamic challenge;

@end
