/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRReceivedCommandAppOptionsProtobuf : PBCodable <NSCopying> {

	BOOL _launchApplication;
	SCD_Struct_MR4 _has;

}

@property (assign,nonatomic) BOOL hasLaunchApplication; 
@property (assign,nonatomic) BOOL launchApplication;                 //@synthesize launchApplication=_launchApplication - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLaunchApplication:(BOOL)arg1 ;
-(void)setHasLaunchApplication:(BOOL)arg1 ;
-(BOOL)hasLaunchApplication;
-(BOOL)launchApplication;
@end

