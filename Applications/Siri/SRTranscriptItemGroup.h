//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFastEnumeration-Protocol.h"

@class NSArray, NSIndexSet, NSMutableArray, NSMutableIndexSet;
@protocol SRTranscriptItemGroupDelegate;

@interface SRTranscriptItemGroup : NSObject <NSFastEnumeration>
{
    NSMutableArray *_transcriptItems;	// 8 = 0x8
    NSMutableIndexSet *_insertionIndexes;	// 16 = 0x10
    _Bool _provisional;	// 24 = 0x18
    _Bool _waitsForConfirmation;	// 25 = 0x19
    double _presentationDelay;	// 32 = 0x20
    _Bool _eligibleForPresentation;	// 40 = 0x28
    _Bool _presentationDelayElapsed;	// 41 = 0x29
    id <SRTranscriptItemGroupDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100024124
@property(nonatomic, getter=_presentationDelayElapsed, setter=_setPresentationDelayElapsed:) _Bool presentationDelayElapsed; // @synthesize presentationDelayElapsed=_presentationDelayElapsed;
@property(nonatomic) __weak id <SRTranscriptItemGroupDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool waitsForConfirmation; // @synthesize waitsForConfirmation=_waitsForConfirmation;
@property(nonatomic, getter=isEligibleForPresentation) _Bool eligibleForPresentation; // @synthesize eligibleForPresentation=_eligibleForPresentation;
@property(readonly, nonatomic, getter=isProvisional) _Bool provisional; // @synthesize provisional=_provisional;
- (void)removeElementAtIndex:(long long)arg1;	// IMP=0x0000000100024038
- (void)shiftInsertionIndexesStartingAtIndex:(unsigned long long)arg1 by:(long long)arg2;	// IMP=0x0000000100024028
- (void)replaceTranscriptItem:(id)arg1 withTranscriptItem:(id)arg2 cancelPresentationDelay:(_Bool)arg3;	// IMP=0x0000000100023f58
- (unsigned long long)insertionIndexForTranscriptItem:(id)arg1;	// IMP=0x0000000100023d98
- (void)_presentationEligibilityConditionDidChange;	// IMP=0x0000000100023a8c
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000100023a20
@property(readonly, nonatomic) NSIndexSet *insertionIndexes;
@property(readonly, nonatomic) NSArray *transcriptItems;
- (id)description;	// IMP=0x0000000100023788
- (id)init;	// IMP=0x0000000100023704
- (id)initWithTranscriptItems:(id)arg1 insertionIndexes:(id)arg2 provisional:(_Bool)arg3 waitsForConfirmation:(_Bool)arg4 presentationDelay:(double)arg5;	// IMP=0x0000000100023448

@end

