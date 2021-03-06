/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBCondition.h>

@protocol _INPBCondition <NSObject>
@property (assign,nonatomic) int conditionalOperator; 
@property (assign,nonatomic) BOOL hasConditionalOperator; 
@required
-(id)conditionalOperatorAsString:(int)arg1;
-(int)StringAsConditionalOperator:(id)arg1;
-(int)conditionalOperator;
-(void)setConditionalOperator:(int)arg1;
-(BOOL)hasConditionalOperator;
-(void)setHasConditionalOperator:(BOOL)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _INPBCondition : PBCodable <_INPBCondition, NSSecureCoding, NSCopying> {

	SCD_Struct_IN3 _has;
	BOOL __encodeLegacyGloryData;
	int _conditionalOperator;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int conditionalOperator;                                                    //@synthesize conditionalOperator=_conditionalOperator - In the implementation block
@property (assign,nonatomic) BOOL hasConditionalOperator; 
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
-(id)conditionalOperatorAsString:(int)arg1 ;
-(int)StringAsConditionalOperator:(id)arg1 ;
-(int)conditionalOperator;
-(void)setConditionalOperator:(int)arg1 ;
-(BOOL)hasConditionalOperator;
-(void)setHasConditionalOperator:(BOOL)arg1 ;
@end

