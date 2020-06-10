/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CryptoKitCBridging.framework/CryptoKitCBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CryptoKitCBridging/CryptoKitCBridging-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface SSPBSecretShare : PBCodable <NSCopying> {

	NSData* _associatedData;
	NSData* _ciphertext;
	NSData* _iv;
	unsigned _shareX;
	NSData* _shareY;
	NSData* _tag;
	unsigned _threshold;
	unsigned _version;
	SCD_Struct_SS2 _has;

}

@property (assign,nonatomic) unsigned version;                      //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned shareX;                       //@synthesize shareX=_shareX - In the implementation block
@property (nonatomic,retain) NSData * shareY;                       //@synthesize shareY=_shareY - In the implementation block
@property (assign,nonatomic) BOOL hasThreshold; 
@property (assign,nonatomic) unsigned threshold;                    //@synthesize threshold=_threshold - In the implementation block
@property (nonatomic,retain) NSData * iv;                           //@synthesize iv=_iv - In the implementation block
@property (nonatomic,retain) NSData * ciphertext;                   //@synthesize ciphertext=_ciphertext - In the implementation block
@property (nonatomic,retain) NSData * tag;                          //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) BOOL hasAssociatedData; 
@property (nonatomic,retain) NSData * associatedData;               //@synthesize associatedData=_associatedData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)version;
-(void)setVersion:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)tag;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setThreshold:(unsigned)arg1 ;
-(void)setHasThreshold:(BOOL)arg1 ;
-(BOOL)hasThreshold;
-(unsigned)threshold;
-(void)setTag:(NSData *)arg1 ;
-(NSData *)ciphertext;
-(void)setShareY:(NSData *)arg1 ;
-(void)setIv:(NSData *)arg1 ;
-(void)setCiphertext:(NSData *)arg1 ;
-(void)setAssociatedData:(NSData *)arg1 ;
-(BOOL)hasAssociatedData;
-(unsigned)shareX;
-(void)setShareX:(unsigned)arg1 ;
-(NSData *)shareY;
-(NSData *)iv;
-(NSData *)associatedData;
@end

