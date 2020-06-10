/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface NWNetworkPredictions : NSObject <NSSecureCoding> {

	NSDate* _changePointAt;
	long long _toQuality;
	double _confidence;
	long long _resolutionSeconds;

}

@property (readonly) NSDate * changePointAt;                   //@synthesize changePointAt=_changePointAt - In the implementation block
@property (readonly) long long toQuality;                      //@synthesize toQuality=_toQuality - In the implementation block
@property (readonly) double confidence;                        //@synthesize confidence=_confidence - In the implementation block
@property (readonly) long long resolutionSeconds;              //@synthesize resolutionSeconds=_resolutionSeconds - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)confidence;
-(NSDate *)changePointAt;
-(long long)toQuality;
-(long long)resolutionSeconds;
@end

