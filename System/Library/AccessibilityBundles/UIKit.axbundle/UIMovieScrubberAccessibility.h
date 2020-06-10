/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIMovieScrubberAccessibility_super.h>

@interface UIMovieScrubberAccessibility : __UIMovieScrubberAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)dealloc;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)accessibilityElements;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
-(long long)accessibilityContainerType;
-(void)setThumbIsVisible:(BOOL)arg1 ;
-(void)_setValue:(double)arg1 andSendAction:(BOOL)arg2 ;
-(void)_accessibilityClearChildren;
-(void)setTrimStartValue:(double)arg1 ;
-(void)setTrimEndValue:(double)arg1 ;
-(void)_initSubviews;
-(void)_trimAnimationDidStop:(BOOL)arg1 glassView:(id)arg2 ;
-(void)_updateThumbLocation;
-(void)_sliderAnimationDidStop:(BOOL)arg1 ;
-(void)movieScrubberTrackView:(id)arg1 clampedSizeWidthDelta:(double)arg2 actualSizeWidthDelta:(double)arg3 originXDelta:(double)arg4 minimumVisibleValue:(double)arg5 maximumVisibleValue:(double)arg6 ;
-(void)_accessibilityNotifyDelegateWillBeginEditing;
-(void)_accessibilityNotifyDelegateScrubberDidBeginScrubbingWithHandle:(int)arg1 ;
-(double)_accessibilitySliderDeltaForFrame:(CGRect)arg1 ;
-(void)_accessibilityNotifyDelegateEditingStartValueDidChange:(double)arg1 ;
-(void)_accessibilityNotifyDelegateScrubberDidEndScrubbingWithHandle:(int)arg1 ;
-(void)_accessibilityNotifyDelegateEditingEndValueDidChange:(double)arg1 ;
-(void)_accessibilityIncrementMockSlider:(id)arg1 largeStep:(BOOL)arg2 ;
-(void)_accessibilityDecrementMockSlider:(id)arg1 largeStep:(BOOL)arg2 ;
@end
