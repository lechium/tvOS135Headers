/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _DKPRMetadata : PBCodable <NSCopying> {

	NSMutableArray* _entrys;

}

@property (nonatomic,retain) NSMutableArray * entrys;              //@synthesize entrys=_entrys - In the implementation block
+(Class)entryType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)entrysCount;
-(void)clearEntrys;
-(id)entryAtIndex:(unsigned long long)arg1 ;
-(void)addEntry:(id)arg1 ;
-(NSMutableArray *)entrys;
-(void)setEntrys:(NSMutableArray *)arg1 ;
@end

