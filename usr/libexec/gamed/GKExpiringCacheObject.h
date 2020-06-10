//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKPurgeableCacheObject.h"

@class NSDate;

@interface GKExpiringCacheObject : GKPurgeableCacheObject
{
}

+ (void)invalidateObjectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x0000000100044ad0
+ (void)expireObjectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x0000000100044828
+ (id)fetchSortDescriptors;	// IMP=0x0000000100043fbc
- (void)awakeFromInsert;	// IMP=0x00000001000447c0
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x0000000100044554
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x0000000100044508
@property(readonly, nonatomic) _Bool expired;
- (void)expire;	// IMP=0x0000000100044188
- (void)invalidate;	// IMP=0x0000000100044064
- (_Bool)isValid;	// IMP=0x0000000100044040

// Remaining properties
@property(retain, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(retain, nonatomic) NSDate *timeStamp; // @dynamic timeStamp;

@end

