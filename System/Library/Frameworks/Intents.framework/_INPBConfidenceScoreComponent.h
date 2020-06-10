/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBConfidenceScoreComponent.h>
@class NSString;


@protocol _INPBConfidenceScoreComponent <NSObject>
@property (assign,nonatomic) float score; 
@property (assign,nonatomic) BOOL hasScore; 
@property (nonatomic,copy) NSString * source; 
@property (nonatomic,readonly) BOOL hasSource; 
@required
-(void)setSource:(id)arg1;
-(NSString *)source;
-(float)score;
-(BOOL)hasSource;
-(void)setScore:(float)arg1;
-(void)setHasScore:(BOOL)arg1;
-(BOOL)hasScore;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _INPBConfidenceScoreComponent : PBCodable <_INPBConfidenceScoreComponent, NSSecureCoding, NSCopying> {

	SCD_Struct_IN3 _has;
	BOOL __encodeLegacyGloryData;
	float _score;
	NSString* _source;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float score;                                                                //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) BOOL hasScore; 
@property (nonatomic,copy) NSString * source;                                                            //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) BOOL hasSource; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(id)dictionaryRepresentation;
-(float)score;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasSource;
-(void)setScore:(float)arg1 ;
-(void)setHasScore:(BOOL)arg1 ;
-(BOOL)hasScore;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
@end

