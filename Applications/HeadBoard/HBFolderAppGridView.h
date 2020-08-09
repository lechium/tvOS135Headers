//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HBAppGridView.h"

@interface HBFolderAppGridView : HBAppGridView
{
}

- (void)updateScrollEventEditingPosition:(struct CGPoint)arg1;	// IMP=0x00000001000a630c
- (void)afterScrollToIndexPathWithCell:(id)arg1;	// IMP=0x00000001000a6200
- (void)_scrollToIndexPath:(id)arg1 animations:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a610c
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;	// IMP=0x00000001000a5f94
- (id)_scrollRegionIndexPathForCurrentEditingPosition;	// IMP=0x00000001000a5e64
- (double)_ratioIntoScrollRegion;	// IMP=0x00000001000a5c74
- (long long)_regionForCurrentEditingPosition;	// IMP=0x00000001000a5b80
- (struct CGRect)_editingAreaRect;	// IMP=0x00000001000a5b10
- (struct CGRect)_collectionViewHoverOverlayRect:(id)arg1 layout:(id)arg2;	// IMP=0x00000001000a5b04
- (struct CGRect)_hoverRect;	// IMP=0x00000001000a5af8
- (struct CGRect)_visibleContentRect;	// IMP=0x00000001000a5aec
- (_Bool)_isPositionOutOfFolder:(struct CGPoint)arg1;	// IMP=0x00000001000a5a20
- (struct CGRect)_bounds;	// IMP=0x00000001000a59ac
- (struct CGRect)_localFrameForRegion:(long long)arg1;	// IMP=0x00000001000a5944
- (struct CGRect)_localFrame;	// IMP=0x00000001000a58cc
- (struct CGRect)_screenFrame;	// IMP=0x00000001000a5858
- (struct CGPoint)_localEditingPosition;	// IMP=0x00000001000a57fc
- (struct CGPoint)_screenEditingPosition;	// IMP=0x00000001000a5784
- (id)initWithFrame:(struct CGRect)arg1 dockMode:(_Bool)arg2;	// IMP=0x00000001000a5704

@end

