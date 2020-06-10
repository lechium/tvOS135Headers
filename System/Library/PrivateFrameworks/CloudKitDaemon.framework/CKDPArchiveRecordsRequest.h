/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPArchiveRecordsRequest : PBRequest <NSCopying> {

	NSMutableArray* _idsToArchives;

}

@property (nonatomic,retain) NSMutableArray * idsToArchives;              //@synthesize idsToArchives=_idsToArchives - In the implementation block
+(id)options;
+(Class)idsToArchiveType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addIdsToArchive:(id)arg1 ;
-(unsigned long long)idsToArchivesCount;
-(void)clearIdsToArchives;
-(id)idsToArchiveAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)idsToArchives;
-(void)setIdsToArchives:(NSMutableArray *)arg1 ;
@end

