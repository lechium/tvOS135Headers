/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableViewCell.h>

@class PKPaymentSetupProduct;

@interface PKPaymentSetupProductCell : PKTableViewCell {

	BOOL _drawsTopSeperator;
	PKPaymentSetupProduct* _product;
	double _textLabelOffset;

}

@property (nonatomic,retain) PKPaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
@property (assign,nonatomic) double textLabelOffset;                       //@synthesize textLabelOffset=_textLabelOffset - In the implementation block
@property (assign,nonatomic) BOOL drawsTopSeperator;                       //@synthesize drawsTopSeperator=_drawsTopSeperator - In the implementation block
+(id)reuseIdentifier;
-(id)init;
-(void)drawRect:(CGRect)arg1 ;
-(PKPaymentSetupProduct *)product;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(void)layoutSubviews;
-(void)_updateDisplay;
-(void)pk_applyAppearance:(id)arg1 ;
-(id)pk_childrenForAppearance;
-(void)setTextLabelOffset:(double)arg1 ;
-(double)textLabelOffset;
-(BOOL)drawsTopSeperator;
-(void)setDrawsTopSeperator:(BOOL)arg1 ;
@end
