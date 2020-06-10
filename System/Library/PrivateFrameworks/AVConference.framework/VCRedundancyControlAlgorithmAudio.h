/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCRedundancyControlAlgorithm.h>

@class NSString;

@interface VCRedundancyControlAlgorithmAudio : NSObject <VCRedundancyControlAlgorithm> {

	unsigned _redundancyPercentage;
	double _redundancyInterval;
	double _packetLossPercentageIncreaseThresholds[3];
	double _packetLossPercentageDecreaseThresholds[3];
	BOOL _isPacketLossIncreasing;
	double _packetLossPercentage;
	double _packetLossPercentageThreshold;
	unsigned _burstLossPacketCount;
	BOOL _isUplinkRecentlyCongested;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned redundancyPercentage;              //@synthesize redundancyPercentage=_redundancyPercentage - In the implementation block
@property (nonatomic,readonly) double redundancyInterval;                  //@synthesize redundancyInterval=_redundancyInterval - In the implementation block
-(id)init;
-(void)updateRedundancyStrategyWithNetworkStatistics:(SCD_Struct_AV29)arg1 ;
-(unsigned)redundancyPercentage;
-(double)redundancyInterval;
-(void)computeRedundancyInfo;
-(unsigned)updateRedundancyPercentageWithPLRThresholds:(double*)arg1 ;
@end

