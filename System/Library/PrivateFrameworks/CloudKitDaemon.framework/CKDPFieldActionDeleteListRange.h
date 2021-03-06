/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPListRange;

@interface CKDPFieldActionDeleteListRange : PBCodable <NSCopying> {

	CKDPListRange* _range;

}

@property (nonatomic,readonly) BOOL hasRange; 
@property (nonatomic,retain) CKDPListRange * range;              //@synthesize range=_range - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(CKDPListRange *)range;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRange:(CKDPListRange *)arg1 ;
-(BOOL)hasRange;
@end

