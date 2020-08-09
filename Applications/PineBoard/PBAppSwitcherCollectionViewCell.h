//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, PBAppSwitcherItem, PBAppSwitcherTitleView, TVSUIOuterShadowView, UIView;

@interface PBAppSwitcherCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate>
{
    UIView *_sceneView;	// 8 = 0x8
    PBAppSwitcherItem *_appSwitcherItem;	// 16 = 0x10
    PBAppSwitcherTitleView *_titleView;	// 24 = 0x18
    UIView *_itemContentView;	// 32 = 0x20
    UIView *_containerView;	// 40 = 0x28
    UIView *_dimmingView;	// 48 = 0x30
    TVSUIOuterShadowView *_shadowView;	// 56 = 0x38
    double _contentCornerRadius;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100116198
@property(nonatomic) double contentCornerRadius; // @synthesize contentCornerRadius=_contentCornerRadius;
@property(readonly, nonatomic) TVSUIOuterShadowView *shadowView; // @synthesize shadowView=_shadowView;
@property(readonly, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) UIView *itemContentView; // @synthesize itemContentView=_itemContentView;
@property(readonly, nonatomic) PBAppSwitcherTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) PBAppSwitcherItem *appSwitcherItem; // @synthesize appSwitcherItem=_appSwitcherItem;
@property(retain, nonatomic) UIView *sceneView; // @synthesize sceneView=_sceneView;
- (void)_setShadowRadius:(double)arg1 alpha:(double)arg2;	// IMP=0x0000000100115d54
- (void)_setDimingAlpha:(double)arg1;	// IMP=0x0000000100115cbc
- (void)_setContentAlpha:(double)arg1;	// IMP=0x0000000100115c38
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100115964
- (void)layoutSubviews;	// IMP=0x000000010011527c
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x0000000100114d24
- (void)dealloc;	// IMP=0x0000000100114cb8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001001145f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
