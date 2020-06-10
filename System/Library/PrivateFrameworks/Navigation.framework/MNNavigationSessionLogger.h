/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MNNavigationSessionObserver.h>

@class NSUUID, NSError, NSString;

@interface MNNavigationSessionLogger : NSObject <MNNavigationSessionObserver> {

	NSUUID* _lastGuidanceSignID;
	NSError* _previousSuppressedRerouteError;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)navigationSessionDidStart:(id)arg1 ;
-(void)navigationSessionDidStop:(id)arg1 ;
-(void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2 ;
-(void)navigationSessionDidEnterPreArrivalState:(id)arg1 ;
-(void)navigationSessionDidArrive:(id)arg1 ;
-(void)navigationSessionDidTimeoutInArrivalRegion:(id)arg1 ;
-(void)navigationSession:(id)arg1 didUpdateDisplayETA:(id)arg2 displayRemainingMinutes:(unsigned long long)arg3 forRoute:(id)arg4 ;
-(void)navigationSessionWillReroute:(id)arg1 ;
-(void)navigationSession:(id)arg1 didSuppressReroute:(id)arg2 ;
-(void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4 ;
-(void)navigationSession:(id)arg1 didUpdateDestination:(id)arg2 ;
-(void)navigationSession:(id)arg1 didFailRerouteWithError:(id)arg2 ;
-(void)navigationSession:(id)arg1 updateSignsWithInfo:(id)arg2 ;
-(id)_stringForLocationType:(unsigned long long)arg1 ;
@end

