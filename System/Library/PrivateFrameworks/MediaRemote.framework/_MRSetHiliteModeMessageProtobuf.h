/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRSetHiliteModeMessageProtobuf : PBCodable <NSCopying> {

	BOOL _hiliteMode;
	SCD_Struct_MR4 _has;

}

@property (assign,nonatomic) BOOL hasHiliteMode; 
@property (assign,nonatomic) BOOL hiliteMode;                 //@synthesize hiliteMode=_hiliteMode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHiliteMode:(BOOL)arg1 ;
-(BOOL)hiliteMode;
-(void)setHasHiliteMode:(BOOL)arg1 ;
-(BOOL)hasHiliteMode;
@end

