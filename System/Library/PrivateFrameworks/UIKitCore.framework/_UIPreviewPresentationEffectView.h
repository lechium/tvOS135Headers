/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface _UIPreviewPresentationEffectView : UIView {

	BOOL _shouldRasterizeForTransition;
	UIColor* _shadowColor;

}

@property (assign,nonatomic) double blurRadius; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) double shadowAlpha; 
@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,nonatomic) double shadowRadius; 
@property (nonatomic,copy) UIColor * shadowColor;                            //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) BOOL shouldRasterizeForTransition;              //@synthesize shouldRasterizeForTransition=_shouldRasterizeForTransition - In the implementation block
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(UIColor *)shadowColor;
-(void)setShadowColor:(UIColor *)arg1 ;
-(CGSize)shadowOffset;
-(void)setShadowOffset:(CGSize)arg1 ;
-(double)shadowRadius;
-(void)setShadowRadius:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)blurRadius;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(double)shadowAlpha;
-(void)setBlurRadius:(double)arg1 ;
-(void)setShadowAlpha:(double)arg1 ;
-(void)setShouldRasterizeForTransition:(BOOL)arg1 ;
-(BOOL)shouldRasterizeForTransition;
@end
