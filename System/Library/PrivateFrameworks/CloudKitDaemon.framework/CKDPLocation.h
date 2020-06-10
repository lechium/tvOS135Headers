/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPLocationBound, CKDPLocationCoordinate;

@interface CKDPLocation : PBCodable <NSCopying> {

	CKDPLocationBound* _bounds;
	CKDPLocationCoordinate* _coordinate;

}

@property (nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,retain) CKDPLocationCoordinate * coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) BOOL hasBounds; 
@property (nonatomic,retain) CKDPLocationBound * bounds;                       //@synthesize bounds=_bounds - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(CKDPLocationCoordinate *)coordinate;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(CKDPLocationBound *)bounds;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setBounds:(CKDPLocationBound *)arg1 ;
-(void)setCoordinate:(CKDPLocationCoordinate *)arg1 ;
-(BOOL)hasCoordinate;
-(BOOL)hasBounds;
@end

