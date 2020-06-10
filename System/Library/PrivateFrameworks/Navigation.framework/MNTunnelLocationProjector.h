/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNTunnelLocationProjectorDelegate;
#import <Navigation/Navigation-Structs.h>
@class NSTimer, MNLocation, NSDate;

@interface MNTunnelLocationProjector : NSObject {

	id<MNTunnelLocationProjectorDelegate> _delegate;
	NSTimer* _locationUpdateOverdueTimer;
	MNLocation* _lastLocation;
	NSDate* _lastLocationDate;
	double _locationOverdueTimeoutForTunnel;
	double _locationOverdueTimeoutForNotTunnel;
	double _locationOverdueTimeoutForUnknown;
	BOOL _isProjecting;

}

@property (assign,nonatomic,__weak) id<MNTunnelLocationProjectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isProjecting;                                                //@synthesize isProjecting=_isProjecting - In the implementation block
-(id)init;
-(void)dealloc;
-(id<MNTunnelLocationProjectorDelegate>)delegate;
-(void)setDelegate:(id<MNTunnelLocationProjectorDelegate>)arg1 ;
-(void)stop;
-(double)_approximateMaxSpeedForRoad:(SCD_Struct_MN5*)arg1 ;
-(void)updateLocation:(id)arg1 ;
-(BOOL)isProjecting;
-(BOOL)_locationIsGoodEnoughToEndProjection:(id)arg1 ;
-(double)_locationOverdueTimeoutForLocation:(id)arg1 ;
-(void)_resetLocationUpdateOverdueWithTimeout:(double)arg1 ;
-(void)_locationUpdateOverdueTimerFired:(id)arg1 ;
-(id)_projectFromLocation:(id)arg1 timeInterval:(double)arg2 ;
@end

