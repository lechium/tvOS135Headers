/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBSeat.h>
@class NSString;


@protocol _INPBSeat <NSObject>
@property (nonatomic,copy) NSString * seatNumber; 
@property (nonatomic,readonly) BOOL hasSeatNumber; 
@property (nonatomic,copy) NSString * seatRow; 
@property (nonatomic,readonly) BOOL hasSeatRow; 
@property (nonatomic,copy) NSString * seatSection; 
@property (nonatomic,readonly) BOOL hasSeatSection; 
@property (nonatomic,copy) NSString * seatingType; 
@property (nonatomic,readonly) BOOL hasSeatingType; 
@required
-(NSString *)seatSection;
-(NSString *)seatRow;
-(NSString *)seatNumber;
-(NSString *)seatingType;
-(void)setSeatNumber:(id)arg1;
-(BOOL)hasSeatNumber;
-(void)setSeatRow:(id)arg1;
-(BOOL)hasSeatRow;
-(void)setSeatSection:(id)arg1;
-(BOOL)hasSeatSection;
-(void)setSeatingType:(id)arg1;
-(BOOL)hasSeatingType;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _INPBSeat : PBCodable <_INPBSeat, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	NSString* _seatNumber;
	NSString* _seatRow;
	NSString* _seatSection;
	NSString* _seatingType;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * seatNumber;                                                        //@synthesize seatNumber=_seatNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasSeatNumber; 
@property (nonatomic,copy) NSString * seatRow;                                                           //@synthesize seatRow=_seatRow - In the implementation block
@property (nonatomic,readonly) BOOL hasSeatRow; 
@property (nonatomic,copy) NSString * seatSection;                                                       //@synthesize seatSection=_seatSection - In the implementation block
@property (nonatomic,readonly) BOOL hasSeatSection; 
@property (nonatomic,copy) NSString * seatingType;                                                       //@synthesize seatingType=_seatingType - In the implementation block
@property (nonatomic,readonly) BOOL hasSeatingType; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(NSString *)seatSection;
-(NSString *)seatRow;
-(NSString *)seatNumber;
-(NSString *)seatingType;
-(void)setSeatNumber:(NSString *)arg1 ;
-(BOOL)hasSeatNumber;
-(void)setSeatRow:(NSString *)arg1 ;
-(BOOL)hasSeatRow;
-(void)setSeatSection:(NSString *)arg1 ;
-(BOOL)hasSeatSection;
-(void)setSeatingType:(NSString *)arg1 ;
-(BOOL)hasSeatingType;
@end
