/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UITextViewAccessibility_super.h>

@interface UITextViewAccessibility : __UITextViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)accessibilityValue;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityPlaceholderValue;
-(CGPoint)accessibilityActivationPoint;
-(CGRect)accessibilityFrame;
-(void)_accessibilitySetValue:(id)arg1 ;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(BOOL)resignFirstResponder;
-(void)setAttributedText:(id)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setAttributedPlaceholder:(id)arg1 ;
-(id)accessibilityElements;
-(unsigned long long)_accessibilityAutomationType;
-(BOOL)canBecomeFocused;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_accessibilitySupplementaryHeaderViews;
-(BOOL)accessibilityActivate;
-(long long)accessibilityContainerType;
-(id)_accessibilityInternalTextLinks;
-(id)accessibilityCustomRotors;
-(id)accessibilityAttributedValue;
-(BOOL)_accessibilityOverridesPotentiallyAttributedAPISelector:(SEL)arg1 ;
-(id)_accessibilityAttributedValueForRange:(NSRange*)arg1 ;
-(CGRect)_accessibilityBoundsForRange:(NSRange)arg1 ;
-(id)_accessibilityDataDetectorScheme:(CGPoint)arg1 ;
-(double)_accessibilityFontSize;
-(BOOL)_allowCustomActionHintSpeakOverride;
-(void)_accessibilityLoadAccessibilityInformation;
-(BOOL)_accessibilityTextViewShouldBreakUpParagraphs;
-(id)_accessibilityAttributedTextRetrieval;
-(void)setSelectedRange:(NSRange)arg1 ;
-(BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(id)_accessibilityGetValue;
-(void)_axRegisterForDDNotificationIfNeeded;
-(void)_axClearCachedLinkData;
-(id)_accessibilityGetValue:(BOOL)arg1 ;
-(BOOL)_axIsOnlyOneLinkElement;
-(BOOL)_accessibilityActivateLink:(id)arg1 ;
-(id)_accessibilityParagraphElements;
-(id)_accessibilityParagraphLinksCustomRotor;
-(id)_accessibilityParagraphElementsWithLinks;
-(id)_accessibilityLinksForRange:(NSRange)arg1 ;
-(BOOL)_axDidRegisterForDDNotification;
-(void)_axSetDidRegisterForDDNotification:(BOOL)arg1 ;
@end

