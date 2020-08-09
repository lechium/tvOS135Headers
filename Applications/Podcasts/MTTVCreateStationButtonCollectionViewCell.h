//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIButton;
@protocol MTTVCreateStationButtonCollectionViewCellDelegate;

@interface MTTVCreateStationButtonCollectionViewCell : UICollectionViewCell
{
    id <MTTVCreateStationButtonCollectionViewCellDelegate> _delegate;	// 8 = 0x8
    UIButton *_button;	// 16 = 0x10
}

+ (struct CGSize)sizeForWidth:(double)arg1;	// IMP=0x0000000100132304
+ (id)reuseIdentifier;	// IMP=0x00000001001322f0
- (void).cxx_destruct;	// IMP=0x00000001001328cc
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) __weak id <MTTVCreateStationButtonCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)preferredFocusedView;	// IMP=0x0000000100132878
- (_Bool)canBecomeFocused;	// IMP=0x0000000100132870
- (void)layoutSubviews;	// IMP=0x00000001001326e8
- (void)prepareForReuse;	// IMP=0x0000000100132698
- (void)_buttonTapped:(id)arg1;	// IMP=0x0000000100132504
@property(readonly, nonatomic, getter=isButtonFocused) _Bool buttonFocused;
@property(nonatomic, getter=isButtonFocusable) _Bool buttonFocusable;
- (void)configureSubviews;	// IMP=0x00000001001323d8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100132380
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000100132310

@end
