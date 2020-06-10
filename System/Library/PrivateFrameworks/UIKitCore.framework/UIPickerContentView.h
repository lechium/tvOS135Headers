/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView;

@interface UIPickerContentView : UIView {

	UILabel* _titleLabel;
	UIImageView* _checkView;
	SCD_Struct_UI27 _pickerContentViewFlags;

}

@property (assign,getter=isChecked,nonatomic) BOOL checked; 
@property (nonatomic,readonly) UILabel * titleLabel; 
+(double)_checkmarkOffset;
-(void)setChecked:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(UILabel *)titleLabel;
-(BOOL)isChecked;
-(BOOL)_isSelectable;
-(double)labelWidthForBounds:(CGRect)arg1 ;
-(id)checkedColor;
@end
