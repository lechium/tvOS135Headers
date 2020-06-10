/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMDaemonCore/IMDaemonCore-Structs.h>
@interface IMDAttachmentStore : NSObject
+(id)sharedInstance;
-(void)markAllAttachmentsAsNotPurgeable;
-(BOOL)updateLegacyTransferGUIDIfNeeded:(id)arg1 ;
-(id)attachmentWithGUID:(id)arg1 ;
-(void)markAllAttachmentsAsNeedingCloudKitSync;
-(BOOL)updateAttachment:(id)arg1 ;
-(BOOL)isSafeToDeleteAttachmentAtPath:(id)arg1 ;
-(BOOL)storeAttachment:(id)arg1 associateWithMessageWithGUID:(id)arg2 ;
-(BOOL)updateLegacyTransferGUIDOnMessageIfNeeded:(id)arg1 ;
-(void)markAttachmentPurgeable:(id)arg1 ;
-(id)fileTransferWithAttachmentRecordRef:(IMDAttachmentRecordStructRef)arg1 ;
-(BOOL)_fileEligibleForCacheDelete:(id)arg1 ;
-(BOOL)_cloudkitSyncingEnabled;
-(void)markFileAsPurgeable:(id)arg1 ;
-(id)getAuxVideoPath:(id)arg1 ;
-(BOOL)_updateLegacyTransferGUIDOnMessageIfNeeded:(id)arg1 andUpdateTransfer:(id)arg2 ;
-(BOOL)_shouldEarlyReturnForWrongItemType:(id)arg1 ;
-(id)_updatedMessageBody:(id)arg1 replacingGuid:(id)arg2 withGuid:(id)arg3 ;
-(BOOL)removeAttachment:(id)arg1 fromMessageWithGUID:(id)arg2 ;
-(BOOL)deleteAttachmentsWithGUIDs:(id)arg1 ;
-(BOOL)deleteAttachmentDataForTransfer:(id)arg1 ;
-(BOOL)deleteAttachmentWithGUID:(id)arg1 ;
@end
