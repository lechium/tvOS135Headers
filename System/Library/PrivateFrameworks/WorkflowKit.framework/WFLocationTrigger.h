/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@class CLCircularRegion, NSDate;

@interface WFLocationTrigger : WFTrigger {

	CLCircularRegion* _region;
	NSDate* _startTime;
	NSDate* _endTime;

}

@property (nonatomic,copy) CLCircularRegion * region;              //@synthesize region=_region - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                   //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                     //@synthesize endTime=_endTime - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)timestampDateFormatter;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startTime;
-(NSDate *)endTime;
-(void)setEndTime:(NSDate *)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(CLCircularRegion *)region;
-(void)setRegion:(CLCircularRegion *)arg1 ;
-(void)configureWithConfiguration:(id)arg1 ;
-(BOOL)hasValidConfiguration;
@end
