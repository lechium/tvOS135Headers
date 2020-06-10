/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKTableViewCell.h>

@class UILabel, PKSuperscriptedCurrencyAmountLabel, UIImageView, PKActivityEventPeerPaymentTransaction, UIViewController, NSString;

@interface PKPeerPaymentActivitySummaryCell : PKTableViewCell {

	UILabel* _titleView;
	UILabel* _subtitleView;
	UILabel* _timeView;
	PKSuperscriptedCurrencyAmountLabel* _amountLabel;
	UIImageView* _unreadIndicatorView;
	PKActivityEventPeerPaymentTransaction* _event;
	UIViewController* _avatarViewController;
	NSString* _contactName;

}

@property (nonatomic,retain) PKActivityEventPeerPaymentTransaction * event;              //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) UIViewController * avatarViewController;                    //@synthesize avatarViewController=_avatarViewController - In the implementation block
@property (nonatomic,retain) NSString * contactName;                                     //@synthesize contactName=_contactName - In the implementation block
+(double)height;
+(id)unreadIndicatorImage;
+(double)separatorLeadingInset;
-(void)dealloc;
-(PKActivityEventPeerPaymentTransaction *)event;
-(void)prepareForReuse;
-(void)setEvent:(PKActivityEventPeerPaymentTransaction *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)contactName;
-(void)setContactName:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateViews;
-(void)setAvatarViewController:(UIViewController *)arg1 ;
-(UIViewController *)avatarViewController;
@end

