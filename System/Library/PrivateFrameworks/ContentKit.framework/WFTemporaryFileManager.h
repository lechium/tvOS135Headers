/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WFTemporaryFileManager : NSObject
+(id)temporaryDirectoryURL;
+(id)appGroupIdentifier;
+(id)proposedTemporaryFileURLForFilename:(id)arg1 ;
+(id)createTemporaryFileWithFilename:(id)arg1 ;
+(id)createTemporaryDirectoryWithFilename:(id)arg1 ;
+(id)wf_uncachedContainerURLForSecurityApplicationGroupIdentifier:(id)arg1 error:(id*)arg2 ;
+(id)sharedAppGroupDirectoryURL;
+(id)sharedTemporaryDirectoryURL;
+(void)createSharedDirectoryIfNecessary;
+(void)configureTemporaryDirectoryProtectionIfNecessary;
+(void)configureBackupFlagIfNecessary;
+(void)configureFileProtectionAtPath:(id)arg1 ;
+(void)configureBackupFlagAtURL:(id)arg1 ;
+(void)clearTemporaryFiles;
+(void)removeItemsInDirectory:(id)arg1 ;
+(id)proposedFileURLForFilename:(id)arg1 inDirectory:(id)arg2 isDirectory:(BOOL)arg3 ;
+(id)proposedTemporaryFileURLForFilename:(id)arg1 inDirectory:(id)arg2 isDirectory:(BOOL)arg3 ;
+(id)proposedTemporaryFileURLForFilename:(id)arg1 isDirectory:(BOOL)arg2 ;
+(id)proposedSharedTemporaryFileURLForFilename:(id)arg1 isDirectory:(BOOL)arg2 ;
+(id)proposedSharedTemporaryFileURLForFilename:(id)arg1 ;
+(id)proposedFileURLForFilename:(id)arg1 inDirectory:(id)arg2 ;
+(id)createTemporaryDirectoryWithFilename:(id)arg1 inDirectory:(id)arg2 ;
+(id)createSharedTemporaryDirectoryWithFilename:(id)arg1 ;
+(id)createTemporaryFileWithFilename:(id)arg1 inDirectory:(id)arg2 ;
+(id)createSharedTemporaryFileWithFilename:(id)arg1 ;
@end

