//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTBaseProcessor.h"

@interface MTFeedUpdateProcessor : MTBaseProcessor
{
}

- (void)_lpmDidChange;	// IMP=0x0000000100115870
- (void)_reCheck;	// IMP=0x00000001001156f4
- (_Bool)_isLPMEnabled;	// IMP=0x00000001001156a0
- (void)checkAutoDownloadsForUuids:(id)arg1;	// IMP=0x0000000100115510
- (void)resultsChangedWithDeletedIds:(id)arg1 andInsertIds:(id)arg2;	// IMP=0x0000000100115500
- (id)entityName;	// IMP=0x00000001001154f0
- (id)predicate;	// IMP=0x0000000100115460
- (double)updatePredicateDuration;	// IMP=0x0000000100115454
- (void)stop;	// IMP=0x00000001001153dc
- (_Bool)start;	// IMP=0x0000000100115344

@end

