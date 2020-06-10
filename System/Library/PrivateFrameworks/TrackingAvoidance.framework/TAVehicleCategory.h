/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface TAVehicleCategory : NSObject {

	NSDate* _date;
	unsigned long long _vehicleCategoryType;

}

@property (nonatomic,copy,readonly) NSDate * date;                                  //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) unsigned long long vehicleCategoryType;              //@synthesize vehicleCategoryType=_vehicleCategoryType - In the implementation block
+(unsigned long long)speculateTAVehicleCategoryTypeFromVehicleStateNotification:(id)arg1 ;
+(unsigned long long)speculateTAVehicleCategoryTypeFromGeoNavigationNotification:(id)arg1 ;
-(NSDate *)date;
-(id)initWithVehicleCategoryType:(unsigned long long)arg1 andDate:(id)arg2 ;
-(id)initWithTAVehicularStateNotification:(id)arg1 ;
-(id)initWithTAGeoNavigationNotification:(id)arg1 ;
-(unsigned long long)vehicleCategoryType;
@end

