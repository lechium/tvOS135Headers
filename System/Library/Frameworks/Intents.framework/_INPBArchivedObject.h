/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBArchivedObject.h>
@class NSData, NSString;


@protocol _INPBArchivedObject <NSObject>
@property (nonatomic,copy) NSData * messageData; 
@property (nonatomic,readonly) BOOL hasMessageData; 
@property (nonatomic,copy) NSString * typeName; 
@property (nonatomic,readonly) BOOL hasTypeName; 
@required
-(NSString *)typeName;
-(void)setTypeName:(id)arg1;
-(NSData *)messageData;
-(void)setMessageData:(id)arg1;
-(BOOL)hasMessageData;
-(BOOL)hasTypeName;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface _INPBArchivedObject : PBCodable <_INPBArchivedObject, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	NSData* _messageData;
	NSString* _typeName;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSData * messageData;                                                         //@synthesize messageData=_messageData - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageData; 
@property (nonatomic,copy) NSString * typeName;                                                          //@synthesize typeName=_typeName - In the implementation block
@property (nonatomic,readonly) BOOL hasTypeName; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)typeName;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(void)setTypeName:(NSString *)arg1 ;
-(NSData *)messageData;
-(void)setMessageData:(NSData *)arg1 ;
-(BOOL)hasMessageData;
-(BOOL)hasTypeName;
@end

