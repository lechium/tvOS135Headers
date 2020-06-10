/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIAnimatablePropertyBase.h>

@class UIAnimatableProperty, _UIViewAnimatablePropertyTransformer;

@interface UIViewFloatAnimatableProperty : UIAnimatablePropertyBase {

	BOOL _performingInterpolationBetweenTwoStates;
	UIAnimatableProperty* _animatableProperty;

}

@property (nonatomic,retain) UIAnimatableProperty * animatableProperty;                       //@synthesize animatableProperty=_animatableProperty - In the implementation block
@property (nonatomic,retain) _UIViewAnimatablePropertyTransformer * transformer; 
@property (assign,nonatomic) BOOL performingInterpolationBetweenTwoStates;                    //@synthesize performingInterpolationBetweenTwoStates=_performingInterpolationBetweenTwoStates - In the implementation block
@property (assign,nonatomic) double value; 
@property (nonatomic,readonly) double presentationValue; 
@property (assign,nonatomic) double velocity; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(double)value;
-(void)setValue:(double)arg1 ;
-(BOOL)isInvalidated;
-(double)velocity;
-(void)setVelocity:(double)arg1 ;
-(double)presentationValue;
-(_UIViewAnimatablePropertyTransformer *)transformer;
-(void)setTransformer:(_UIViewAnimatablePropertyTransformer *)arg1 ;
-(UIAnimatableProperty *)animatableProperty;
-(void)setAnimatableProperty:(UIAnimatableProperty *)arg1 ;
-(BOOL)performingInterpolationBetweenTwoStates;
-(void)setPerformingInterpolationBetweenTwoStates:(BOOL)arg1 ;
@end
