/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMICameraVideoFrame, NSDictionary;

@interface HMICameraVideoAnalyzerSignificantEvent : NSObject <NSSecureCoding> {

	long long _events;
	HMICameraVideoFrame* _videoFrame;
	NSDictionary* _annotationScores;

}

@property (readonly) NSDictionary * annotationScores;               //@synthesize annotationScores=_annotationScores - In the implementation block
@property (readonly) long long events;                              //@synthesize events=_events - In the implementation block
@property (readonly) HMICameraVideoFrame * videoFrame;              //@synthesize videoFrame=_videoFrame - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)events;
-(HMICameraVideoFrame *)videoFrame;
-(long long)confidenceThatEventOccurred:(long long)arg1 ;
-(NSDictionary *)annotationScores;
-(id)initWithEvents:(long long)arg1 annotationScores:(id)arg2 videoFrame:(id)arg3 ;
@end
