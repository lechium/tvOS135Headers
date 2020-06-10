/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMDCKAttachmentSyncCKOperationFactory : NSObject
+(id)_desiredKeysArrayForType:(long long)arg1 ;
-(id)_operationGroupWithName:(id)arg1 ;
-(id)fetchAttachmentZoneRecords:(id)arg1 desiredKeys:(long long)arg2 operationGroupName:(id)arg3 ;
-(id)fetchAttachmentZoneChangesCKOperationUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 desiredKeys:(long long)arg4 operationGroupName:(id)arg5 ;
-(id)saveAttachmentsCKOperationUsingRecordsToSave:(id)arg1 ;
-(id)deleteAttachmentCKOperationUsingRecordIDstoDelete:(id)arg1 ;
-(id)_attachmentFetchRecordZoneChangesOptionsDictionaryUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 desiredKeys:(long long)arg4 ;
-(BOOL)_defaultsSayWeHaveSyncedOnce;
@end

