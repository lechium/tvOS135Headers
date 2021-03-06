//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionStreamable-Protocol.h"

@class NSArray, NSString;

@interface BKEventStatistic : NSObject <BSDescriptionStreamable>
{
    _Bool _updatedSinceReset;	// 8 = 0x8
    NSString *_label;	// 16 = 0x10
    NSArray *_associatedStatistics;	// 24 = 0x18
}

+ (id)statisticWithLabel:(id)arg1;	// IMP=0x0000000100052c38
- (void).cxx_destruct;	// IMP=0x0000000100052bec
@property(nonatomic) _Bool updatedSinceReset; // @synthesize updatedSinceReset=_updatedSinceReset;
@property(copy, nonatomic) NSArray *associatedStatistics; // @synthesize associatedStatistics=_associatedStatistics;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void)reset;	// IMP=0x0000000100052b7c
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x0000000100052ad0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

