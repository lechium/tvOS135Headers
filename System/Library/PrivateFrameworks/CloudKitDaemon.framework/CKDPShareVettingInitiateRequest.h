/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, CKDPShareIdentifier;

@interface CKDPShareVettingInitiateRequest : PBRequest <NSCopying> {

	NSString* _baseToken;
	NSData* _encryptedKey;
	NSString* _participantId;
	CKDPShareIdentifier* _shareId;

}

@property (nonatomic,readonly) BOOL hasShareId; 
@property (nonatomic,retain) CKDPShareIdentifier * shareId;              //@synthesize shareId=_shareId - In the implementation block
@property (nonatomic,readonly) BOOL hasEncryptedKey; 
@property (nonatomic,retain) NSData * encryptedKey;                      //@synthesize encryptedKey=_encryptedKey - In the implementation block
@property (nonatomic,readonly) BOOL hasParticipantId; 
@property (nonatomic,retain) NSString * participantId;                   //@synthesize participantId=_participantId - In the implementation block
@property (nonatomic,readonly) BOOL hasBaseToken; 
@property (nonatomic,retain) NSString * baseToken;                       //@synthesize baseToken=_baseToken - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)baseToken;
-(void)setBaseToken:(NSString *)arg1 ;
-(NSData *)encryptedKey;
-(void)setEncryptedKey:(NSData *)arg1 ;
-(BOOL)hasEncryptedKey;
-(NSString *)participantId;
-(void)setParticipantId:(NSString *)arg1 ;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(BOOL)hasShareId;
-(CKDPShareIdentifier *)shareId;
-(BOOL)hasParticipantId;
-(BOOL)hasBaseToken;
@end

