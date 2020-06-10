/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSUUID, CLLocation, CLSLitePlacemark, CLCircularRegion, NSArray;

@interface CLSLocationOfInterest : NSObject <NSSecureCoding> {

	NSMutableArray* _visits;
	NSUUID* _identifier;
	long long _type;
	CLLocation* _location;
	CLSLitePlacemark* _placemark;
	CLCircularRegion* _placemarkRegion;
	double _radius;
	unsigned long long _businessItemMuid;

}

@property (nonatomic,readonly) NSUUID * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) CLLocation * location;                            //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) CLCircularRegion * placemarkRegion;               //@synthesize placemarkRegion=_placemarkRegion - In the implementation block
@property (nonatomic,readonly) CLSLitePlacemark * placemark;                     //@synthesize placemark=_placemark - In the implementation block
@property (nonatomic,readonly) unsigned long long businessItemMuid;              //@synthesize businessItemMuid=_businessItemMuid - In the implementation block
@property (nonatomic,readonly) double radius;                                    //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) NSArray * visits;                                 //@synthesize visits=_visits - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSArray *)visits;
-(CLLocation *)location;
-(double)radius;
-(CLSLitePlacemark *)placemark;
-(void)addVisit:(id)arg1 ;
-(void)removeVisit:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 locationOfInterestType:(long long)arg2 location:(id)arg3 placemarkRegion:(id)arg4 businessItemMuid:(unsigned long long)arg5 radius:(double)arg6 ;
-(double)placemarkLocationDistanceFromLocation:(id)arg1 ;
-(CLCircularRegion *)placemarkRegion;
-(unsigned long long)businessItemMuid;
@end

