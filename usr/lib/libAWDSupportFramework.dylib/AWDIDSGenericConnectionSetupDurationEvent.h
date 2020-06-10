/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDIDSGenericConnectionSetupDurationEvent : PBCodable <NSCopying> {

	unsigned long long _connectionSetupDuration;
	unsigned long long _timestamp;
	unsigned _connectionType;
	unsigned _errorCode;
	unsigned _linkType;
	BOOL _success;
	SCD_Struct_AW11 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasLinkType; 
@property (assign,nonatomic) unsigned linkType;                                       //@synthesize linkType=_linkType - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionSetupDuration; 
@property (assign,nonatomic) unsigned long long connectionSetupDuration;              //@synthesize connectionSetupDuration=_connectionSetupDuration - In the implementation block
@property (assign,nonatomic) BOOL hasSuccess; 
@property (assign,nonatomic) BOOL success;                                            //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;                                      //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                                 //@synthesize connectionType=_connectionType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned)linkType;
-(void)setLinkType:(unsigned)arg1 ;
-(BOOL)success;
-(unsigned)errorCode;
-(void)setSuccess:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setConnectionType:(unsigned)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasConnectionType;
-(unsigned)connectionType;
-(void)setErrorCode:(unsigned)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(void)setHasSuccess:(BOOL)arg1 ;
-(BOOL)hasSuccess;
-(void)setHasLinkType:(BOOL)arg1 ;
-(BOOL)hasLinkType;
-(void)setConnectionSetupDuration:(unsigned long long)arg1 ;
-(void)setHasConnectionSetupDuration:(BOOL)arg1 ;
-(BOOL)hasConnectionSetupDuration;
-(unsigned long long)connectionSetupDuration;
@end

