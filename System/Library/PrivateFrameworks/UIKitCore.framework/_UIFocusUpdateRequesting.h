/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIFocusSystem, _UIFocusInputDeviceInfo, UIFocusAnimationCoordinator;


@protocol _UIFocusUpdateRequesting <NSObject>
@property (nonatomic,__weak,readonly) UIFocusSystem * focusSystem; 
@property (nonatomic,readonly) BOOL shouldPlayFocusSound; 
@property (nonatomic,readonly) BOOL requiresNextFocusedItem; 
@property (nonatomic,readonly) BOOL requiresEnvironmentValidation; 
@property (nonatomic,readonly) BOOL allowsFocusingCurrentItem; 
@property (nonatomic,readonly) BOOL allowsDeferral; 
@property (nonatomic,readonly) BOOL allowsFocusRestoration; 
@property (nonatomic,readonly) BOOL shouldPerformHapticFeedback; 
@property (nonatomic,readonly) _UIFocusInputDeviceInfo * inputDeviceInfo; 
@property (nonatomic,readonly) UIFocusAnimationCoordinator * animationCoordinator; 
@required
-(UIFocusSystem *)focusSystem;
-(UIFocusAnimationCoordinator *)animationCoordinator;
-(BOOL)allowsFocusRestoration;
-(BOOL)allowsDeferral;
-(BOOL)shouldPlayFocusSound;
-(BOOL)shouldPerformHapticFeedback;
-(BOOL)requiresNextFocusedItem;
-(BOOL)allowsFocusingCurrentItem;
-(BOOL)requiresEnvironmentValidation;
-(_UIFocusInputDeviceInfo *)inputDeviceInfo;

@end

