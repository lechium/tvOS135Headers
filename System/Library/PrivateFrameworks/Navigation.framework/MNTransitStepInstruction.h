/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/MNTransitInstruction.h>

@class GEOComposedRouteStep, NSDictionary;

@interface MNTransitStepInstruction : MNTransitInstruction {

	GEOComposedRouteStep* _step;
	NSDictionary* _overridenInstructionsMapping;

}

@property (nonatomic,readonly) GEOComposedRouteStep * step;                              //@synthesize step=_step - In the implementation block
@property (nonatomic,readonly) NSDictionary * overridenInstructionsMapping;              //@synthesize overridenInstructionsMapping=_overridenInstructionsMapping - In the implementation block
+(id)instructionForStep:(id)arg1 overrides:(id)arg2 context:(long long)arg3 ;
+(id)instructionForStep:(id)arg1 context:(long long)arg2 ;
-(GEOComposedRouteStep *)step;
-(id)instructionSet;
-(NSDictionary *)overridenInstructionsMapping;
-(id)initWithStep:(id)arg1 overrides:(id)arg2 context:(long long)arg3 ;
@end

