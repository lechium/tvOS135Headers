/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NWPBEndpoint, NWPBParameters;

@interface NWPBOpenConnection : PBCodable <NSCopying> {

	NSString* _clientUUID;
	NWPBEndpoint* _endpoint;
	NWPBParameters* _parameters;

}

@property (nonatomic,readonly) BOOL hasEndpoint; 
@property (nonatomic,retain) NWPBEndpoint * endpoint;                  //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,readonly) BOOL hasParameters; 
@property (nonatomic,retain) NWPBParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) BOOL hasClientUUID; 
@property (nonatomic,retain) NSString * clientUUID;                    //@synthesize clientUUID=_clientUUID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NWPBEndpoint *)endpoint;
-(void)setEndpoint:(NWPBEndpoint *)arg1 ;
-(id)dictionaryRepresentation;
-(NWPBParameters *)parameters;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setParameters:(NWPBParameters *)arg1 ;
-(BOOL)hasParameters;
-(BOOL)hasClientUUID;
-(NSString *)clientUUID;
-(void)setClientUUID:(NSString *)arg1 ;
-(BOOL)hasEndpoint;
@end
