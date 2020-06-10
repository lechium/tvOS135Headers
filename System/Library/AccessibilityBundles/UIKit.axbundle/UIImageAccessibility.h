/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIImageAccessibility_super.h>

@interface UIImageAccessibility : __UIImageAccessibility_super
+(id)imageWithContentsOfFile:(id)arg1 ;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3 ;
+(id)imageWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(long long)arg3 ;
+(id)kitImageNamed:(id)arg1 ;
+(BOOL)_isSerializableAccessibilityElement;
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
+(id)imageAtPath:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(CGImageRef)CGImage;
-(id)accessibilityLabel;
-(id)accessibilityIdentifier;
-(id)_flatImageWithColor:(id)arg1 ;
-(id)imageFlippedForRightToLeftLayoutDirection;
-(id)imageWithRenderingMode:(long long)arg1 ;
-(id)_accessibilityPhotoDescription;
-(id)resizableImageWithCapInsets:(UIEdgeInsets)arg1 resizingMode:(long long)arg2 ;
-(id)imageWithAlignmentRectInsets:(UIEdgeInsets)arg1 ;
-(void)_accessibilityApplyLabelOnMainThread:(id)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 cache:(BOOL)arg2 ;
-(id)_imageScaledToProportion:(double)arg1 interpolationQuality:(int)arg2 ;
-(id)_flatImageWithWhite:(double)arg1 alpha:(double)arg2 ;
-(id)_bezeledImageWithShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 fillRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 drawShadow:(BOOL)arg9 ;
-(id)_doubleBezeledImageWithExteriorShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 interiorShadowRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 fillRed:(double)arg9 green:(double)arg10 blue:(double)arg11 alpha:(double)arg12 ;
-(id)_imageTintedWithColor:(id)arg1 flatten:(BOOL)arg2 renderingMode:(long long)arg3 withUpdatedCGImage:(BOOL)arg4 ;
@end
