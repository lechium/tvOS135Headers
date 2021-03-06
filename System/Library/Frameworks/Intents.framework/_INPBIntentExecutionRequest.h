/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBIntentExecutionRequest.h>
@class _INPBAppIdentifier, NSString;


@protocol _INPBIntentExecutionRequest <NSObject>
@property (nonatomic,retain) _INPBAppIdentifier * appIdentifier; 
@property (nonatomic,readonly) BOOL hasAppIdentifier; 
@property (nonatomic,copy) NSString * encodedIntent; 
@property (nonatomic,readonly) BOOL hasEncodedIntent; 
@property (nonatomic,copy) NSString * encodedIntentDefinition; 
@property (nonatomic,readonly) BOOL hasEncodedIntentDefinition; 
@property (assign,nonatomic) int encodingFormat; 
@property (assign,nonatomic) BOOL hasEncodingFormat; 
@required
-(void)setAppIdentifier:(id)arg1;
-(_INPBAppIdentifier *)appIdentifier;
-(BOOL)hasAppIdentifier;
-(id)encodingFormatAsString:(int)arg1;
-(int)StringAsEncodingFormat:(id)arg1;
-(NSString *)encodedIntent;
-(void)setEncodedIntent:(id)arg1;
-(BOOL)hasEncodedIntent;
-(NSString *)encodedIntentDefinition;
-(void)setEncodedIntentDefinition:(id)arg1;
-(BOOL)hasEncodedIntentDefinition;
-(int)encodingFormat;
-(void)setEncodingFormat:(int)arg1;
-(BOOL)hasEncodingFormat;
-(void)setHasEncodingFormat:(BOOL)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _INPBAppIdentifier, NSString;

@interface _INPBIntentExecutionRequest : PBCodable <_INPBIntentExecutionRequest, NSSecureCoding, NSCopying> {

	SCD_Struct_IN3 _has;
	BOOL __encodeLegacyGloryData;
	int _encodingFormat;
	_INPBAppIdentifier* _appIdentifier;
	NSString* _encodedIntent;
	NSString* _encodedIntentDefinition;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _INPBAppIdentifier * appIdentifier;                                         //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAppIdentifier; 
@property (nonatomic,copy) NSString * encodedIntent;                                                     //@synthesize encodedIntent=_encodedIntent - In the implementation block
@property (nonatomic,readonly) BOOL hasEncodedIntent; 
@property (nonatomic,copy) NSString * encodedIntentDefinition;                                           //@synthesize encodedIntentDefinition=_encodedIntentDefinition - In the implementation block
@property (nonatomic,readonly) BOOL hasEncodedIntentDefinition; 
@property (assign,nonatomic) int encodingFormat;                                                         //@synthesize encodingFormat=_encodingFormat - In the implementation block
@property (assign,nonatomic) BOOL hasEncodingFormat; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAppIdentifier:(_INPBAppIdentifier *)arg1 ;
-(_INPBAppIdentifier *)appIdentifier;
-(BOOL)hasAppIdentifier;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(id)encodingFormatAsString:(int)arg1 ;
-(int)StringAsEncodingFormat:(id)arg1 ;
-(NSString *)encodedIntent;
-(void)setEncodedIntent:(NSString *)arg1 ;
-(BOOL)hasEncodedIntent;
-(NSString *)encodedIntentDefinition;
-(void)setEncodedIntentDefinition:(NSString *)arg1 ;
-(BOOL)hasEncodedIntentDefinition;
-(int)encodingFormat;
-(void)setEncodingFormat:(int)arg1 ;
-(BOOL)hasEncodingFormat;
-(void)setHasEncodingFormat:(BOOL)arg1 ;
@end

