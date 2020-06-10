/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableViewCell.h>

@class UILabel;

@interface PKMultilineKeyValueTableViewCell : PKTableViewCell {

	UILabel* _keyLabel;
	UILabel* _valueLabel;

}

@property (nonatomic,retain) UILabel * keyLabel;                //@synthesize keyLabel=_keyLabel - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;              //@synthesize valueLabel=_valueLabel - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UILabel *)valueLabel;
-(void)setValueLabel:(UILabel *)arg1 ;
-(UILabel *)keyLabel;
-(void)setKeyLabel:(UILabel *)arg1 ;
@end
