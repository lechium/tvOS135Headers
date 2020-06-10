/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView;

@interface _UIDragBadge : UIView {

	UILabel* _label;
	UIImageView* _imageView;
	long long _style;
	long long _itemCount;

}

@property (nonatomic,readonly) UILabel * _label;                             //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIImageView * _imageView;                     //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) long long style;                                //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long itemCount;                            //@synthesize itemCount=_itemCount - In the implementation block
@property (nonatomic,readonly) CGPoint anchorPointForAlignment; 
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(UILabel *)_label;
-(void)setItemCount:(long long)arg1 ;
-(long long)itemCount;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)_imageView;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)_updateForStyle;
-(void)_updateLabelTextFromItemCount;
-(CGPoint)anchorPointForAlignment;
@end

