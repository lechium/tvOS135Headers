/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKPeerPaymentActionViewController.h>
#import <libobjc.A.dylib/PKEnterCurrencyAmountViewDelegate.h>
#import <libobjc.A.dylib/PKEnterValueNewBalanceViewDelegate.h>
#import <libobjc.A.dylib/PKEnterCurrencyAmountPassViewDelegate.h>

@class UIScrollView, PKEnterCurrencyAmountPassView, NSString;

@interface PKPeerPaymentActionTransferToBankAmountPickerViewController : PKPeerPaymentActionViewController <PKEnterCurrencyAmountViewDelegate, PKEnterValueNewBalanceViewDelegate, PKEnterCurrencyAmountPassViewDelegate> {

	UIScrollView* _scrollView;
	PKEnterCurrencyAmountPassView* _amountPassView;
	BOOL _keyboardVisible;
	CGRect _keyboardFrame;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(void)keyboardWillShow:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)setMinBalance:(id)arg1 ;
-(void)setMaxBalance:(id)arg1 ;
-(void)setMinLoadAmount:(id)arg1 ;
-(void)setMaxLoadAmount:(id)arg1 ;
-(void)setCardBalance:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)enterCurrencyAmountPassViewDidLoadPassSnapshot:(id)arg1 ;
-(id)initWithPaymentPass:(id)arg1 webService:(id)arg2 context:(long long)arg3 ;
-(void)updateFirstResponder;
-(void)updateAccountValues;
-(void)willDismissViewController;
-(void)keyboardWillChange:(id)arg1 ;
-(void)_updateLayoutForKeyboardAction:(/*^block*/id)arg1 ;
-(BOOL)_shouldShakeWithNewAmount:(id)arg1 ;
-(BOOL)enterCurrencyAmountView:(id)arg1 shouldChangeAmountFrom:(id)arg2 to:(id)arg3 ;
-(void)enterCurrencyAmountViewDidChangeAmount:(id)arg1 ;
-(void)_updateCurrentAmount:(id)arg1 shouldGenerateNewSuggestions:(BOOL)arg2 ;
-(id)_nextBarButton;
-(void)_updateBarButtonEnabledState;
-(void)_currentAmountDidChangeTo:(id)arg1 shouldGenerateNewSuggestions:(BOOL)arg2 ;
-(void)_nextBarButtonPressed:(id)arg1 ;
-(BOOL)_isCurrentAmountValid;
@end
