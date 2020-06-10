/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBPlayMessageSoundIntent.h>
@class _INPBIntentMetadata, NSString;


@protocol _INPBPlayMessageSoundIntent <NSObject>
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata; 
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,copy) NSString * messageIdentifier; 
@property (nonatomic,readonly) BOOL hasMessageIdentifier; 
@property (assign,nonatomic) int soundType; 
@property (assign,nonatomic) BOOL hasSoundType; 
@required
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(id)arg1;
-(BOOL)hasIntentMetadata;
-(NSString *)messageIdentifier;
-(void)setMessageIdentifier:(id)arg1;
-(BOOL)hasMessageIdentifier;
-(int)soundType;
-(void)setSoundType:(int)arg1;
-(id)soundTypeAsString:(int)arg1;
-(int)StringAsSoundType:(id)arg1;
-(BOOL)hasSoundType;
-(void)setHasSoundType:(BOOL)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _INPBIntentMetadata, NSString;

@interface _INPBPlayMessageSoundIntent : PBCodable <_INPBPlayMessageSoundIntent, NSSecureCoding, NSCopying> {

	SCD_Struct_IN3 _has;
	BOOL __encodeLegacyGloryData;
	int _soundType;
	_INPBIntentMetadata* _intentMetadata;
	NSString* _messageIdentifier;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;                                       //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,copy) NSString * messageIdentifier;                                                 //@synthesize messageIdentifier=_messageIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageIdentifier; 
@property (assign,nonatomic) int soundType;                                                              //@synthesize soundType=_soundType - In the implementation block
@property (assign,nonatomic) BOOL hasSoundType; 
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
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(NSString *)messageIdentifier;
-(void)setMessageIdentifier:(NSString *)arg1 ;
-(BOOL)hasMessageIdentifier;
-(int)soundType;
-(void)setSoundType:(int)arg1 ;
-(id)soundTypeAsString:(int)arg1 ;
-(int)StringAsSoundType:(id)arg1 ;
-(BOOL)hasSoundType;
-(void)setHasSoundType:(BOOL)arg1 ;
@end

