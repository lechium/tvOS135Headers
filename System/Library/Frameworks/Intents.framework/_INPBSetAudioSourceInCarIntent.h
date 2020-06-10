/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBSetAudioSourceInCarIntent.h>
@class _INPBIntentMetadata;


@protocol _INPBSetAudioSourceInCarIntent <NSObject>
@property (assign,nonatomic) int audioSource; 
@property (assign,nonatomic) BOOL hasAudioSource; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata; 
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (assign,nonatomic) int relativeAudioSourceReference; 
@property (assign,nonatomic) BOOL hasRelativeAudioSourceReference; 
@required
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(id)arg1;
-(BOOL)hasIntentMetadata;
-(int)audioSource;
-(void)setAudioSource:(int)arg1;
-(int)relativeAudioSourceReference;
-(void)setRelativeAudioSourceReference:(int)arg1;
-(id)audioSourceAsString:(int)arg1;
-(int)StringAsAudioSource:(id)arg1;
-(id)relativeAudioSourceReferenceAsString:(int)arg1;
-(int)StringAsRelativeAudioSourceReference:(id)arg1;
-(BOOL)hasAudioSource;
-(void)setHasAudioSource:(BOOL)arg1;
-(BOOL)hasRelativeAudioSourceReference;
-(void)setHasRelativeAudioSourceReference:(BOOL)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _INPBIntentMetadata, NSString;

@interface _INPBSetAudioSourceInCarIntent : PBCodable <_INPBSetAudioSourceInCarIntent, NSSecureCoding, NSCopying> {

	SCD_Struct_IN1 _has;
	BOOL __encodeLegacyGloryData;
	int _audioSource;
	int _relativeAudioSourceReference;
	_INPBIntentMetadata* _intentMetadata;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int audioSource;                                                            //@synthesize audioSource=_audioSource - In the implementation block
@property (assign,nonatomic) BOOL hasAudioSource; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;                                       //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (assign,nonatomic) int relativeAudioSourceReference;                                           //@synthesize relativeAudioSourceReference=_relativeAudioSourceReference - In the implementation block
@property (assign,nonatomic) BOOL hasRelativeAudioSourceReference; 
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
-(int)audioSource;
-(void)setAudioSource:(int)arg1 ;
-(int)relativeAudioSourceReference;
-(void)setRelativeAudioSourceReference:(int)arg1 ;
-(id)audioSourceAsString:(int)arg1 ;
-(int)StringAsAudioSource:(id)arg1 ;
-(id)relativeAudioSourceReferenceAsString:(int)arg1 ;
-(int)StringAsRelativeAudioSourceReference:(id)arg1 ;
-(BOOL)hasAudioSource;
-(void)setHasAudioSource:(BOOL)arg1 ;
-(BOOL)hasRelativeAudioSourceReference;
-(void)setHasRelativeAudioSourceReference:(BOOL)arg1 ;
@end

