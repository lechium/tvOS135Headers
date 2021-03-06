/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ICIAMSynchronizeMessagesResponse : PBCodable <NSCopying> {

	NSMutableArray* _applicationMessageSyncResponses;

}

@property (nonatomic,retain) NSMutableArray * applicationMessageSyncResponses;              //@synthesize applicationMessageSyncResponses=_applicationMessageSyncResponses - In the implementation block
+(Class)applicationMessageSyncResponsesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)applicationMessageSyncResponsesCount;
-(id)applicationMessageSyncResponsesAtIndex:(unsigned long long)arg1 ;
-(void)addApplicationMessageSyncResponses:(id)arg1 ;
-(void)clearApplicationMessageSyncResponses;
-(NSMutableArray *)applicationMessageSyncResponses;
-(void)setApplicationMessageSyncResponses:(NSMutableArray *)arg1 ;
@end

