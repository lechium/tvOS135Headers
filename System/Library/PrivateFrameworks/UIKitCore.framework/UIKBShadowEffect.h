/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIKBRenderEffect.h>

@class NSString, UIKBGradient;

@interface UIKBShadowEffect : NSObject <UIKBRenderEffect> {

	NSString* _colorName;
	double _weight;
	CGSize _offset;
	UIEdgeInsets _insets;
	UIEdgeInsets _concaveInsets;

}

@property (assign,nonatomic) CGSize offset;                           //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                     //@synthesize insets=_insets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets concaveInsets;              //@synthesize concaveInsets=_concaveInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) BOOL renderUnder; 
@property (nonatomic,readonly) SEL renderSelector; 
@property (assign,nonatomic) double weight;                           //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) BOOL usesRGBColors; 
@property (nonatomic,readonly) UIKBGradient * gradient; 
+(id)effectWithColor:(id)arg1 offset:(CGSize)arg2 insets:(UIEdgeInsets)arg3 weight:(double)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(BOOL)isValid;
-(double)weight;
-(void)setWeight:(double)arg1 ;
-(CGSize)offset;
-(void)setOffset:(CGSize)arg1 ;
-(CGColorRef)CGColor;
-(UIKBGradient *)gradient;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)insets;
-(BOOL)renderUnder;
-(SEL)renderSelector;
-(BOOL)usesRGBColors;
-(id)initWithColor:(id)arg1 offset:(CGSize)arg2 insets:(UIEdgeInsets)arg3 weight:(double)arg4 ;
-(UIEdgeInsets)concaveInsets;
-(void)setConcaveInsets:(UIEdgeInsets)arg1 ;
@end

