/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface VCRateControlBandwidthEstimatorMap : NSObject {

	unsigned _mode;
	unsigned _radioAccessTechnology;
	double _estimatedBandwidth;
	double _estimatedBandwidthUncapped;
	NSMutableDictionary* _estimatorMap;
	unsigned _currentActiveEstimatorID;
	int _state;

}

@property (assign,nonatomic) double estimatedBandwidth;                      //@synthesize estimatedBandwidth=_estimatedBandwidth - In the implementation block
@property (assign,nonatomic) double estimatedBandwidthUncapped;              //@synthesize estimatedBandwidthUncapped=_estimatedBandwidthUncapped - In the implementation block
@property (assign,nonatomic) unsigned radioAccessTechnology;                 //@synthesize radioAccessTechnology=_radioAccessTechnology - In the implementation block
@property (assign,nonatomic) unsigned mode;                                  //@synthesize mode=_mode - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(unsigned)radioAccessTechnology;
-(void)setRadioAccessTechnology:(unsigned)arg1 ;
-(void)setEstimatedBandwidth:(double)arg1 ;
-(double)estimatedBandwidth;
-(double)estimatedBandwidthUncapped;
-(id)bandwidthEstimatorWithID:(unsigned)arg1 isProbingSequence:(BOOL)arg2 isEndOfProbingSequence:(BOOL)arg3 ;
-(void)deregisterBandwidthEstimatorWithID:(unsigned)arg1 ;
-(void)setEstimatedBandwidthUncapped:(double)arg1 ;
@end
