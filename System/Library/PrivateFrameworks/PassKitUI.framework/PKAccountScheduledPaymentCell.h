/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UILabel, UITableViewCellLayoutManager, NSTimeZone, PKAccountPayment, UIColor;

@interface PKAccountScheduledPaymentCell : UITableViewCell {

	UILabel* _frequencyLabel;
	UILabel* _statusLabel;
	UILabel* _amountLabel;
	UITableViewCellLayoutManager* _layoutManager;
	NSTimeZone* _timeZone;
	BOOL _hasPaymentDueDate;
	BOOL _sizing;
	BOOL _useStackedLayout;
	BOOL _onHold;
	PKAccountPayment* _payment;
	UIColor* _titleColor;
	unsigned long long _featureIdentifier;

}

@property (assign,nonatomic) BOOL onHold;                                       //@synthesize onHold=_onHold - In the implementation block
@property (assign,nonatomic,__weak) PKAccountPayment * payment;                 //@synthesize payment=_payment - In the implementation block
@property (nonatomic,copy) UIColor * titleColor;                                //@synthesize titleColor=_titleColor - In the implementation block
@property (assign,nonatomic) unsigned long long featureIdentifier;              //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(unsigned long long)featureIdentifier;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIColor *)titleColor;
-(void)setTitleColor:(UIColor *)arg1 ;
-(void)setFeatureIdentifier:(unsigned long long)arg1 ;
-(PKAccountPayment *)payment;
-(void)setPayment:(PKAccountPayment *)arg1 ;
-(id)_dateString;
-(UIEdgeInsets)_effectiveLayoutMargins;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(BOOL)_useStackedLayoutForUsableWidth:(double)arg1 ;
-(id)_frequencyAttributedString;
-(id)_amountAttributedString;
-(id)_statusAttributedString;
-(id)_frequencyString;
-(id)_amountString;
-(void)setPayment:(id)arg1 forAccount:(id)arg2 ;
-(BOOL)onHold;
-(void)setOnHold:(BOOL)arg1 ;
@end
