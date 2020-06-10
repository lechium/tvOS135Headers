/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRPlaybackQueueCapabilitiesProtobuf : PBCodable <NSCopying> {

	BOOL _requestByIdentifiers;
	BOOL _requestByRange;
	BOOL _requestByRequest;
	SCD_Struct_MR6 _has;

}

@property (assign,nonatomic) BOOL hasRequestByRange; 
@property (assign,nonatomic) BOOL requestByRange;                       //@synthesize requestByRange=_requestByRange - In the implementation block
@property (assign,nonatomic) BOOL hasRequestByIdentifiers; 
@property (assign,nonatomic) BOOL requestByIdentifiers;                 //@synthesize requestByIdentifiers=_requestByIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL hasRequestByRequest; 
@property (assign,nonatomic) BOOL requestByRequest;                     //@synthesize requestByRequest=_requestByRequest - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRequestByRange:(BOOL)arg1 ;
-(void)setRequestByIdentifiers:(BOOL)arg1 ;
-(BOOL)requestByRange;
-(BOOL)requestByIdentifiers;
-(BOOL)requestByRequest;
-(void)setHasRequestByRange:(BOOL)arg1 ;
-(BOOL)hasRequestByRange;
-(void)setHasRequestByIdentifiers:(BOOL)arg1 ;
-(BOOL)hasRequestByIdentifiers;
-(void)setRequestByRequest:(BOOL)arg1 ;
-(void)setHasRequestByRequest:(BOOL)arg1 ;
-(BOOL)hasRequestByRequest;
@end

