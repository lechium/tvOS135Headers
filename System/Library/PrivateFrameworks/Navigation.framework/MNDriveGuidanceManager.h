/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <Navigation/MNClassicGuidanceManager.h>

@interface MNDriveGuidanceManager : MNClassicGuidanceManager {

	int _currentContinuePhase;

}
-(int)transportType;
-(void)_resetStepState;
-(id)_nameInfoForContinueSign;
-(void)_updatePrepareForNextStep;
-(BOOL)_updateConsiderContinueAnnouncement:(id)arg1 location:(id)arg2 ;
-(BOOL)_updateConsiderExecuteAnnouncement:(id)arg1 location:(id)arg2 ;
-(BOOL)_updateConsiderPrepareAnnouncement:(id)arg1 withMatch:(id)arg2 ;
-(double)_distanceForSign;
-(int)_continuePhase;
-(const SCD_Struct_MN22*)_announceSettings;
@end

