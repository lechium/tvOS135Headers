/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/SFProximityEstimator.h>

@interface SFProximityEstimatorMaxOfMean : SFProximityEstimator {

	char* _channelNumberArray;
	char* _rssiArray;
	unsigned _rssiCount;
	unsigned _rssiIndex;
	unsigned _rssiMinCount;

}
-(id)description;
-(void)dealloc;
-(id)initWithProximityInfo:(id)arg1 ;
-(int)_estimateRSSIForSFBLEDevice:(id)arg1 ;
@end

