/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GKNoiseSource.h>

@interface GKCheckerboardNoiseSource : GKNoiseSource {

	double _squareSize;

}

@property (assign,nonatomic) double squareSize;              //@synthesize squareSize=_squareSize - In the implementation block
+(id)checkerboardNoiseWithSquareSize:(double)arg1 ;
-(id)init;
-(double)valueAt:;
-(id)cloneModule;
-(id)initWithSquareSize:(double)arg1 ;
-(void)setSquareSize:(double)arg1 ;
-(double)squareSize;
@end
