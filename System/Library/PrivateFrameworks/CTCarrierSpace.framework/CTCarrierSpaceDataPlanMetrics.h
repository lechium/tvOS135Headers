/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, CTCarrierSpaceDataPlanMetricsItem, NSNumber;

@interface CTCarrierSpaceDataPlanMetrics : NSObject <NSSecureCoding> {

	NSDate* _billingCycleEndDate;
	CTCarrierSpaceDataPlanMetricsItem* _domestic;
	long long _regStatus;
	NSNumber* _domesticCapacity;

}

@property (nonatomic,retain) NSDate * billingCycleEndDate;                              //@synthesize billingCycleEndDate=_billingCycleEndDate - In the implementation block
@property (nonatomic,retain) CTCarrierSpaceDataPlanMetricsItem * domestic;              //@synthesize domestic=_domestic - In the implementation block
@property (assign,nonatomic) long long regStatus;                                       //@synthesize regStatus=_regStatus - In the implementation block
@property (nonatomic,retain) NSNumber * domesticCapacity;                               //@synthesize domesticCapacity=_domesticCapacity - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)billingCycleEndDate;
-(long long)regStatus;
-(NSNumber *)domesticCapacity;
-(CTCarrierSpaceDataPlanMetricsItem *)domestic;
-(void)setBillingCycleEndDate:(NSDate *)arg1 ;
-(void)setDomestic:(CTCarrierSpaceDataPlanMetricsItem *)arg1 ;
-(void)setRegStatus:(long long)arg1 ;
-(void)setDomesticCapacity:(NSNumber *)arg1 ;
@end
