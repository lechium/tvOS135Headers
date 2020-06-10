/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@protocol UIAccessibilityElementMockViewDelegateProtocol;
@class UIView;

@interface UIAccessibilityElementMockView : UIAccessibilityElement {

	id<UIAccessibilityElementMockViewDelegateProtocol> _delegate;
	long long _subviewIndex;
	UIView* _view;

}

@property (nonatomic,retain) UIView * view;                                                                   //@synthesize view=_view - In the implementation block
@property (assign,nonatomic,__weak) id<UIAccessibilityElementMockViewDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long subviewIndex;                                                          //@synthesize subviewIndex=_subviewIndex - In the implementation block
-(id)description;
-(void)dealloc;
-(id<UIAccessibilityElementMockViewDelegateProtocol>)delegate;
-(void)setDelegate:(id<UIAccessibilityElementMockViewDelegateProtocol>)arg1 ;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityValue;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(id)accessibilityLanguage;
-(unsigned long long)accessibilityTraits;
-(double)_accessibilityMinValue;
-(double)_accessibilityMaxValue;
-(NSRange)accessibilityRowRange;
-(id)accessibilityHint;
-(BOOL)_accessibilityScrollToVisible;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(CGPoint)accessibilityActivationPoint;
-(CGRect)accessibilityFrame;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(void)_accessibilitySetValue:(id)arg1 ;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(id)accessibilityIdentifier;
-(CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2 ;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)_accessibilityTextViewTextOperationResponder;
-(id)accessibilityElements;
-(void)setAccessibilityContainer:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(id)accessibilityCustomActions;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)accessibilityRespondsToUserInteraction;
-(BOOL)_accessibilityIsSpeakThisElement;
-(BOOL)_accessibilityIsScannerGroup;
-(id)_accessibilityScannerGroupElements;
-(unsigned long long)_accessibilityScannerGroupTraits;
-(long long)accessibilityCompareGeometry:(id)arg1 ;
-(BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
-(id)_accessibilityUserTestingChildren;
-(id)_accessibilityScrollAncestor;
-(BOOL)accessibilityPerformEscape;
-(BOOL)_accessibilityCanPerformEscapeAction;
-(BOOL)_accessibilitySupportsActivateAction;
-(BOOL)accessibilityActivate;
-(id)accessibilityCustomRotors;
-(id)_accessibilityUserTestingParent;
-(id)_accessibilityLineNumberAndColumnForPoint:(CGPoint)arg1 ;
-(NSRange)_accessibilityRangeForLineNumberAndColumn:(id)arg1 ;
-(CGRect)_accessibilityBoundsForRange:(NSRange)arg1 ;
-(NSRange)_accessibilityLineRangeForPosition:(unsigned long long)arg1 ;
-(unsigned long long)_accessibilityPositionInDirection:(long long)arg1 offset:(unsigned long long)arg2 forPosition:(unsigned long long)arg3 ;
-(CGPoint)_accessibilityMinScrubberPosition;
-(CGPoint)_accessibilityMaxScrubberPosition;
-(id)_accessibilityAbsoluteValue;
-(id)_accessibilityUserTestingElementType;
-(long long)_accessibilityPageIndex;
-(long long)_accessibilityPageCount;
-(void)accessibilityElementDidLoseFocus;
-(void)accessibilityElementDidBecomeFocused;
-(BOOL)accessibilityPerformMagicTap;
-(id)accessibilityIdentification;
-(long long)subviewIndex;
-(void)setSubviewIndex:(long long)arg1 ;
-(void)revalidate;
@end

