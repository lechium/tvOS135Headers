/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@class NSMutableArray, NSArray;

@interface MRTouch : NSObject {

	NSMutableArray* _gestureRecognizers;
	int _phase;
	double _timestamp;
	unsigned long long _tapCount;
	CGPoint _location;

}

@property (assign,nonatomic) CGPoint location;                         //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) double timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) unsigned long long tapCount;              //@synthesize tapCount=_tapCount - In the implementation block
@property (assign,nonatomic) int phase;                                //@synthesize phase=_phase - In the implementation block
@property (readonly) NSArray * gestureRecognizers; 
+(id)touchWithLocation:(CGPoint)arg1 timestamp:(double)arg2 tapCount:(unsigned long long)arg3 ;
+(id)touchWithUITouch:(id)arg1 inView:(id)arg2 ;
-(id)description;
-(void)dealloc;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(CGPoint)location;
-(void)setLocation:(CGPoint)arg1 ;
-(void)addGestureRecognizer:(id)arg1 ;
-(void)removeGestureRecognizer:(id)arg1 ;
-(int)phase;
-(void)setPhase:(int)arg1 ;
-(NSArray *)gestureRecognizers;
-(unsigned long long)tapCount;
-(void)setTapCount:(unsigned long long)arg1 ;
@end

