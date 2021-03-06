/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AirPlayRoutePrediction.framework/AirPlayRoutePrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ARPRoutePrediction : NSObject {

	NSString* _outputDeviceID;
	double _confidence;

}

@property (nonatomic,copy,readonly) NSString * outputDeviceID;              //@synthesize outputDeviceID=_outputDeviceID - In the implementation block
@property (nonatomic,readonly) double confidence;                           //@synthesize confidence=_confidence - In the implementation block
-(id)description;
-(double)confidence;
-(NSString *)outputDeviceID;
-(id)initWithOutputDeviceID:(id)arg1 confidence:(double)arg2 ;
@end

