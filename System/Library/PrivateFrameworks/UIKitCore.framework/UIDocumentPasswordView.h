/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol UIDocumentPasswordViewDelegate;
@class UIDocumentPasswordField, UILabel, NSObject, UITextField, NSString;

@interface UIDocumentPasswordView : UIView <UITextFieldDelegate> {

	UIDocumentPasswordField* _passwordTextField;
	UILabel* _label;
	NSObject*<UIDocumentPasswordViewDelegate> passwordDelegate;

}

@property (assign,nonatomic) NSObject*<UIDocumentPasswordViewDelegate> passwordDelegate; 
@property (nonatomic,readonly) UITextField * passwordField;                                           //@synthesize passwordTextField=_passwordTextField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)_canDrawContent;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id)initWithDocumentName:(id)arg1 ;
-(void)setPasswordDelegate:(NSObject*<UIDocumentPasswordViewDelegate>)arg1 ;
-(UITextField *)passwordField;
-(id)_labelFont;
-(id)_labelTextColor;
-(void)_passwordEntered:(id)arg1 ;
-(double)_labelHorizontalOffset;
-(double)_textFieldWidth;
-(NSObject*<UIDocumentPasswordViewDelegate>)passwordDelegate;
@end

