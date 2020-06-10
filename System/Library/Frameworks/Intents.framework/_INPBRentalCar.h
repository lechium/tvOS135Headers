/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBRentalCar.h>
@class NSString;


@protocol _INPBRentalCar <NSObject>
@property (nonatomic,copy) NSString * make; 
@property (nonatomic,readonly) BOOL hasMake; 
@property (nonatomic,copy) NSString * model; 
@property (nonatomic,readonly) BOOL hasModel; 
@property (nonatomic,copy) NSString * rentalCarDescription; 
@property (nonatomic,readonly) BOOL hasRentalCarDescription; 
@property (nonatomic,copy) NSString * rentalCompanyName; 
@property (nonatomic,readonly) BOOL hasRentalCompanyName; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,readonly) BOOL hasType; 
@required
-(NSString *)type;
-(void)setType:(id)arg1;
-(NSString *)model;
-(BOOL)hasType;
-(void)setModel:(id)arg1;
-(void)setMake:(id)arg1;
-(BOOL)hasMake;
-(BOOL)hasModel;
-(NSString *)make;
-(NSString *)rentalCarDescription;
-(void)setRentalCarDescription:(id)arg1;
-(BOOL)hasRentalCarDescription;
-(NSString *)rentalCompanyName;
-(void)setRentalCompanyName:(id)arg1;
-(BOOL)hasRentalCompanyName;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _INPBRentalCar : PBCodable <_INPBRentalCar, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	NSString* _make;
	NSString* _model;
	NSString* _rentalCarDescription;
	NSString* _rentalCompanyName;
	NSString* _type;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * make;                                                              //@synthesize make=_make - In the implementation block
@property (nonatomic,readonly) BOOL hasMake; 
@property (nonatomic,copy) NSString * model;                                                             //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) BOOL hasModel; 
@property (nonatomic,copy) NSString * rentalCarDescription;                                              //@synthesize rentalCarDescription=_rentalCarDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasRentalCarDescription; 
@property (nonatomic,copy) NSString * rentalCompanyName;                                                 //@synthesize rentalCompanyName=_rentalCompanyName - In the implementation block
@property (nonatomic,readonly) BOOL hasRentalCompanyName; 
@property (nonatomic,copy) NSString * type;                                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasType; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)model;
-(BOOL)hasType;
-(void)setModel:(NSString *)arg1 ;
-(void)setMake:(NSString *)arg1 ;
-(BOOL)hasMake;
-(BOOL)hasModel;
-(NSString *)make;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(NSString *)rentalCarDescription;
-(void)setRentalCarDescription:(NSString *)arg1 ;
-(BOOL)hasRentalCarDescription;
-(NSString *)rentalCompanyName;
-(void)setRentalCompanyName:(NSString *)arg1 ;
-(BOOL)hasRentalCompanyName;
@end

