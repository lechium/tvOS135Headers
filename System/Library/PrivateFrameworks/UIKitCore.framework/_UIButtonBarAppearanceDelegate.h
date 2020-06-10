/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class _UIBarButtonItemAppearanceStorage, UIColor;


@protocol _UIButtonBarAppearanceDelegate <NSObject,UICoordinateSpace>
@property (nonatomic,readonly) _UIBarButtonItemAppearanceStorage * appearanceStorage; 
@property (nonatomic,readonly) long long barType; 
@property (nonatomic,readonly) BOOL compactMetrics; 
@property (nonatomic,readonly) BOOL isRTL; 
@property (nonatomic,readonly) BOOL barWantsLetterpress; 
@property (nonatomic,readonly) UIColor * tintColor; 
@property (nonatomic,readonly) BOOL centerTextButtons; 
@property (nonatomic,readonly) double defaultEdgeSpacing; 
@property (nonatomic,readonly) double defaultTextPadding; 
@property (nonatomic,readonly) double backButtonMargin; 
@property (nonatomic,readonly) double backButtonMaximumWidth; 
@required
-(BOOL)isRTL;
-(UIColor *)tintColor;
-(_UIBarButtonItemAppearanceStorage *)appearanceStorage;
-(id)backIndicatorImage;
-(id)backIndicatorMaskImage;
-(BOOL)barWantsLetterpress;
-(BOOL)centerTextButtons;
-(unsigned long long)edgesPaddingBarButtonItem:(id)arg1;
-(BOOL)compactMetrics;
-(long long)barType;
-(double)backButtonMargin;
-(double)defaultEdgeSpacing;
-(double)absorptionForItem:(id)arg1;
-(double)defaultTextPadding;
-(double)backButtonMaximumWidth;

@end

