/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentResolutionResult.h>

@interface INWorkoutGoalUnitTypeResolutionResult : INIntentResolutionResult
+(id)successWithResolvedValue:(long long)arg1 ;
+(id)confirmationRequiredWithValueToConfirm:(long long)arg1 ;
+(id)successWithResolvedWorkoutGoalUnitType:(long long)arg1 ;
+(id)confirmationRequiredWithWorkoutGoalUnitTypeToConfirm:(long long)arg1 ;
-(id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2 ;
-(id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2 ;
-(void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

