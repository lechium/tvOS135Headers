/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBDeleteFilePermanentlyIntentResponse.h>

@protocol _INPBDeleteFilePermanentlyIntentResponse <NSObject>
@property (assign,nonatomic) BOOL confirm; 
@property (assign,nonatomic) BOOL hasConfirm; 
@property (assign,nonatomic) BOOL success; 
@property (assign,nonatomic) BOOL hasSuccess; 
@required
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1;
-(void)setHasSuccess:(BOOL)arg1;
-(BOOL)hasSuccess;
-(BOOL)confirm;
-(void)setConfirm:(BOOL)arg1;
-(BOOL)hasConfirm;
-(void)setHasConfirm:(BOOL)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _INPBDeleteFilePermanentlyIntentResponse : PBCodable <_INPBDeleteFilePermanentlyIntentResponse, NSSecureCoding, NSCopying> {

	SCD_Struct_IN1 _has;
	BOOL _confirm;
	BOOL _success;
	BOOL __encodeLegacyGloryData;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL confirm;                                                               //@synthesize confirm=_confirm - In the implementation block
@property (assign,nonatomic) BOOL hasConfirm; 
@property (assign,nonatomic) BOOL success;                                                               //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) BOOL hasSuccess; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(void)setHasSuccess:(BOOL)arg1 ;
-(BOOL)hasSuccess;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(BOOL)confirm;
-(void)setConfirm:(BOOL)arg1 ;
-(BOOL)hasConfirm;
-(void)setHasConfirm:(BOOL)arg1 ;
@end

