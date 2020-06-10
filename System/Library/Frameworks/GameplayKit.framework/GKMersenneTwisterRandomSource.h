/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKRandomSource.h>

@interface GKMersenneTwisterRandomSource : GKRandomSource {

	unsigned long long _seed;
	mersenne_twister_engine<unsigned long long, 64, 312, 156, 31, 13043109905998158313, 29, 6148914691236517205, 17, 8202884508482404352, 37, 18444473444759240704, 43, 6364136223846793005> _engine;

}

@property (assign,nonatomic) unsigned long long seed; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)seed;
-(void)setSeed:(unsigned long long)arg1 ;
-(unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1 ;
-(id)initWithSeed:(unsigned long long)arg1 ;
-(unsigned long long)nextBits:(int)arg1 ;
-(long long)nextInt;
-(float)nextUniform;
-(BOOL)nextBool;
@end

