/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, IDSKVStore;

@interface IMDCKMockRecordZone : NSObject {

	NSString* _identifier;
	NSObject*<OS_dispatch_queue> _queue;
	IDSKVStore* _recordStore;

}

@property (nonatomic,readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) IDSKVStore * recordStore;                          //@synthesize recordStore=_recordStore - In the implementation block
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void)handleOperation:(id)arg1 ;
-(id)_kvStorePath;
-(void)_handleFetchZoneChangesOperation:(id)arg1 ;
-(void)_handleModifyRecordsOperation:(id)arg1 ;
-(id)_fetchRecordZoneChangesOptionsFromOperation:(id)arg1 ;
-(unsigned long long)_fetchResultLimit:(id)arg1 ;
-(IDSKVStore *)recordStore;
-(id)_ckRecordFromData:(id)arg1 ;
-(id)_serializedCKRecordData:(id)arg1 ;
-(void)setRecordStore:(IDSKVStore *)arg1 ;
@end

