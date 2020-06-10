/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NWPBUpdateBrowse : PBCodable <NSCopying> {

	NSString* _clientUUID;
	NSMutableArray* _discoveredEndpoints;

}

@property (nonatomic,readonly) BOOL hasClientUUID; 
@property (nonatomic,retain) NSString * clientUUID;                             //@synthesize clientUUID=_clientUUID - In the implementation block
@property (nonatomic,retain) NSMutableArray * discoveredEndpoints;              //@synthesize discoveredEndpoints=_discoveredEndpoints - In the implementation block
+(Class)discoveredEndpointsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)discoveredEndpoints;
-(BOOL)hasClientUUID;
-(NSString *)clientUUID;
-(void)setClientUUID:(NSString *)arg1 ;
-(void)clearDiscoveredEndpoints;
-(void)addDiscoveredEndpoints:(id)arg1 ;
-(unsigned long long)discoveredEndpointsCount;
-(id)discoveredEndpointsAtIndex:(unsigned long long)arg1 ;
-(void)setDiscoveredEndpoints:(NSMutableArray *)arg1 ;
@end

