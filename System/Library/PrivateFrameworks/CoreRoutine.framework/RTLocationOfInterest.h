/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, RTMapItem, NSArray, NSString;

@interface RTLocationOfInterest : NSObject <NSCopying, NSSecureCoding> {

	double _latitude;
	double _longitude;
	double _uncertainty;
	double _confidence;
	NSUUID* _identifier;
	long long _type;
	unsigned long long _typeSource;
	RTMapItem* _mapItem;
	NSArray* _visits;
	NSString* _customLabel;

}

@property (nonatomic,readonly) double latitude;                            //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                           //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) double uncertainty;                         //@synthesize uncertainty=_uncertainty - In the implementation block
@property (nonatomic,readonly) double confidence;                          //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long typeSource;              //@synthesize typeSource=_typeSource - In the implementation block
@property (nonatomic,readonly) RTMapItem * mapItem;                        //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) long long geoMapItemSource; 
@property (nonatomic,readonly) NSArray * visits;                           //@synthesize visits=_visits - In the implementation block
@property (nonatomic,readonly) NSString * preferredName; 
@property (nonatomic,readonly) NSString * customLabel;                     //@synthesize customLabel=_customLabel - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)locationOfInterestTypeToString:(long long)arg1 ;
+(id)locationOfInterestTypeSourceToString:(unsigned long long)arg1 ;
+(BOOL)locationOfInterestTypeIsValid:(long long)arg1 ;
+(id)geoMapItemSourceToString:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(double)confidence;
-(double)latitude;
-(double)longitude;
-(NSArray *)visits;
-(double)uncertainty;
-(RTMapItem *)mapItem;
-(NSString *)customLabel;
-(NSString *)preferredName;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 uncertainty:(double)arg3 confidence:(double)arg4 identifier:(id)arg5 type:(long long)arg6 typeSource:(unsigned long long)arg7 visits:(id)arg8 customLabel:(id)arg9 mapItem:(id)arg10 ;
-(unsigned long long)typeSource;
-(id)nameFromType:(long long)arg1 ;
-(long long)geoMapItemSource;
-(long long)recentCompare:(id)arg1 ;
@end

