/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GKNoiseModifier.h>

@class GKPerlinNoiseSource;

@interface GKTurbulenceNoiseModifier : GKNoiseModifier {

	double _power;
	double _frequency;
	double _roughness;
	int _seed;
	GKPerlinNoiseSource* _perlin[3];

}
-(id)init;
-(void)dealloc;
-(double)valueAt:;
-(id)cloneModule;
-(int)requiredInputModuleCount;
-(id)initWithFrequency:(double)arg1 power:(double)arg2 roughness:(double)arg3 seed:(int)arg4 ;
-(id)initWithInputModuleCount:(unsigned long long)arg1 ;
@end
