/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKExplanationViewController.h>

@class PKAccountAutomaticPaymentsController;

@interface PKAccountAutomaticPaymentsSetupCompleteViewController : PKExplanationViewController {

	PKAccountAutomaticPaymentsController* _controller;
	unsigned long long _featureIdentifier;

}
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)_doneButton;
-(id)initWithController:(id)arg1 ;
-(id)bodyString;
-(id)_paymentDateString;
-(long long)_paymentDay;
-(id)_paymentDayString;
-(id)_paymentDayNameString;
-(void)_donePressed;
@end

