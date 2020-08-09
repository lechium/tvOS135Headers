//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface MTMPULayoutInterpolator : NSObject <NSCopying>
{
    struct vector<MTMPU::LayoutInterpolator::EntriesContainer, std::__1::allocator<MTMPU::LayoutInterpolator::EntriesContainer>> _entriesContainers;	// 8 = 0x8
    _Bool _hasEntryWithSpecificSecondaryReferenceMetric;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x00000001001e8a88
- (void).cxx_destruct;	// IMP=0x00000001001e8a80
- (void)_sortPointsFor3DInterpolation:(vector_62ce5f2b *)arg1 usingQueriedPoint:(struct Point3D)arg2;	// IMP=0x00000001001e8a38
- (vector_62ce5f2b)_sortedPointsFor3DInterpolationFromEntriesContainer:(struct EntriesContainer *)arg1 usingQueriedPoint:(struct Point3D)arg2 fallbackSecondaryReferenceMetric:(double)arg3;	// IMP=0x00000001001e858c
- (struct Point3D)_pointForEntry:(struct Entry)arg1 andPrimaryReferenceMetric:(double)arg2 usingFallbackSecondaryReferenceMetric:(double)arg3;	// IMP=0x00000001001e8528
- (double)_interpolatedValueForPrimaryReferenceMetric:(double)arg1 secondaryReferenceMetric:(double)arg2 betweenFirstEntriesContainer:(struct EntriesContainer *)arg3 andSecondEntriesContainer:(struct EntriesContainer *)arg4;	// IMP=0x00000001001e8098
- (double)valueForReferenceMetric:(double)arg1 secondaryReferenceMetric:(double)arg2;	// IMP=0x00000001001e7c14
- (double)valueForReferenceMetric:(double)arg1;	// IMP=0x00000001001e7c00
- (void)addValue:(double)arg1 forReferenceMetric:(double)arg2 secondaryReferenceMetric:(double)arg3;	// IMP=0x00000001001e7720
- (void)addValue:(double)arg1 forReferenceMetric:(double)arg2;	// IMP=0x00000001001e770c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001e7694
- (id)description;	// IMP=0x00000001001e743c

@end

