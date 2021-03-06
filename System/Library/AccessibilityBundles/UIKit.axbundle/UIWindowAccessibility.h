/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIWindowAccessibility_super.h>

@interface UIWindowAccessibility : __UIWindowAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityContainer;
-(unsigned long long)accessibilityTraits;
-(unsigned)_accessibilityContextId;
-(id)accessibilityRemoteSubstituteChildren:(id)arg1 ;
-(unsigned long long)_accessibilityAutomationType;
-(id)_iosAccessibilityAttributeValue:(long long)arg1 ;
-(BOOL)accessibilityElementsHidden;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)accessibilityIsWindow;
-(id)_accessibilityUserTestingParent;
-(int)_accessibilityRemotePid;
-(long long)_accessibilityInterfaceOrientationForScreenCoordinates;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)_setFirstResponder:(id)arg1 ;
-(CGPoint)warpPoint:(CGPoint)arg1 ;
-(void)_axListenForRemoteElement;
-(id)_accessibilityAllRemoteElements;
-(id)_accessibilityRemoteElement;
-(void)_axUpdateForRemoteElement:(id)arg1 ;
-(void)_accessibilitySetAllRemoteElements:(id)arg1 ;
-(void)_axCheckForExistingRemoteElements;
-(void)_axRemoteElementRegistered:(id)arg1 ;
-(void)_orderFrontWithoutMakingKey;
-(id)_accessibilityIOSMacRotors;
-(void)_accessibilitySetIOSMacRotors:(id)arg1 ;
@end

