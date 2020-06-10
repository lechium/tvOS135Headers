/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBDialingContactValue.h>
@class _INPBContactValue, _INPBStringValue;


@protocol _INPBDialingContactValue <NSObject>
@property (nonatomic,retain) _INPBContactValue * dialingContact; 
@property (nonatomic,readonly) BOOL hasDialingContact; 
@property (nonatomic,retain) _INPBStringValue * dialingPhoneLabel; 
@property (nonatomic,readonly) BOOL hasDialingPhoneLabel; 
@property (nonatomic,retain) _INPBStringValue * dialingPhoneNumber; 
@property (nonatomic,readonly) BOOL hasDialingPhoneNumber; 
@required
-(_INPBContactValue *)dialingContact;
-(void)setDialingContact:(id)arg1;
-(BOOL)hasDialingContact;
-(_INPBStringValue *)dialingPhoneLabel;
-(void)setDialingPhoneLabel:(id)arg1;
-(BOOL)hasDialingPhoneLabel;
-(_INPBStringValue *)dialingPhoneNumber;
-(void)setDialingPhoneNumber:(id)arg1;
-(BOOL)hasDialingPhoneNumber;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _INPBContactValue, _INPBStringValue, NSString;

@interface _INPBDialingContactValue : PBCodable <_INPBDialingContactValue, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	_INPBContactValue* _dialingContact;
	_INPBStringValue* _dialingPhoneLabel;
	_INPBStringValue* _dialingPhoneNumber;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _INPBContactValue * dialingContact;                                         //@synthesize dialingContact=_dialingContact - In the implementation block
@property (nonatomic,readonly) BOOL hasDialingContact; 
@property (nonatomic,retain) _INPBStringValue * dialingPhoneLabel;                                       //@synthesize dialingPhoneLabel=_dialingPhoneLabel - In the implementation block
@property (nonatomic,readonly) BOOL hasDialingPhoneLabel; 
@property (nonatomic,retain) _INPBStringValue * dialingPhoneNumber;                                      //@synthesize dialingPhoneNumber=_dialingPhoneNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasDialingPhoneNumber; 
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
-(_INPBContactValue *)dialingContact;
-(void)setDialingContact:(_INPBContactValue *)arg1 ;
-(BOOL)hasDialingContact;
-(_INPBStringValue *)dialingPhoneLabel;
-(void)setDialingPhoneLabel:(_INPBStringValue *)arg1 ;
-(BOOL)hasDialingPhoneLabel;
-(_INPBStringValue *)dialingPhoneNumber;
-(void)setDialingPhoneNumber:(_INPBStringValue *)arg1 ;
-(BOOL)hasDialingPhoneNumber;
@end
