//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface UIView (MTAdditions)
+ (struct UIEdgeInsets)mt_layoutMarginsForWidth:(double)arg1;	// IMP=0x00000001000924f4
+ (double)mt_horizontalMarginsForWidth:(double)arg1;	// IMP=0x00000001000924c8
+ (_Bool)mt_areMarginsGenerousForWidth:(double)arg1;	// IMP=0x00000001000924b4
- (id)mt_recursivelyFindFirstViewMeetingCriteria:(CDUnknownBlockType)arg1;	// IMP=0x0000000100092574
- (_Bool)mt_isRTL;	// IMP=0x000000010009252c
- (_Bool)mt_areMarginsGenerous;	// IMP=0x0000000100092470
- (struct UIEdgeInsets)mt_layoutMarginsForWidth:(double)arg1;	// IMP=0x0000000100092404
- (struct UIEdgeInsets)mt_layoutMargins;	// IMP=0x00000001000923cc
- (long long)_layoutDirectionFromLayoutDirectionValue:(id)arg1;	// IMP=0x00000001000d9f84
- (id)_layoutDirectionValue;	// IMP=0x00000001000d9f78
@property(nonatomic) long long layoutDirection;
- (id)mt_selectedCellColor;	// IMP=0x0000000100153ff8
- (id)mt_separatorColor;	// IMP=0x0000000100153fbc
- (id)mt_artworkBorderColor;	// IMP=0x0000000100153f80
- (id)mt_secondaryTextColor;	// IMP=0x0000000100153f44
- (id)mt_primaryTextColor;	// IMP=0x0000000100153f08
- (_Bool)mt_isDarkBackground;	// IMP=0x0000000100153e98
- (id)mt_shouldRTLMirrorStackDepth;	// IMP=0x00000001001725f8
- (void)mt_setShouldRTLMirrorStackDepth:(id)arg1;	// IMP=0x00000001001725e8
@property(nonatomic, getter=mt_enableAutomaticRTLMirroringForSubviews, setter=mt_setEnableAutomaticRTLMirroringForSubviews:) _Bool mt_enableAutomaticRTLMirroringForSubviews;
@property(nonatomic, getter=mt_isExcludedFromAutomaticRTLMirroring, setter=mt_setExcludedFromAutomaticRTLMirroring:) _Bool mt_excludedFromAutomaticRTLMirroring;
- (void)mt_RTLMirrorIfNeeded;	// IMP=0x0000000100172144
- (void)mt_setShouldRTLMirror;	// IMP=0x0000000100172090
- (_Bool)isVerticallyRegular;	// IMP=0x00000001001d8a18
- (_Bool)isVerticallyCompact;	// IMP=0x00000001001d89c8
- (_Bool)isVerticallySpecified;	// IMP=0x00000001001d8978
- (_Bool)isHorizontallyRegular;	// IMP=0x00000001001d8928
- (_Bool)isHorizontallyCompact;	// IMP=0x00000001001d88d8
- (_Bool)isHorizontallySpecified;	// IMP=0x00000001001d8888
- (struct CGRect)adjustRectCenter:(struct CGRect)arg1 fromView:(id)arg2;	// IMP=0x00000001001d87bc
- (_Bool)isViewSizeFullScreenInWindow:(id)arg1 ignoreInWindowCheck:(_Bool)arg2;	// IMP=0x00000001001d8604
@property(retain, nonatomic) UIColor *debugingBorderColor;
- (void)attachPopUpAnimation;	// IMP=0x00000001001d8070
- (void)setRoundedCorners:(long long)arg1 radius:(double)arg2;	// IMP=0x00000001001d7e2c
- (void)printResponderChain;	// IMP=0x00000001001d7d58
- (id)findFirstResponder;	// IMP=0x00000001001d7be0
- (id)ancestorOfClass:(Class)arg1;	// IMP=0x00000001001d7b44
- (id)subviewOfClass:(Class)arg1;	// IMP=0x00000001001d7930
- (id)imageSnapshot;	// IMP=0x00000001001d77fc
- (id)snapshot_cg;	// IMP=0x00000001001d76f4
- (void)debugHighlightViewWithColor:(id)arg1 width:(double)arg2;	// IMP=0x00000001001d7588
- (void)debugHighlightViewBlue;	// IMP=0x00000001001d7530
- (void)debugHighlightView;	// IMP=0x00000001001d74d8
@end
