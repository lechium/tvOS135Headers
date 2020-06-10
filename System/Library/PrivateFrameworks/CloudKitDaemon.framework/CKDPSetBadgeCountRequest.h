/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CKDPSetBadgeCountRequest : PBRequest <NSCopying> {

	unsigned _badgeCount;
	BOOL _forDevice;
	SCD_Struct_CK4 _has;

}

@property (assign,nonatomic) BOOL hasBadgeCount; 
@property (assign,nonatomic) unsigned badgeCount;              //@synthesize badgeCount=_badgeCount - In the implementation block
@property (assign,nonatomic) BOOL hasForDevice; 
@property (assign,nonatomic) BOOL forDevice;                   //@synthesize forDevice=_forDevice - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)badgeCount;
-(void)setBadgeCount:(unsigned)arg1 ;
-(void)setHasBadgeCount:(BOOL)arg1 ;
-(BOOL)hasBadgeCount;
-(void)setForDevice:(BOOL)arg1 ;
-(void)setHasForDevice:(BOOL)arg1 ;
-(BOOL)hasForDevice;
-(BOOL)forDevice;
@end
