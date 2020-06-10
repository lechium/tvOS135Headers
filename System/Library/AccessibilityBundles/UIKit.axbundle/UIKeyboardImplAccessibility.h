/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIKeyboardImplAccessibility_super.h>

@interface UIKeyboardImplAccessibility : __UIKeyboardImplAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)insertText:(id)arg1 ;
-(BOOL)autocorrectSpellingEnabled;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)setInHardwareKeyboardMode:(BOOL)arg1 ;
-(void)unmarkText:(id)arg1 ;
-(void)acceptCandidate:(id)arg1 ;
-(void)dismissKeyboard;
-(void)showKeyboard;
-(void)textDidChange:(id)arg1 ;
-(BOOL)_axIsObservingAppLifecycleNotifications;
-(void)_axUnregisterForVoiceOverNotifications:(id)arg1 ;
-(void)_axRegisterForVoiceOverNotifications:(id)arg1 ;
-(void)_axHandleVoiceOverStatusChanged:(id)arg1 ;
-(void)_axSetIsObservingAppLifecycleNotifications:(BOOL)arg1 ;
-(BOOL)_axIsObservingVoiceOverNotifications;
-(void)_axSetIsObservingVoiceOverNotifications:(BOOL)arg1 ;
-(void)_axUpdateAutocorrectionSettings;
-(BOOL)_axIsHandwritingEnabled;
-(BOOL)autocorrectionPreference;
-(void)setShift:(BOOL)arg1 autoshift:(BOOL)arg2 ;
-(void)setInputMode:(id)arg1 userInitiated:(BOOL)arg2 ;
-(void)hideKeyboard;
-(void)_setAttributedMarkedText:(id)arg1 selectedRange:(NSRange)arg2 inputString:(id)arg3 searchString:(id)arg4 compareAttributes:(BOOL)arg5 ;
-(id)_accessibilityKeyboardInputDelegate;
-(BOOL)_accessibilityInputObjectUsesSecureText:(id)arg1 ;
-(void)handleKeyboardInput:(id)arg1 executionContext:(id)arg2 ;
-(void)completeDeleteOnceFromInputWithCharacterBefore:(unsigned)arg1 ;
-(void)setInputModeToNextInPreferredList;
-(void)updateAutocorrectPrompt:(id)arg1 ;
-(BOOL)acceptWord:(id)arg1 firstDelete:(unsigned long long)arg2 forInput:(id)arg3 ;
-(void)toggleSoftwareKeyboard;
-(void)setInputModeToNextInPreferredListWithExecutionContext:(id)arg1 ;
-(void)updateTextCandidateView;
-(void)updateLayoutForInterfaceOrientation:(long long)arg1 ;
-(void)completeHandleKeyEvent:(id)arg1 ;
-(BOOL)callShouldReplaceExtendedRange:(long long)arg1 withText:(id)arg2 includeMarkedText:(BOOL)arg3 ;
-(void)_axResetFKAFocusToFirstResponder;
-(BOOL)callShouldInsertText:(id)arg1 ;
-(BOOL)callShouldDeleteWithWordCountForRapidDelete:(int)arg1 characterCountForRapidDelete:(int)arg2 ;
-(BOOL)_axShouldShowKeyboard;
-(void)_axShowKeyboardIfHidden;
-(void)showKeyboardIfNeeded;
-(BOOL)_shouldMinimizeForHardwareKeyboard;
-(void)_axSetIsHandwritingEnabled:(BOOL)arg1 ;
@end

