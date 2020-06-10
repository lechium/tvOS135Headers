/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface _DKPRCompressedChangeSet : PBCodable <NSCopying> {

	unsigned long long _uncompressedLength;
	NSData* _compressedData;

}

@property (assign,nonatomic) unsigned long long uncompressedLength;              //@synthesize uncompressedLength=_uncompressedLength - In the implementation block
@property (nonatomic,retain) NSData * compressedData;                            //@synthesize compressedData=_compressedData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCompressedData:(NSData *)arg1 ;
-(unsigned long long)uncompressedLength;
-(void)setUncompressedLength:(unsigned long long)arg1 ;
-(NSData *)compressedData;
@end
