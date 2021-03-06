/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIScrollDynamics.h>

@interface _UIScrollDynamicsiOSMac : _UIScrollDynamics {

	double _durationUntilStop;
	double _durationUntilStopIgnoringRubberbanding;
	CGSize _absDisplacementVectorIgnoringRubberbanding;
	double _linearDisplacementIgnoringRubberbanding;
	CGPoint _destinationIgnoringRubberbanding;
	double _durationUntilRubberband;
	CGPoint _initialRubberbandingOrigin;
	CGVector _initialRubberbandingVelocity;
	double _decelerationRate;

}
-(id)init;
-(void)calculateDecelerationTarget;
-(void)calculateToReachDecelerationTarget;
-(double)durationUntilStop;
-(double)speedAfterDuration:(double)arg1 ;
-(CGVector)velocityAfterDuration:(double)arg1 ;
-(CGPoint)positionAfterDuration:(double)arg1 ;
-(BOOL)isRubberBandingAfterDuration:(double)arg1 ;
@end

