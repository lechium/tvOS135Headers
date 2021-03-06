/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIAnimation : NSObject {

	id _target;
	SEL _action;
	id _delegate;
	/*^block*/id _completion;
	struct {
		unsigned curve : 4;
		unsigned tvOutput : 1;
		unsigned useNSTimer : 1;
	}  _animationFlags;
	double _startTime;
	double _duration;
	int _state;

}
-(int)type;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)target;
-(/*^block*/id)completion;
-(void)setCompletion:(/*^block*/id)arg1 ;
-(int)state;
-(void)setProgress:(float)arg1 ;
-(id)initWithTarget:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
-(void)setAnimationCurve:(int)arg1 ;
-(void)stopAnimation;
-(float)fractionForTime:(double)arg1 ;
-(void)markStop;
-(void)markStart:(double)arg1 ;
-(float)progressForFraction:(float)arg1 ;
-(void)setUsesNSTimer:(BOOL)arg1 ;
-(BOOL)usesNSTimer;
@end

