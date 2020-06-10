/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UITextContentViewAccessibility_super.h>

@interface UITextContentViewAccessibility : __UITextContentViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)accessibilityValue;
-(BOOL)isAccessibilityElement;
-(unsigned long long)accessibilityTraits;
-(CGPoint)accessibilityActivationPoint;
-(CGRect)accessibilityFrame;
-(void)_accessibilitySetValue:(id)arg1 ;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(BOOL)keyboardInputChanged:(id)arg1 ;
-(id)_accessibilityTextViewTextOperationResponder;
-(unsigned long long)_accessibilityAutomationType;
-(id)_accessibilitySupplementaryHeaderViews;
-(BOOL)_accessibilitySupportsActivateAction;
-(BOOL)accessibilityActivate;
-(id)accessibilityCustomRotors;
-(id)_accessibilityAttributedValueForRange:(NSRange*)arg1 ;
-(id)_accessibilityDataDetectorScheme:(CGPoint)arg1 ;
-(BOOL)_accessibilityShouldAnnounceFontInfo;
-(id)_accessibilityAttributedTextRetrieval;
-(BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(void)_accessibilitySetShouldUpdateCache:(BOOL)arg1 ;
-(BOOL)_accessibilityShouldUpdateTextCache;
@end
