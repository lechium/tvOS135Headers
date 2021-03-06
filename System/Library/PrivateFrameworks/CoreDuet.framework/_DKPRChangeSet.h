/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _DKPRChangeSet : PBCodable <NSCopying> {

	NSMutableArray* _deleteEventIDs;
	NSMutableArray* _events;

}

@property (nonatomic,retain) NSMutableArray * events;                      //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NSMutableArray * deleteEventIDs;              //@synthesize deleteEventIDs=_deleteEventIDs - In the implementation block
+(Class)eventsType;
+(Class)deleteEventIDType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)events;
-(void)addEvents:(id)arg1 ;
-(unsigned long long)eventsCount;
-(void)clearEvents;
-(id)eventsAtIndex:(unsigned long long)arg1 ;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(void)setDeleteEventIDs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)deleteEventIDs;
-(void)addDeleteEventID:(id)arg1 ;
-(unsigned long long)deleteEventIDsCount;
-(void)clearDeleteEventIDs;
-(id)deleteEventIDAtIndex:(unsigned long long)arg1 ;
@end

