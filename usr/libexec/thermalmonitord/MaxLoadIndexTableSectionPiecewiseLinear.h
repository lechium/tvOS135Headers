//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MaxLoadIndexTableSection.h"

@interface MaxLoadIndexTableSectionPiecewiseLinear : MaxLoadIndexTableSection
{
    unsigned long long _controlEfforts[10];	// 40 = 0x28
    unsigned long long _maxLIs[10];	// 120 = 0x78
    unsigned long long _unconstrainedMaxLI;	// 200 = 0xc8
    unsigned long long _pointCount;	// 208 = 0xd0
}

- (unsigned long long)getControlEffortForMaxLI:(unsigned long long)arg1;	// IMP=0x00000001000380ac
- (unsigned long long)getReleaseMaxLI:(_Bool)arg1 releaseRate:(int)arg2;	// IMP=0x0000000100038078
- (unsigned long long)getMaxLI:(unsigned long long)arg1;	// IMP=0x0000000100037fa4
- (id)initWithDecisionTreeSectionControlEfforts:(id)arg1 maxLIs:(id)arg2 unconstrainedMaxLI:(unsigned long long)arg3;	// IMP=0x0000000100037d24

@end
