/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageProtection/MessageProtection-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NGMPBP256Key;

@interface NGMPBFullDeviceIdentity : PBCodable <NSCopying> {

	NSMutableArray* _prekeys;
	NGMPBP256Key* _signingKey;

}

@property (nonatomic,retain) NGMPBP256Key * signingKey;              //@synthesize signingKey=_signingKey - In the implementation block
@property (nonatomic,retain) NSMutableArray * prekeys;               //@synthesize prekeys=_prekeys - In the implementation block
+(Class)prekeysType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NGMPBP256Key *)signingKey;
-(void)setSigningKey:(NGMPBP256Key *)arg1 ;
-(NSMutableArray *)prekeys;
-(void)addPrekeys:(id)arg1 ;
-(unsigned long long)prekeysCount;
-(void)clearPrekeys;
-(id)prekeysAtIndex:(unsigned long long)arg1 ;
-(void)setPrekeys:(NSMutableArray *)arg1 ;
@end

