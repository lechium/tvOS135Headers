/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIKeyInput.h>

@protocol PKPinCodeFieldDelegate;
@class NSCharacterSet, NSMutableString, NSArray, UILabel, NSString, UITextInputPasswordRules;

@interface PKPinCodeField : UIView <UIKeyInput> {

	unsigned long long _pinCodeLength;
	NSCharacterSet* _numbersOnlyCharacterSet;
	NSMutableString* _pinCode;
	double _fontHeight;
	NSArray* _numberLabels;
	NSArray* _dashViews;
	UILabel* _hyphenLabel;
	BOOL _keyboardOverrideEnabled;
	BOOL _hyphenatePinCode;
	id<PKPinCodeFieldDelegate> _delegate;

}

@property (assign,nonatomic) BOOL hyphenatePinCode;                                      //@synthesize hyphenatePinCode=_hyphenatePinCode - In the implementation block
@property (assign,nonatomic,__weak) id<PKPinCodeFieldDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * pinCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
@property (nonatomic,readonly) BOOL hasText; 
-(id<PKPinCodeFieldDelegate>)delegate;
-(void)setDelegate:(id<PKPinCodeFieldDelegate>)arg1 ;
-(long long)keyboardType;
-(BOOL)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)canBecomeFirstResponder;
-(id)initWithPinCodeLength:(unsigned long long)arg1 delegate:(id)arg2 ;
-(void)setHyphenatePinCode:(BOOL)arg1 ;
-(NSString *)pinCode;
-(void)setPinCode:(NSString *)arg1 ;
-(void)updateCharacterVisibility;
-(BOOL)hyphenatePinCode;
@end
