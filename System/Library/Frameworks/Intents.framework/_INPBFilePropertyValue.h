/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBFilePropertyValue.h>
@class _INPBDateTimeRange, _INPBContact, _INPBLong, _INPBString;


@protocol _INPBFilePropertyValue <NSObject>
@property (nonatomic,retain) _INPBDateTimeRange * dateTime; 
@property (nonatomic,readonly) BOOL hasDateTime; 
@property (assign,nonatomic) int fileType; 
@property (assign,nonatomic) BOOL hasFileType; 
@property (nonatomic,retain) _INPBContact * person; 
@property (nonatomic,readonly) BOOL hasPerson; 
@property (nonatomic,retain) _INPBLong * quantity; 
@property (nonatomic,readonly) BOOL hasQuantity; 
@property (nonatomic,retain) _INPBString * value; 
@property (nonatomic,readonly) BOOL hasValue; 
@required
-(_INPBString *)value;
-(int)fileType;
-(void)setValue:(id)arg1;
-(BOOL)hasValue;
-(_INPBDateTimeRange *)dateTime;
-(void)setDateTime:(id)arg1;
-(void)setFileType:(int)arg1;
-(_INPBLong *)quantity;
-(void)setQuantity:(id)arg1;
-(id)fileTypeAsString:(int)arg1;
-(int)StringAsFileType:(id)arg1;
-(BOOL)hasDateTime;
-(BOOL)hasFileType;
-(void)setHasFileType:(BOOL)arg1;
-(_INPBContact *)person;
-(void)setPerson:(id)arg1;
-(BOOL)hasPerson;
-(BOOL)hasQuantity;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _INPBDateTimeRange, _INPBContact, _INPBLong, _INPBString, NSString;

@interface _INPBFilePropertyValue : PBCodable <_INPBFilePropertyValue, NSSecureCoding, NSCopying> {

	SCD_Struct_IN3 _has;
	BOOL __encodeLegacyGloryData;
	int _fileType;
	_INPBDateTimeRange* _dateTime;
	_INPBContact* _person;
	_INPBLong* _quantity;
	_INPBString* _value;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _INPBDateTimeRange * dateTime;                                              //@synthesize dateTime=_dateTime - In the implementation block
@property (nonatomic,readonly) BOOL hasDateTime; 
@property (assign,nonatomic) int fileType;                                                               //@synthesize fileType=_fileType - In the implementation block
@property (assign,nonatomic) BOOL hasFileType; 
@property (nonatomic,retain) _INPBContact * person;                                                      //@synthesize person=_person - In the implementation block
@property (nonatomic,readonly) BOOL hasPerson; 
@property (nonatomic,retain) _INPBLong * quantity;                                                       //@synthesize quantity=_quantity - In the implementation block
@property (nonatomic,readonly) BOOL hasQuantity; 
@property (nonatomic,retain) _INPBString * value;                                                        //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_INPBString *)value;
-(int)fileType;
-(void)setValue:(_INPBString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasValue;
-(_INPBDateTimeRange *)dateTime;
-(void)setDateTime:(_INPBDateTimeRange *)arg1 ;
-(void)setFileType:(int)arg1 ;
-(_INPBLong *)quantity;
-(void)setQuantity:(_INPBLong *)arg1 ;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(id)fileTypeAsString:(int)arg1 ;
-(int)StringAsFileType:(id)arg1 ;
-(BOOL)hasDateTime;
-(BOOL)hasFileType;
-(void)setHasFileType:(BOOL)arg1 ;
-(_INPBContact *)person;
-(void)setPerson:(_INPBContact *)arg1 ;
-(BOOL)hasPerson;
-(BOOL)hasQuantity;
@end

