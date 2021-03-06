/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBCreateFileIntent.h>
@class _INPBString, _INPBIntentMetadata;


@protocol _INPBCreateFileIntent <NSObject>
@property (nonatomic,retain) _INPBString * destinationName; 
@property (nonatomic,readonly) BOOL hasDestinationName; 
@property (assign,nonatomic) int destinationType; 
@property (assign,nonatomic) BOOL hasDestinationType; 
@property (nonatomic,retain) _INPBString * entityName; 
@property (nonatomic,readonly) BOOL hasEntityName; 
@property (assign,nonatomic) int entityType; 
@property (assign,nonatomic) BOOL hasEntityType; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata; 
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@required
-(_INPBString *)entityName;
-(int)destinationType;
-(void)setDestinationType:(int)arg1;
-(void)setHasDestinationType:(BOOL)arg1;
-(BOOL)hasDestinationType;
-(void)setDestinationName:(id)arg1;
-(_INPBString *)destinationName;
-(BOOL)hasDestinationName;
-(id)destinationTypeAsString:(int)arg1;
-(int)StringAsDestinationType:(id)arg1;
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

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _INPBString, _INPBIntentMetadata, NSString;

@interface _INPBCreateFileIntent : PBCodable <_INPBCreateFileIntent, NSSecureCoding, NSCopying> {

	SCD_Struct_IN1 _has;
	BOOL __encodeLegacyGloryData;
	int _destinationType;
	int _entityType;
	_INPBString* _destinationName;
	_INPBString* _entityName;
	_INPBIntentMetadata* _intentMetadata;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _INPBString * destinationName;                                              //@synthesize destinationName=_destinationName - In the implementation block
@property (nonatomic,readonly) BOOL hasDestinationName; 
@property (assign,nonatomic) int destinationType;                                                        //@synthesize destinationType=_destinationType - In the implementation block
@property (assign,nonatomic) BOOL hasDestinationType; 
@property (nonatomic,retain) _INPBString * entityName;                                                   //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,readonly) BOOL hasEntityName; 
@property (assign,nonatomic) int entityType;                                                             //@synthesize entityType=_entityType - In the implementation block
@property (assign,nonatomic) BOOL hasEntityType; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;                                       //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
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
-(int)destinationType;
-(void)setDestinationType:(int)arg1 ;
-(void)setHasDestinationType:(BOOL)arg1 ;
-(BOOL)hasDestinationType;
-(void)setDestinationName:(_INPBString *)arg1 ;
-(_INPBString *)destinationName;
-(BOOL)hasDestinationName;
-(id)destinationTypeAsString:(int)arg1 ;
-(int)StringAsDestinationType:(id)arg1 ;
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
@end

