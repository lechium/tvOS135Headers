/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CalendarDatabase/CalendarDatabase-Structs.h>
@interface CDBAttachmentMigrator : NSObject
+(void)migrateWithLegacyCalendarDataContainer:(id)arg1 calendarDataContainerProvider:(id)arg2 database:(CalDatabase*)arg3 ;
+(void)migrateDataClassProtectionForAttachmentsInLegacyCalendarDataContainer:(id)arg1 ;
+(void)_moveAttachmentsFromLegacyAttachmentContainer:(id)arg1 calendarDataContainerProvider:(id)arg2 database:(CalDatabase*)arg3 ;
+(void)_moveAttachmentsForStore:(const void*)arg1 fromLegacyAttachmentContainer:(id)arg2 calendarDataContainerProvider:(id)arg3 database:(CalDatabase*)arg4 ;
+(BOOL)_createNewContainerIfNeeded:(id)arg1 error:(id*)arg2 ;
+(id)_infoForAttachmentsInLegacyAttachmentContainerForStore:(id)arg1 newAttachmentContainerForStore:(id)arg2 newCalendarDataContainer:(id)arg3 database:(CalDatabase*)arg4 ;
+(BOOL)_moveAttachmentsWithInfo:(id)arg1 error:(id*)arg2 ;
+(void)_updateLocalRelativeURLForAttachmentsWithInfo:(id)arg1 database:(CalDatabase*)arg2 ;
+(void)_setFileSizeForAttachmentsWithInfo:(id)arg1 database:(CalDatabase*)arg2 ;
+(void)_setLocalRelativePathForAttachmentUUID:(id)arg1 localRelativePath:(id)arg2 database:(CalDatabase*)arg3 ;
+(void)_setFileSizeForAttachmentUUID:(id)arg1 attachmentURL:(id)arg2 database:(CalDatabase*)arg3 ;
+(BOOL)_moveAttachmentWithInfo:(id)arg1 error:(id*)arg2 ;
+(id)_attachmentInfoForLegacyAttachmentURL:(id)arg1 newAttachmentContainerForStore:(id)arg2 newCalendarDataContainer:(id)arg3 database:(CalDatabase*)arg4 attachmentUUID:(id*)arg5 ;
@end

