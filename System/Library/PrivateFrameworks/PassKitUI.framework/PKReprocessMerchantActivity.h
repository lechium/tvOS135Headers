/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivity.h>

@class PKPaymentTransaction, PKPaymentPass;

@interface PKReprocessMerchantActivity : UIActivity {

	PKPaymentTransaction* _transaction;
	PKPaymentPass* _paymentPass;

}
-(id)activityImage;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(id)initWithTransaction:(id)arg1 paymentPass:(id)arg2 ;
-(void)prepareWithActivityItems:(id)arg1 ;
@end
