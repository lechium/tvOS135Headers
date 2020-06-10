/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessProximity/WPClient.h>

@protocol WPAirPlaySoloDelegate;
@interface WPAirPlaySolo : WPClient {

	id<WPAirPlaySoloDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WPAirPlaySoloDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(unsigned char)puckStringToType:(id)arg1 ;
+(id)puckTypeToString:(unsigned char)arg1 ;
-(id)init;
-(void)invalidate;
-(id<WPAirPlaySoloDelegate>)delegate;
-(void)setDelegate:(id<WPAirPlaySoloDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)stateDidChange:(long long)arg1 ;
-(id)clientAsString;
-(void)deviceDiscovered:(id)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)advertisingStartedOfType:(unsigned char)arg1 ;
-(void)advertisingStoppedOfType:(unsigned char)arg1 withError:(id)arg2 ;
-(void)advertisingPendingOfType:(unsigned char)arg1 ;
-(void)peerTrackingFull;
-(void)peerTrackingAvailable;
-(void)startConnectionlessAdvertisingWithData:(id)arg1 ;
-(void)stopConnectionlessAdvertising;
-(void)stopConnectionlessAdvertising:(id)arg1 ;
-(void)startConnectionlessScanningWithData:(id)arg1 ;
-(void)stopConnectionlessScanningWithData:(id)arg1 ;
-(void)startTrackingPeer:(id)arg1 withData:(id)arg2 ;
-(void)stopTrackingPeer:(id)arg1 withData:(id)arg2 ;
-(void)startedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)stoppedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)failedToStartTrackingPeer:(id)arg1 error:(id)arg2 ;
-(void)foundPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)lostPeer:(id)arg1 ofType:(unsigned char)arg2 ;
@end

