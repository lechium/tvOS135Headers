/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SFProximityEstimator : NSObject {

	int _rssiEnter;
	int _rssiExit;
	int _rssiImmediate;
	int _rssiNear;
	int _rssiFar;
	int _estimatedRSSI;

}

@property (nonatomic,readonly) int estimatedRSSI;              //@synthesize estimatedRSSI=_estimatedRSSI - In the implementation block
+(id)proximityEstimatorWithProximityInfo:(id)arg1 ;
-(id)description;
-(id)initWithProximityInfo:(id)arg1 ;
-(id)descriptionParams;
-(int)_estimateRSSIForSFBLEDevice:(id)arg1 ;
-(unsigned)updateWithSFBLEDevice:(id)arg1 ;
-(int)estimatedRSSI;
@end

