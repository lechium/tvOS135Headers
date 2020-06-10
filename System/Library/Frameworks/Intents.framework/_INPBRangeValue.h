/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBRangeValue.h>
@class _INPBValueMetadata;


@protocol _INPBRangeValue <NSObject>
@property (assign,nonatomic) unsigned long long length; 
@property (assign,nonatomic) BOOL hasLength; 
@property (assign,nonatomic) unsigned long long location; 
@property (assign,nonatomic) BOOL hasLocation; 
@property (nonatomic,retain) _INPBValueMetadata * valueMetadata; 
@property (nonatomic,readonly) BOOL hasValueMetadata; 
@required
-(unsigned long long)length;
-(void)setLength:(unsigned long long)arg1;
-(void)setHasLength:(BOOL)arg1;
-(BOOL)hasLength;
-(unsigned long long)location;
-(void)setLocation:(unsigned long long)arg1;
-(BOOL)hasLocation;
-(_INPBValueMetadata *)valueMetadata;
-(void)setValueMetadata:(id)arg1;
-(BOOL)hasValueMetadata;
-(void)setHasLocation:(BOOL)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _INPBValueMetadata, NSString;

@interface _INPBRangeValue : PBCodable <_INPBRangeValue, NSSecureCoding, NSCopying> {

	SCD_Struct_IN1 _has;
	BOOL __encodeLegacyGloryData;
	unsigned long long _length;
	unsigned long long _location;
	_INPBValueMetadata* _valueMetadata;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long length;                                                  //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) BOOL hasLength; 
@property (assign,nonatomic) unsigned long long location;                                                //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasLocation; 
@property (nonatomic,retain) _INPBValueMetadata * valueMetadata;                                         //@synthesize valueMetadata=_valueMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasValueMetadata; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)length;
-(void)setLength:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasLength:(BOOL)arg1 ;
-(BOOL)hasLength;
-(unsigned long long)location;
-(void)setLocation:(unsigned long long)arg1 ;
-(BOOL)hasLocation;
-(_INPBValueMetadata *)valueMetadata;
-(void)setValueMetadata:(_INPBValueMetadata *)arg1 ;
-(BOOL)hasValueMetadata;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(void)setHasLocation:(BOOL)arg1 ;
@end

