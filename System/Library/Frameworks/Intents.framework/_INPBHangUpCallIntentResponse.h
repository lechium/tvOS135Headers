/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBHangUpCallIntentResponse.h>

@protocol _INPBHangUpCallIntentResponse <NSObject>
@property (assign,nonatomic) int hungUpCallType; 
@property (assign,nonatomic) BOOL hasHungUpCallType; 
@required
-(int)hungUpCallType;
-(void)setHungUpCallType:(int)arg1;
-(id)hungUpCallTypeAsString:(int)arg1;
-(int)StringAsHungUpCallType:(id)arg1;
-(BOOL)hasHungUpCallType;
-(void)setHasHungUpCallType:(BOOL)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _INPBHangUpCallIntentResponse : PBCodable <_INPBHangUpCallIntentResponse, NSSecureCoding, NSCopying> {

	SCD_Struct_IN3 _has;
	BOOL __encodeLegacyGloryData;
	int _hungUpCallType;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int hungUpCallType;                                                         //@synthesize hungUpCallType=_hungUpCallType - In the implementation block
@property (assign,nonatomic) BOOL hasHungUpCallType; 
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
-(int)hungUpCallType;
-(void)setHungUpCallType:(int)arg1 ;
-(id)hungUpCallTypeAsString:(int)arg1 ;
-(int)StringAsHungUpCallType:(id)arg1 ;
-(BOOL)hasHungUpCallType;
-(void)setHasHungUpCallType:(BOOL)arg1 ;
@end

