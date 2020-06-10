/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/WCMClientDelegate.h>
#import <libobjc.A.dylib/WRMClientDelegate.h>

@protocol VCNetworkFeedbackControllerDelegate;
@class VCWCMClient, WRMClient, VCConnectionManager, VCRecommendedNetworkSettings;

@interface VCNetworkFeedbackController : NSObject <WCMClientDelegate, WRMClientDelegate> {

	id<VCNetworkFeedbackControllerDelegate> _weakDelegate;
	VCWCMClient* _WCMClient;
	WRMClient* _WRMClient;
	VCConnectionManager* _connectionManager;
	VCRecommendedNetworkSettings* _recommendedSettings;
	unsigned _clientTargetBitrate;
	unsigned _clientTargetBitrateCap;
	double _wrmReportingInterval;

}

@property (readonly) unsigned recommendedTargetBitrateCap; 
@property (assign) unsigned clientTargetBitrate;                        //@synthesize clientTargetBitrate=_clientTargetBitrate - In the implementation block
@property (assign) unsigned clientTargetBitrateCap;                     //@synthesize clientTargetBitrateCap=_clientTargetBitrateCap - In the implementation block
-(void)dealloc;
-(void)start;
-(void)stop;
-(id)strongDelegate;
-(void)setPreWarmState:(BOOL)arg1 ;
-(void)setupWCMClient;
-(void)setupWRMClient;
-(void)cleanupWRMClient;
-(void)cleanupWCMClient;
-(unsigned)clientTargetBitrateCap;
-(unsigned)clientTargetBitrate;
-(void)wcmSetCallConfig:(unsigned)arg1 interferenceLevel:(unsigned)arg2 ;
-(void)wcmGetCallConfig:(unsigned*)arg1 targetBitrate:(unsigned*)arg2 ;
-(void)setWRMMetricConfig:(SCD_Struct_VC91*)arg1 ;
-(void)setWRMNotification:(SCD_Struct_VC90*)arg1 ;
-(id)initWithDelegate:(id)arg1 connectionManager:(id)arg2 ;
-(unsigned)recommendedTargetBitrateCap;
-(void)sendFeedbackControllerReport:(SCD_Struct_VC92)arg1 ;
-(void)sendStatusUpdate:(const SCD_Struct_VC93*)arg1 ;
-(void)requestWRMNotification;
-(void)setClientTargetBitrate:(unsigned)arg1 ;
-(void)setClientTargetBitrateCap:(unsigned)arg1 ;
@end

