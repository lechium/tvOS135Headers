/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBPayloadSuccess.h>
@class NSString, _INPBIntentSlotValue;


@protocol _INPBPayloadSuccess <NSObject>
@property (nonatomic,copy) NSString * resolvedKeyPath; 
@property (nonatomic,readonly) BOOL hasResolvedKeyPath; 
@property (nonatomic,retain) _INPBIntentSlotValue * resolvedValue; 
@property (nonatomic,readonly) BOOL hasResolvedValue; 
@required
-(NSString *)resolvedKeyPath;
-(void)setResolvedKeyPath:(id)arg1;
-(BOOL)hasResolvedKeyPath;
-(_INPBIntentSlotValue *)resolvedValue;
-(void)setResolvedValue:(id)arg1;
-(BOOL)hasResolvedValue;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, _INPBIntentSlotValue;

@interface _INPBPayloadSuccess : PBCodable <_INPBPayloadSuccess, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	NSString* _resolvedKeyPath;
	_INPBIntentSlotValue* _resolvedValue;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * resolvedKeyPath;                                                   //@synthesize resolvedKeyPath=_resolvedKeyPath - In the implementation block
@property (nonatomic,readonly) BOOL hasResolvedKeyPath; 
@property (nonatomic,retain) _INPBIntentSlotValue * resolvedValue;                                       //@synthesize resolvedValue=_resolvedValue - In the implementation block
@property (nonatomic,readonly) BOOL hasResolvedValue; 
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
-(NSString *)resolvedKeyPath;
-(void)setResolvedKeyPath:(NSString *)arg1 ;
-(BOOL)hasResolvedKeyPath;
-(_INPBIntentSlotValue *)resolvedValue;
-(void)setResolvedValue:(_INPBIntentSlotValue *)arg1 ;
-(BOOL)hasResolvedValue;
@end

