/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIColor;

@interface PKTableViewCell : UITableViewCell {

	BOOL _showsActionSpinner;
	UIColor* _highlightColor;
	UIColor* _checkmarkAccessoryColor;
	UIColor* _customAccessoryColor;
	double _minimumHeight;

}

@property (nonatomic,copy) UIColor * highlightColor;                       //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,copy) UIColor * checkmarkAccessoryColor;              //@synthesize checkmarkAccessoryColor=_checkmarkAccessoryColor - In the implementation block
@property (nonatomic,copy) UIColor * customAccessoryColor;                 //@synthesize customAccessoryColor=_customAccessoryColor - In the implementation block
@property (assign,nonatomic) BOOL showsActionSpinner;                      //@synthesize showsActionSpinner=_showsActionSpinner - In the implementation block
@property (assign,nonatomic) double minimumHeight;                         //@synthesize minimumHeight=_minimumHeight - In the implementation block
-(void)setHighlightColor:(UIColor *)arg1 ;
-(UIColor *)highlightColor;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)minimumHeight;
-(void)setMinimumHeight:(double)arg1 ;
-(id)_checkmarkImage:(BOOL)arg1 ;
-(id)_disclosureChevronImage:(BOOL)arg1 ;
-(void)pk_applyAppearance:(id)arg1 ;
-(UIColor *)customAccessoryColor;
-(void)setShowsActionSpinner:(BOOL)arg1 ;
-(BOOL)showsActionSpinner;
-(void)setCheckmarkAccessoryColor:(UIColor *)arg1 ;
-(void)setCustomAccessoryColor:(UIColor *)arg1 ;
-(UIColor *)checkmarkAccessoryColor;
@end
