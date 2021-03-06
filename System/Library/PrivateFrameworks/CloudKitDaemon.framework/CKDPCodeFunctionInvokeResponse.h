/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPCodeFunctionInvokeResponseAttestationResponse, NSData;

@interface CKDPCodeFunctionInvokeResponse : PBCodable <NSCopying> {

	CKDPCodeFunctionInvokeResponseAttestationResponse* _attestationResponse;
	NSData* _serializedResult;

}

@property (nonatomic,readonly) BOOL hasSerializedResult; 
@property (nonatomic,retain) NSData * serializedResult;                                                            //@synthesize serializedResult=_serializedResult - In the implementation block
@property (nonatomic,readonly) BOOL hasAttestationResponse; 
@property (nonatomic,retain) CKDPCodeFunctionInvokeResponseAttestationResponse * attestationResponse;              //@synthesize attestationResponse=_attestationResponse - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)serializedResult;
-(BOOL)hasAttestationResponse;
-(CKDPCodeFunctionInvokeResponseAttestationResponse *)attestationResponse;
-(void)setSerializedResult:(NSData *)arg1 ;
-(BOOL)hasSerializedResult;
-(void)setAttestationResponse:(CKDPCodeFunctionInvokeResponseAttestationResponse *)arg1 ;
@end

