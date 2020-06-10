/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVUIKit/TVUIKit-Structs.h>
#import <TVUIKit/_TVImageContentView.h>

@class _UIFloatingContentView, UIView, UIImage;

@interface _TVMonogramContentView : _TVImageContentView {

	_UIFloatingContentView* _floatingContentView;
	UIView* _unfocusedShadowView;
	UIView* _focusedShadowView;
	UIImage* _unfocusedShadowImage;
	UIImage* _focusedShadowImage;

}

@property (nonatomic,retain) _UIFloatingContentView * floatingContentView;              //@synthesize floatingContentView=_floatingContentView - In the implementation block
@property (nonatomic,retain) UIView * unfocusedShadowView;                              //@synthesize unfocusedShadowView=_unfocusedShadowView - In the implementation block
@property (nonatomic,retain) UIView * focusedShadowView;                                //@synthesize focusedShadowView=_focusedShadowView - In the implementation block
@property (nonatomic,retain) UIImage * unfocusedShadowImage;                            //@synthesize unfocusedShadowImage=_unfocusedShadowImage - In the implementation block
@property (nonatomic,retain) UIImage * focusedShadowImage;                              //@synthesize focusedShadowImage=_focusedShadowImage - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)setUnfocusedShadowImage:(UIImage *)arg1 ;
-(void)setFocusedShadowImage:(UIImage *)arg1 ;
-(UIView *)unfocusedShadowView;
-(void)setUnfocusedShadowView:(UIView *)arg1 ;
-(UIView *)focusedShadowView;
-(void)setFocusedShadowView:(UIView *)arg1 ;
-(UIImage *)unfocusedShadowImage;
-(UIImage *)focusedShadowImage;
-(_UIFloatingContentView *)floatingContentView;
-(id)effectiveContentView;
-(NSDirectionalEdgeInsets)intrinsicFocusSizeIncrease;
-(void)setLockupViewState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)updateAppearanceForLockupViewState:(unsigned long long)arg1 ;
-(void)_createFloatingContentView;
-(void)_createShadowViews;
-(void)setFloatingContentView:(_UIFloatingContentView *)arg1 ;
@end

