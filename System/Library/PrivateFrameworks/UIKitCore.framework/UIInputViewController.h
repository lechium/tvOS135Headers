/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKitCore/_UITextDocumentInterfaceDelegate.h>
#import <UIKit/UITextInputDelegate.h>

@protocol UITextDocumentProxy;
@class NSString, UIKeyboard, UIInputView;

@interface UIInputViewController : UIViewController <_UITextDocumentInterfaceDelegate, UITextInputDelegate> {

	BOOL _commitInputModeOnTouchEnd;
	BOOL _inputModeListIsShown;
	BOOL _viewConformsToRemotePlaceholder;
	double _touchBegan;
	BOOL _alignsToContentViewController;
	BOOL _autosizeToCurrentKeyboard;
	BOOL _hasDictationKey;
	id<UITextDocumentProxy> _textDocumentProxy;
	NSString* _primaryLanguage;

}

@property (nonatomic,readonly) UIKeyboard * _keyboard; 
@property (nonatomic,readonly) BOOL _isPlaceholder; 
@property (assign,nonatomic) BOOL _alignsToContentViewController;                                                //@synthesize alignsToContentViewController=_alignsToContentViewController - In the implementation block
@property (assign,setter=_setAutosizeToCurrentKeyboard:,nonatomic) BOOL _autosizeToCurrentKeyboard;              //@synthesize autosizeToCurrentKeyboard=_autosizeToCurrentKeyboard - In the implementation block
@property (nonatomic,retain) UIInputView * inputView; 
@property (nonatomic,readonly) id<UITextDocumentProxy> textDocumentProxy;                                        //@synthesize textDocumentProxy=_textDocumentProxy - In the implementation block
@property (nonatomic,copy) NSString * primaryLanguage;                                                           //@synthesize primaryLanguage=_primaryLanguage - In the implementation block
@property (assign,nonatomic) BOOL hasDictationKey;                                                               //@synthesize hasDictationKey=_hasDictationKey - In the implementation block
@property (nonatomic,readonly) BOOL hasFullAccess; 
@property (nonatomic,readonly) BOOL needsInputModeSwitchKey; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_requiresProxyInterface;
+(void)presentDialogForAddingKeyboard;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)primaryLanguage;
-(id)_extensionContext;
-(void)setView:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIKeyboard *)_keyboard;
-(void)didReceiveMemoryWarning;
-(void)setInputView:(UIInputView *)arg1 ;
-(UIInputView *)inputView;
-(void)selectionWillChange:(id)arg1 ;
-(void)selectionDidChange:(id)arg1 ;
-(CGSize)_systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(BOOL)_isPlaceholder;
-(void)dismissKeyboard;
-(void)textDidChange:(id)arg1 ;
-(id)_proxyInterface;
-(void)_setExtensionContextUUID:(id)arg1 ;
-(BOOL)_canBecomeFirstResponder;
-(BOOL)_canResignIfContainsFirstResponder;
-(id)_compatibilityController;
-(void)setPrimaryLanguage:(NSString *)arg1 ;
-(void)_setupInputController;
-(id)_textDocumentInterface;
-(void)_setAutosizeToCurrentKeyboard:(BOOL)arg1 ;
-(void)_updateConformanceCache;
-(id<UITextDocumentProxy>)textDocumentProxy;
-(BOOL)needsInputModeSwitchKey;
-(void)advanceToNextInputMode;
-(void)textWillChange:(id)arg1 ;
-(void)_willResetDocumentState;
-(void)_didResetDocumentState;
-(void)_setTextDocumentProxy:(id)arg1 ;
-(void)set_autosizeToCurrentKeyboard:(BOOL)arg1 ;
-(BOOL)_shouldForwardSystemLayoutFittingSizeChanges;
-(BOOL)hasFullAccess;
-(void)proceedShouldReturnIfPossibleForASP;
-(void)setHasDictationKey:(BOOL)arg1 ;
-(void)handleInputModeListFromView:(id)arg1 withEvent:(id)arg2 ;
-(void)returnToPreviousInputMode;
-(void)requestSupplementaryLexiconWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_alignsToContentViewController;
-(void)set_alignsToContentViewController:(BOOL)arg1 ;
-(BOOL)_autosizeToCurrentKeyboard;
-(BOOL)hasDictationKey;
@end

