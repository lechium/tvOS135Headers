/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIInputView.h>

@class UIStackView, UIColor;

@interface PKNumberPadInputView : UIInputView {

	UIStackView* _verticalStackView;
	BOOL _showsDecimalPointButton;
	UIColor* _numberPadColor;

}

@property (assign,nonatomic) BOOL showsDecimalPointButton;              //@synthesize showsDecimalPointButton=_showsDecimalPointButton - In the implementation block
@property (nonatomic,copy) UIColor * numberPadColor;                    //@synthesize numberPadColor=_numberPadColor - In the implementation block
+(CGSize)defaultSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setShowsDecimalPointButton:(BOOL)arg1 ;
-(id)initWithDefaultFrame;
-(void)setNumberPadColor:(UIColor *)arg1 ;
-(void)_reloadSubviews;
-(void)_performDelete;
-(void)_performInsertion:(id)arg1 ;
-(void)_numericKeyPressed:(id)arg1 ;
-(BOOL)showsDecimalPointButton;
-(UIColor *)numberPadColor;
@end

