/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBGetFileInformationIntent.h>
@class _INPBString, _INPBIntentMetadata;


@protocol _INPBGetFileInformationIntent <NSObject>
@property (nonatomic,retain) _INPBString * entityName; 
@property (nonatomic,readonly) BOOL hasEntityName; 
@property (assign,nonatomic) int entityType; 
@property (assign,nonatomic) BOOL hasEntityType; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata; 
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (assign,nonatomic) int propertyName; 
@property (assign,nonatomic) BOOL hasPropertyName; 
@property (assign,nonatomic) int qualifier; 
@property (assign,nonatomic) BOOL hasQualifier; 
@required
-(_INPBString *)entityName;
-(int)propertyName;
-(void)setPropertyName:(int)arg1;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(id)arg1;
-(BOOL)hasIntentMetadata;
-(id)entityTypeAsString:(int)arg1;
-(int)StringAsEntityType:(id)arg1;
-(void)setEntityName:(id)arg1;
-(BOOL)hasEntityName;
-(int)entityType;
-(void)setEntityType:(int)arg1;
-(BOOL)hasEntityType;
-(void)setHasEntityType:(BOOL)arg1;
-(int)qualifier;
-(void)setQualifier:(int)arg1;
-(id)qualifierAsString:(int)arg1;
-(int)StringAsQualifier:(id)arg1;
-(BOOL)hasQualifier;
-(void)setHasQualifier:(BOOL)arg1;
-(id)propertyNameAsString:(int)arg1;
-(int)StringAsPropertyName:(id)arg1;
-(BOOL)hasPropertyName;
-(void)setHasPropertyName:(BOOL)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _INPBString, _INPBIntentMetadata, NSString;

@interface _INPBGetFileInformationIntent : PBCodable <_INPBGetFileInformationIntent, NSSecureCoding, NSCopying> {

	SCD_Struct_IN4 _has;
	BOOL __encodeLegacyGloryData;
	int _entityType;
	int _propertyName;
	int _qualifier;
	_INPBString* _entityName;
	_INPBIntentMetadata* _intentMetadata;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _INPBString * entityName;                                                   //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,readonly) BOOL hasEntityName; 
@property (assign,nonatomic) int entityType;                                                             //@synthesize entityType=_entityType - In the implementation block
@property (assign,nonatomic) BOOL hasEntityType; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;                                       //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (assign,nonatomic) int propertyName;                                                           //@synthesize propertyName=_propertyName - In the implementation block
@property (assign,nonatomic) BOOL hasPropertyName; 
@property (assign,nonatomic) int qualifier;                                                              //@synthesize qualifier=_qualifier - In the implementation block
@property (assign,nonatomic) BOOL hasQualifier; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(_INPBString *)entityName;
-(int)propertyName;
-(void)setPropertyName:(int)arg1 ;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(id)entityTypeAsString:(int)arg1 ;
-(int)StringAsEntityType:(id)arg1 ;
-(void)setEntityName:(_INPBString *)arg1 ;
-(BOOL)hasEntityName;
-(int)entityType;
-(void)setEntityType:(int)arg1 ;
-(BOOL)hasEntityType;
-(void)setHasEntityType:(BOOL)arg1 ;
-(int)qualifier;
-(void)setQualifier:(int)arg1 ;
-(id)qualifierAsString:(int)arg1 ;
-(int)StringAsQualifier:(id)arg1 ;
-(BOOL)hasQualifier;
-(void)setHasQualifier:(BOOL)arg1 ;
-(id)propertyNameAsString:(int)arg1 ;
-(int)StringAsPropertyName:(id)arg1 ;
-(BOOL)hasPropertyName;
-(void)setHasPropertyName:(BOOL)arg1 ;
@end

