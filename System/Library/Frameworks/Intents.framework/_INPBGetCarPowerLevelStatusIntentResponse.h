/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBGetCarPowerLevelStatusIntentResponse.h>
@class _INPBDouble, _INPBDistance, _INPBInteger;


@protocol _INPBGetCarPowerLevelStatusIntentResponse <NSObject>
@property (nonatomic,retain) _INPBDouble * chargePercentRemaining; 
@property (nonatomic,readonly) BOOL hasChargePercentRemaining; 
@property (assign,nonatomic) BOOL charging; 
@property (assign,nonatomic) BOOL hasCharging; 
@property (nonatomic,retain) _INPBDistance * distanceRemaining; 
@property (nonatomic,readonly) BOOL hasDistanceRemaining; 
@property (nonatomic,retain) _INPBDouble * fuelPercentRemaining; 
@property (nonatomic,readonly) BOOL hasFuelPercentRemaining; 
@property (nonatomic,retain) _INPBInteger * minutesToFull; 
@property (nonatomic,readonly) BOOL hasMinutesToFull; 
@required
-(_INPBDistance *)distanceRemaining;
-(void)setDistanceRemaining:(id)arg1;
-(BOOL)hasDistanceRemaining;
-(_INPBDouble *)chargePercentRemaining;
-(void)setChargePercentRemaining:(id)arg1;
-(BOOL)hasChargePercentRemaining;
-(BOOL)charging;
-(void)setCharging:(BOOL)arg1;
-(BOOL)hasCharging;
-(void)setHasCharging:(BOOL)arg1;
-(_INPBDouble *)fuelPercentRemaining;
-(void)setFuelPercentRemaining:(id)arg1;
-(BOOL)hasFuelPercentRemaining;
-(_INPBInteger *)minutesToFull;
-(void)setMinutesToFull:(id)arg1;
-(BOOL)hasMinutesToFull;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _INPBDouble, _INPBDistance, _INPBInteger, NSString;

@interface _INPBGetCarPowerLevelStatusIntentResponse : PBCodable <_INPBGetCarPowerLevelStatusIntentResponse, NSSecureCoding, NSCopying> {

	SCD_Struct_IN3 _has;
	BOOL _charging;
	BOOL __encodeLegacyGloryData;
	_INPBDouble* _chargePercentRemaining;
	_INPBDistance* _distanceRemaining;
	_INPBDouble* _fuelPercentRemaining;
	_INPBInteger* _minutesToFull;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _INPBDouble * chargePercentRemaining;                                       //@synthesize chargePercentRemaining=_chargePercentRemaining - In the implementation block
@property (nonatomic,readonly) BOOL hasChargePercentRemaining; 
@property (assign,nonatomic) BOOL charging;                                                              //@synthesize charging=_charging - In the implementation block
@property (assign,nonatomic) BOOL hasCharging; 
@property (nonatomic,retain) _INPBDistance * distanceRemaining;                                          //@synthesize distanceRemaining=_distanceRemaining - In the implementation block
@property (nonatomic,readonly) BOOL hasDistanceRemaining; 
@property (nonatomic,retain) _INPBDouble * fuelPercentRemaining;                                         //@synthesize fuelPercentRemaining=_fuelPercentRemaining - In the implementation block
@property (nonatomic,readonly) BOOL hasFuelPercentRemaining; 
@property (nonatomic,retain) _INPBInteger * minutesToFull;                                               //@synthesize minutesToFull=_minutesToFull - In the implementation block
@property (nonatomic,readonly) BOOL hasMinutesToFull; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(_INPBDistance *)distanceRemaining;
-(void)setDistanceRemaining:(_INPBDistance *)arg1 ;
-(BOOL)hasDistanceRemaining;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(_INPBDouble *)chargePercentRemaining;
-(void)setChargePercentRemaining:(_INPBDouble *)arg1 ;
-(BOOL)hasChargePercentRemaining;
-(BOOL)charging;
-(void)setCharging:(BOOL)arg1 ;
-(BOOL)hasCharging;
-(void)setHasCharging:(BOOL)arg1 ;
-(_INPBDouble *)fuelPercentRemaining;
-(void)setFuelPercentRemaining:(_INPBDouble *)arg1 ;
-(BOOL)hasFuelPercentRemaining;
-(_INPBInteger *)minutesToFull;
-(void)setMinutesToFull:(_INPBInteger *)arg1 ;
-(BOOL)hasMinutesToFull;
@end
