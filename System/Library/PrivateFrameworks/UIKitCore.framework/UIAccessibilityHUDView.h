/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIAccessibilityHUDItem, UIView, UIVisualEffectView, UIBlurEffect, UIImageView, UILabel;

@interface UIAccessibilityHUDView : UIView {

	UIAccessibilityHUDItem* _item;
	UIView* _transformContainer;
	UIVisualEffectView* _effectView;
	UIBlurEffect* _blurEffect;
	UIVisualEffectView* _itemEffectView;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UIView* _customView;

}

@property (nonatomic,copy) UIAccessibilityHUDItem * item;              //@synthesize item=_item - In the implementation block
+(CGSize)preferredHUDSize;
-(UIAccessibilityHUDItem *)item;
-(void)setItem:(UIAccessibilityHUDItem *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)layoutManager;
-(id)imageView;
-(void)layoutSubviews;
-(id)titleLabel;
-(void)dismissAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)customView;
-(id)_contentEffectsForItem:(id)arg1 ;
-(void)_updateLabelForItem;
-(void)_show:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithHUDItem:(id)arg1 ;
-(void)showAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)containerViewForLayout;
-(id)itemContainerViewForLayout;
-(UIEdgeInsets)imageInsetsForLayout;
@end

