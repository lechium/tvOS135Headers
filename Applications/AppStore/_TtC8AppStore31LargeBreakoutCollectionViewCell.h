//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC8AppStore22BaseCollectionViewCell.h"

@class MISSING_TYPE, NSArray, UIColor;

@interface _TtC8AppStore31LargeBreakoutCollectionViewCell : _TtC8AppStore22BaseCollectionViewCell
{
    MISSING_TYPE *isFeatured;	// 176 = 0xb0
    MISSING_TYPE *videoContainer;	// 184 = 0xb8
    MISSING_TYPE *artworkView;	// 192 = 0xc0
    MISSING_TYPE *backgroundArtwork;	// 200 = 0xc8
    MISSING_TYPE *detailsView;	// 208 = 0xd0
    MISSING_TYPE *detailPosition;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x000000010007dc50
- (void)prepareForReuse;	// IMP=0x000000010007dba8
- (void)layoutSubviews;	// IMP=0x000000010007da34
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010007d7d4
- (void)didMoveToWindow;	// IMP=0x000000010007d7a8
@property(nonatomic, readonly) _Bool canBecomeFocused;
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property(nonatomic, retain) UIColor *backgroundColor;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010007d43c

@end
