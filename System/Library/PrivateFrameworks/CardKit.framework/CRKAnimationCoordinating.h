/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol CRKAnimationCoordinating <NSObject>
@property (getter=isAnimated,nonatomic,readonly) BOOL animated; 
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,copy) id initialSetup; 
@property (nonatomic,copy) id finalSetup; 
@property (nonatomic,copy) id animations; 
@property (nonatomic,copy) id completion; 
@property (assign,nonatomic) double duration; 
@required
-(id)completion;
-(void)setCompletion:(/*^block*/id)arg1;
-(double)duration;
-(id)animations;
-(void)setAnimations:(/*^block*/id)arg1;
-(void)setDuration:(double)arg1;
-(BOOL)isAnimated;
-(UIView *)containerView;
-(id)initialSetup;
-(void)setInitialSetup:(/*^block*/id)arg1;
-(id)finalSetup;
-(void)setFinalSetup:(/*^block*/id)arg1;

@end
