/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBSOrientationUpdate : NSObject {

	long long _orientation;
	double _duration;
	long long _rotationDirection;
	unsigned long long _sequenceNumber;

}

@property (assign,nonatomic) long long orientation;                          //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) unsigned long long sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) double duration;                                //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long rotationDirection;                    //@synthesize rotationDirection=_rotationDirection - In the implementation block
-(id)description;
-(id)init;
-(long long)orientation;
-(double)duration;
-(unsigned long long)sequenceNumber;
-(void)setDuration:(double)arg1 ;
-(id)initWithOrientation:(long long)arg1 sequenceNumber:(unsigned long long)arg2 duration:(double)arg3 rotationDirection:(long long)arg4 ;
-(void)setOrientation:(long long)arg1 ;
-(long long)rotationDirection;
-(void)setRotationDirection:(long long)arg1 ;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
@end

