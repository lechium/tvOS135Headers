/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <Navigation/MNClassicGuidanceManager.h>

@interface MNWalkGuidanceManager : MNClassicGuidanceManager
-(int)transportType;
-(void)updateGuidanceForProceedToRouteAtLocation:(SCD_Struct_MN8)arg1 routeMatch:(id)arg2 remainingTime:(double)arg3 distanceUntilDestination:(double)arg4 ;
-(void)_updatePrepareForNextStep;
-(BOOL)_updateConsiderExecuteAnnouncement:(id)arg1 location:(id)arg2 ;
-(id)_combinedGuidanceForStep:(id)arg1 withType:(int)arg2 ;
-(double)_adjustedVehicleSpeed:(id)arg1 ;
@end
