/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <C2/C2-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface C2MPCloudKitInfo : PBCodable <NSCopying> {

	unsigned long long _reportClientOperationFrequency;
	unsigned long long _reportClientOperationFrequencyBase;
	unsigned long long _reportOperationGroupFrequency;
	unsigned long long _reportOperationGroupFrequencyBase;
	NSString* _clientBundleId;
	NSMutableArray* _clientOperations;
	NSString* _clientProcessVersion;
	NSString* _container;
	NSString* _environment;
	NSMutableArray* _operationGroups;
	BOOL _anonymous;
	SCD_Struct_C23 _has;

}

@property (nonatomic,readonly) BOOL hasClientProcessVersion; 
@property (nonatomic,retain) NSString * clientProcessVersion;                                    //@synthesize clientProcessVersion=_clientProcessVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasClientBundleId; 
@property (nonatomic,retain) NSString * clientBundleId;                                          //@synthesize clientBundleId=_clientBundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasContainer; 
@property (nonatomic,retain) NSString * container;                                               //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) BOOL hasEnvironment; 
@property (nonatomic,retain) NSString * environment;                                             //@synthesize environment=_environment - In the implementation block
@property (assign,nonatomic) BOOL hasAnonymous; 
@property (assign,nonatomic) BOOL anonymous;                                                     //@synthesize anonymous=_anonymous - In the implementation block
@property (nonatomic,retain) NSMutableArray * operationGroups;                                   //@synthesize operationGroups=_operationGroups - In the implementation block
@property (assign,nonatomic) BOOL hasReportOperationGroupFrequency; 
@property (assign,nonatomic) unsigned long long reportOperationGroupFrequency;                   //@synthesize reportOperationGroupFrequency=_reportOperationGroupFrequency - In the implementation block
@property (assign,nonatomic) BOOL hasReportOperationGroupFrequencyBase; 
@property (assign,nonatomic) unsigned long long reportOperationGroupFrequencyBase;               //@synthesize reportOperationGroupFrequencyBase=_reportOperationGroupFrequencyBase - In the implementation block
@property (nonatomic,retain) NSMutableArray * clientOperations;                                  //@synthesize clientOperations=_clientOperations - In the implementation block
@property (assign,nonatomic) BOOL hasReportClientOperationFrequency; 
@property (assign,nonatomic) unsigned long long reportClientOperationFrequency;                  //@synthesize reportClientOperationFrequency=_reportClientOperationFrequency - In the implementation block
@property (assign,nonatomic) BOOL hasReportClientOperationFrequencyBase; 
@property (assign,nonatomic) unsigned long long reportClientOperationFrequencyBase;              //@synthesize reportClientOperationFrequencyBase=_reportClientOperationFrequencyBase - In the implementation block
+(Class)operationGroupType;
+(Class)clientOperationType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)container;
-(void)setContainer:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)environment;
-(void)setEnvironment:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)anonymous;
-(BOOL)hasEnvironment;
-(BOOL)hasContainer;
-(NSString *)clientBundleId;
-(void)setAnonymous:(BOOL)arg1 ;
-(void)setClientProcessVersion:(NSString *)arg1 ;
-(void)setReportClientOperationFrequency:(unsigned long long)arg1 ;
-(void)setReportClientOperationFrequencyBase:(unsigned long long)arg1 ;
-(void)setReportOperationGroupFrequency:(unsigned long long)arg1 ;
-(void)setReportOperationGroupFrequencyBase:(unsigned long long)arg1 ;
-(void)setOperationGroups:(NSMutableArray *)arg1 ;
-(void)setClientOperations:(NSMutableArray *)arg1 ;
-(unsigned long long)reportClientOperationFrequency;
-(unsigned long long)reportClientOperationFrequencyBase;
-(unsigned long long)reportOperationGroupFrequency;
-(unsigned long long)reportOperationGroupFrequencyBase;
-(NSString *)clientProcessVersion;
-(NSMutableArray *)operationGroups;
-(NSMutableArray *)clientOperations;
-(void)setClientBundleId:(NSString *)arg1 ;
-(void)addOperationGroup:(id)arg1 ;
-(void)addClientOperation:(id)arg1 ;
-(unsigned long long)operationGroupsCount;
-(void)clearOperationGroups;
-(id)operationGroupAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)clientOperationsCount;
-(void)clearClientOperations;
-(id)clientOperationAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasClientProcessVersion;
-(BOOL)hasClientBundleId;
-(void)setHasAnonymous:(BOOL)arg1 ;
-(BOOL)hasAnonymous;
-(void)setHasReportOperationGroupFrequency:(BOOL)arg1 ;
-(BOOL)hasReportOperationGroupFrequency;
-(void)setHasReportOperationGroupFrequencyBase:(BOOL)arg1 ;
-(BOOL)hasReportOperationGroupFrequencyBase;
-(void)setHasReportClientOperationFrequency:(BOOL)arg1 ;
-(BOOL)hasReportClientOperationFrequency;
-(void)setHasReportClientOperationFrequencyBase:(BOOL)arg1 ;
-(BOOL)hasReportClientOperationFrequencyBase;
@end

