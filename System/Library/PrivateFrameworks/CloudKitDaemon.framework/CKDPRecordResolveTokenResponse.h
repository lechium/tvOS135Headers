/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKDPProtectionInfo, CKDPZone, NSMutableArray, CKDPShareMetadata, CKDPRecord;

@interface CKDPRecordResolveTokenResponse : PBCodable <NSCopying> {

	NSString* _container;
	int _containerEnvironment;
	CKDPProtectionInfo* _protectionInfo;
	CKDPProtectionInfo* _recordProtectionInfo;
	CKDPZone* _recordZone;
	NSMutableArray* _records;
	CKDPShareMetadata* _shareMetadata;
	CKDPRecord* _shareRecord;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasContainer; 
@property (nonatomic,retain) NSString * container;                                   //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) BOOL hasContainerEnvironment; 
@property (assign,nonatomic) int containerEnvironment;                               //@synthesize containerEnvironment=_containerEnvironment - In the implementation block
@property (nonatomic,retain) NSMutableArray * records;                               //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) BOOL hasShareRecord; 
@property (nonatomic,retain) CKDPRecord * shareRecord;                               //@synthesize shareRecord=_shareRecord - In the implementation block
@property (nonatomic,readonly) BOOL hasShareMetadata; 
@property (nonatomic,retain) CKDPShareMetadata * shareMetadata;                      //@synthesize shareMetadata=_shareMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectionInfo; 
@property (nonatomic,retain) CKDPProtectionInfo * protectionInfo;                    //@synthesize protectionInfo=_protectionInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordProtectionInfo; 
@property (nonatomic,retain) CKDPProtectionInfo * recordProtectionInfo;              //@synthesize recordProtectionInfo=_recordProtectionInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordZone; 
@property (nonatomic,retain) CKDPZone * recordZone;                                  //@synthesize recordZone=_recordZone - In the implementation block
+(Class)recordType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)container;
-(void)setContainer:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(CKDPZone *)recordZone;
-(void)setRecordZone:(CKDPZone *)arg1 ;
-(void)addRecord:(id)arg1 ;
-(NSMutableArray *)records;
-(BOOL)hasRecordZone;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRecords:(NSMutableArray *)arg1 ;
-(unsigned long long)recordsCount;
-(void)clearRecords;
-(BOOL)hasContainer;
-(CKDPProtectionInfo *)protectionInfo;
-(void)setProtectionInfo:(CKDPProtectionInfo *)arg1 ;
-(CKDPShareMetadata *)shareMetadata;
-(void)setShareMetadata:(CKDPShareMetadata *)arg1 ;
-(void)setRecordProtectionInfo:(CKDPProtectionInfo *)arg1 ;
-(BOOL)hasRecordProtectionInfo;
-(CKDPProtectionInfo *)recordProtectionInfo;
-(id)recordAtIndex:(unsigned long long)arg1 ;
-(void)setShareRecord:(CKDPRecord *)arg1 ;
-(int)containerEnvironment;
-(void)setContainerEnvironment:(int)arg1 ;
-(void)setHasContainerEnvironment:(BOOL)arg1 ;
-(BOOL)hasContainerEnvironment;
-(id)containerEnvironmentAsString:(int)arg1 ;
-(int)StringAsContainerEnvironment:(id)arg1 ;
-(BOOL)hasShareRecord;
-(BOOL)hasShareMetadata;
-(BOOL)hasProtectionInfo;
-(CKDPRecord *)shareRecord;
@end

