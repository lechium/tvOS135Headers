/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBHomeAttribute.h>
@class _INPBHomeAttributeValue;


@protocol _INPBHomeAttribute <NSObject>
@property (assign,nonatomic) int attributeType; 
@property (assign,nonatomic) BOOL hasAttributeType; 
@property (nonatomic,retain) _INPBHomeAttributeValue * attributeValue; 
@property (nonatomic,readonly) BOOL hasAttributeValue; 
@required
-(int)attributeType;
-(void)setAttributeType:(int)arg1;
-(_INPBHomeAttributeValue *)attributeValue;
-(void)setAttributeValue:(id)arg1;
-(id)attributeTypeAsString:(int)arg1;
-(int)StringAsAttributeType:(id)arg1;
-(BOOL)hasAttributeType;
-(void)setHasAttributeType:(BOOL)arg1;
-(BOOL)hasAttributeValue;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _INPBHomeAttributeValue, NSString;

@interface _INPBHomeAttribute : PBCodable <_INPBHomeAttribute, NSSecureCoding, NSCopying> {

	SCD_Struct_IN3 _has;
	BOOL __encodeLegacyGloryData;
	int _attributeType;
	_INPBHomeAttributeValue* _attributeValue;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int attributeType;                                                          //@synthesize attributeType=_attributeType - In the implementation block
@property (assign,nonatomic) BOOL hasAttributeType; 
@property (nonatomic,retain) _INPBHomeAttributeValue * attributeValue;                                   //@synthesize attributeValue=_attributeValue - In the implementation block
@property (nonatomic,readonly) BOOL hasAttributeValue; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)attributeType;
-(void)setAttributeType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(_INPBHomeAttributeValue *)attributeValue;
-(void)setAttributeValue:(_INPBHomeAttributeValue *)arg1 ;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(id)attributeTypeAsString:(int)arg1 ;
-(int)StringAsAttributeType:(id)arg1 ;
-(BOOL)hasAttributeType;
-(void)setHasAttributeType:(BOOL)arg1 ;
-(BOOL)hasAttributeValue;
@end

