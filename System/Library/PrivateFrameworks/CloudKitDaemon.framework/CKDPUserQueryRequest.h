/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPUserAlias, NSString, NSMutableArray;

@interface CKDPUserQueryRequest : PBRequest <NSCopying> {

	CKDPUserAlias* _alias;
	NSString* _oBSOLETEPcsServiceType;
	NSMutableArray* _sortedBys;
	BOOL _publicKeyRequested;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasAlias; 
@property (nonatomic,retain) CKDPUserAlias * alias;                          //@synthesize alias=_alias - In the implementation block
@property (nonatomic,retain) NSMutableArray * sortedBys;                     //@synthesize sortedBys=_sortedBys - In the implementation block
@property (nonatomic,readonly) BOOL hasOBSOLETEPcsServiceType; 
@property (nonatomic,retain) NSString * oBSOLETEPcsServiceType;              //@synthesize oBSOLETEPcsServiceType=_oBSOLETEPcsServiceType - In the implementation block
@property (assign,nonatomic) BOOL hasPublicKeyRequested; 
@property (assign,nonatomic) BOOL publicKeyRequested;                        //@synthesize publicKeyRequested=_publicKeyRequested - In the implementation block
+(id)options;
+(Class)sortedByType;
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
-(void)setAlias:(CKDPUserAlias *)arg1 ;
-(CKDPUserAlias *)alias;
-(void)addSortedBy:(id)arg1 ;
-(unsigned long long)sortedBysCount;
-(void)clearSortedBys;
-(id)sortedByAtIndex:(unsigned long long)arg1 ;
-(void)setOBSOLETEPcsServiceType:(NSString *)arg1 ;
-(BOOL)hasAlias;
-(BOOL)hasOBSOLETEPcsServiceType;
-(BOOL)publicKeyRequested;
-(void)setPublicKeyRequested:(BOOL)arg1 ;
-(void)setHasPublicKeyRequested:(BOOL)arg1 ;
-(BOOL)hasPublicKeyRequested;
-(NSMutableArray *)sortedBys;
-(void)setSortedBys:(NSMutableArray *)arg1 ;
-(NSString *)oBSOLETEPcsServiceType;
@end
