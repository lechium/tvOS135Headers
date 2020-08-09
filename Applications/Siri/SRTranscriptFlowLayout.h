//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUICollectionViewFlowLayout.h>

@class NSMutableArray;

@interface SRTranscriptFlowLayout : SiriUICollectionViewFlowLayout
{
    NSMutableArray *_insertedIndexPaths;	// 8 = 0x8
    NSMutableArray *_reloadedIndexPaths;	// 16 = 0x10
    NSMutableArray *_handledIndexPaths;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100008464
@property(readonly, nonatomic, getter=_handledIndexPaths) NSMutableArray *handledIndexPaths; // @synthesize handledIndexPaths=_handledIndexPaths;
@property(readonly, nonatomic, getter=_reloadedIndexPaths) NSMutableArray *reloadedIndexPaths; // @synthesize reloadedIndexPaths=_reloadedIndexPaths;
@property(readonly, nonatomic, getter=_insertedIndexPaths) NSMutableArray *insertedIndexPaths; // @synthesize insertedIndexPaths=_insertedIndexPaths;
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;	// IMP=0x0000000100008154
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;	// IMP=0x0000000100007ffc
- (void)finalizeCollectionViewUpdates;	// IMP=0x0000000100007f2c
- (void)prepareForCollectionViewUpdates:(id)arg1;	// IMP=0x0000000100007d28
- (id)init;	// IMP=0x0000000100007c1c

@end

