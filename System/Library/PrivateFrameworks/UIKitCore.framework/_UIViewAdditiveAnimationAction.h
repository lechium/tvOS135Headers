/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CAAction.h>

@class CAAnimation, UIViewPropertyAnimator, UIView;

@interface _UIViewAdditiveAnimationAction : NSObject <CAAction> {

	CAAnimation* _pendingAnimation;
	UIViewPropertyAnimator* _animationObject;
	UIView* _view;

}

@property (nonatomic,retain,readonly) CAAnimation * pendingAnimation;                        //@synthesize pendingAnimation=_pendingAnimation - In the implementation block
@property (nonatomic,retain,readonly) UIViewPropertyAnimator * animationObject;              //@synthesize animationObject=_animationObject - In the implementation block
@property (nonatomic,retain,readonly) UIView * view;                                         //@synthesize view=_view - In the implementation block
-(void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3 ;
-(UIView *)view;
-(UIViewPropertyAnimator *)animationObject;
-(CAAnimation *)pendingAnimation;
-(id)initWithPendingAnimation:(id)arg1 withAnimationObject:(id)arg2 forView:(id)arg3 ;
@end

