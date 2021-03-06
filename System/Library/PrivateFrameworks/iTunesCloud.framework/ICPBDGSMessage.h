/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ICPBDGSRequest, ICPBDGSResponse;

@interface ICPBDGSMessage : PBCodable <NSCopying> {

	ICPBDGSRequest* _request;
	ICPBDGSResponse* _response;

}

@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) ICPBDGSRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) BOOL hasResponse; 
@property (nonatomic,retain) ICPBDGSResponse * response;              //@synthesize response=_response - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(ICPBDGSRequest *)request;
-(void)setRequest:(ICPBDGSRequest *)arg1 ;
-(ICPBDGSResponse *)response;
-(void)setResponse:(ICPBDGSResponse *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasResponse;
-(BOOL)hasRequest;
@end

