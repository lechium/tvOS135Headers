/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>
#import <libobjc.A.dylib/CKDURLRequestPipelining.h>

@class NSMutableArray, CKQuery, NSData, CKRecordZoneID, NSArray, NSSet, NSString;

@interface CKDQueryURLRequest : CKDURLRequest <CKDURLRequestPipelining> {

	NSMutableArray* _queryResponses;
	BOOL _shouldFetchAssetContent;
	CKQuery* _query;
	NSData* _cursor;
	unsigned long long _limit;
	CKRecordZoneID* _zoneID;
	NSArray* _requestedFields;
	NSSet* _desiredAssetKeys;
	/*^block*/id _recordsParsedBlock;
	NSData* _resultsCursor;
	NSMutableArray* _recordResponses;

}

@property (nonatomic,retain) NSMutableArray * queryResponses;               //@synthesize queryResponses=_queryResponses - In the implementation block
@property (nonatomic,retain) NSData * resultsCursor;                        //@synthesize resultsCursor=_resultsCursor - In the implementation block
@property (nonatomic,retain) NSMutableArray * recordResponses;              //@synthesize recordResponses=_recordResponses - In the implementation block
@property (nonatomic,retain) CKQuery * query;                               //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSData * cursor;                               //@synthesize cursor=_cursor - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                      //@synthesize limit=_limit - In the implementation block
@property (nonatomic,retain) CKRecordZoneID * zoneID;                       //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,retain) NSArray * requestedFields;                     //@synthesize requestedFields=_requestedFields - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                  //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (nonatomic,retain) NSSet * desiredAssetKeys;                      //@synthesize desiredAssetKeys=_desiredAssetKeys - In the implementation block
@property (nonatomic,copy) id recordsParsedBlock;                           //@synthesize recordsParsedBlock=_recordsParsedBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CKQuery *)query;
-(NSData *)cursor;
-(void)setQuery:(CKQuery *)arg1 ;
-(CKRecordZoneID *)zoneID;
-(int)operationType;
-(void)setCursor:(NSData *)arg1 ;
-(BOOL)shouldFetchAssetContent;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(void)setResultsCursor:(NSData *)arg1 ;
-(NSData *)resultsCursor;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(void)setLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
-(NSArray *)requestedFields;
-(void)setRequestedFields:(NSArray *)arg1 ;
-(id)initWithQuery:(id)arg1 cursor:(id)arg2 limit:(unsigned long long)arg3 requestedFields:(id)arg4 zoneID:(id)arg5 ;
-(void)setDesiredAssetKeys:(NSSet *)arg1 ;
-(void)setRecordsParsedBlock:(id)arg1 ;
-(id)generateRequestOperations;
-(BOOL)requestGETPreAuth;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(BOOL)allowsAnonymousAccount;
-(id)zoneIDsToLock;
-(void)requestDidComplete;
-(NSSet *)desiredAssetKeys;
-(id)recordsParsedBlock;
-(NSMutableArray *)queryResponses;
-(void)setQueryResponses:(NSMutableArray *)arg1 ;
-(NSMutableArray *)recordResponses;
-(void)setRecordResponses:(NSMutableArray *)arg1 ;
@end

