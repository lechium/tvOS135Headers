/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIViewAccessibility_super.h>

@interface UIViewAccessibility : __UIViewAccessibility_super
+(BOOL)_isSerializableAccessibilityElement;
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
+(id)_axFocusedWindowSubviews;
-(void)setHidden:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setAlpha:(double)arg1 ;
-(BOOL)isAccessibilityElement;
-(id)accessibilityContainer;
-(BOOL)_accessibilityIsInTableCell;
-(unsigned long long)accessibilityTraits;
-(CGRect)accessibilityFrame;
-(void)setIsAccessibilityElement:(BOOL)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(id)_accessibilitySortedElementsWithin;
-(BOOL)canBecomeFocused;
-(id)preferredFocusEnvironments;
-(BOOL)accessibilityElementsHidden;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)accessibilityViewIsModal;
-(id)_accessibilityViewController;
-(BOOL)accessibilityRespondsToUserInteraction;
-(id)_accessibilityObscuredScreenAllowedViews;
-(BOOL)accessibilityIsWindow;
-(id)accessibilityPath;
-(id)_accessibilityUserTestingChildren;
-(BOOL)_accessibilityServesAsContainingParentForOrdering;
-(id)_accessibilityAuditIssuesWithOptions:(id)arg1 ;
-(id)_accessibilityFrameDelegate;
-(double)_accessibilityViewAlpha;
-(BOOL)_accessibilityIsUserInteractionEnabled;
-(BOOL)_accessibilityIsInCollectionCell;
-(id)_accessibilitySupportGesturesAttributes;
-(id)_accessibilityAutomaticIdentifier;
-(long long)_accessibilityHorizontalSizeClass;
-(long long)_accessibilityVerticalSizeClass;
-(BOOL)accessibilityElementIsFocused;
-(BOOL)_accessibilityOnlyComparesByXAxis;
-(BOOL)_accessibilityIsFKARunningForFocusItem;
-(id)_accessibilityCirclePathBasedOnBoundsWidth;
-(BOOL)_accessibilityFKAShouldBeProcessed;
-(id)_accessibilityProxyView;
-(BOOL)_accessibilityViewIsActive;
-(BOOL)_isEligibleForFocusInteraction;
-(BOOL)_accessibilityInTopLevelTabLoop;
-(BOOL)_accessibilityUseAccessibilityFrameForHittest;
-(id)_axSubviews;
-(BOOL)_accessibilityHasButtonLikeGestureRecognizer;
-(id)_accessibilityRetrieveLabelFromTableViewCell;
-(BOOL)_accessibilityAvoidsMockViewContainers;
-(id)__accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityLastFocusedChild;
-(id)_accessibilityRetrieveIvarText;
-(BOOL)_axHasSingleFocusableSubview;
-(id)_accessibilitySubviewMatchingFKAView:(id)arg1 ;
-(BOOL)_accessibilityViewIsProbablyDimmingView;
-(CGRect)_accessibilityBounds;
-(id)_axBackgroundViewForCornerRadius;
-(CGRect)_accessibilityFrameForView:(id)arg1 ;
-(BOOL)_accessibilityIsSiblingOfModalizingBlocker;
-(BOOL)_axHasNoVisibleAxElements;
-(BOOL)_axViewIsOffScreen:(id)arg1 ;
-(BOOL)_accessibilityObscuredScreenAllowsView:(id)arg1 ;
-(BOOL)_accessibilityPointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilityBlocksInteraction;
-(id)_accessibilityHitTestSubviews;
-(BOOL)_accessibilityIsIgnored;
-(BOOL)_accessibilityViewIsBeingHitTested:(id)arg1 ;
-(BOOL)_accessibilityIsUserInteractionEnabledChain;
-(BOOL)_accessibilityModalViewBlocksView:(id)arg1 blockerView:(id*)arg2 ;
-(double)_accessibilityMaxFuzzyHitTestDistance;
-(id)_accessibilityCheckForAllowedModalView:(CGPoint)arg1 event:(id)arg2 ;
-(BOOL)_accessibilityShouldHitTestLayers;
-(id)_systemDefaultFocusGroupDescriptor;
-(id)_accessibilityUserTestingSubviewsSorted:(BOOL)arg1 ;
-(void)_axPrintSubviews:(long long)arg1 string:(id)arg2 ;
-(id)_axWindowSubviews;
-(BOOL)_accessibilityDidLoadAccessibilityInformation;
-(void)_setAccessibilityDidLoadAccessibilityInformation:(BOOL)arg1 ;
-(void)_notifyReferenceViewSizeChange;
-(id)_childFocusRegionsInRect:(CGRect)arg1 inCoordinateSpace:(id)arg2 ;
-(void)_accessibilityPostNotification:(id)arg1 ;
-(void)_accessibilityFinalize;
-(id)_superAccessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityChildVendingParent;
-(id)_axResponderChain;
@end

