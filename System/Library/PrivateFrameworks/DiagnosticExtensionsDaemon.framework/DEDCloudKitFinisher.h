/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DEDFinisher.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/DEDSecureArchiving.h>

@protocol OS_os_log;
@class DEDBugSession, NSObject, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface DEDCloudKitFinisher : NSObject <DEDFinisher, NSSecureCoding, DEDSecureArchiving> {

	DEDBugSession* _session;
	NSObject*<OS_os_log> _log;
	unsigned long long _totalUploadSize;
	NSArray* _attachmentURLs;
	NSMutableArray* _attachmentRecords;
	NSMutableArray* _attachments;
	NSMutableDictionary* _uploadedBytes;

}

@property (__weak) DEDBugSession * session;                          //@synthesize session=_session - In the implementation block
@property (retain) NSObject*<OS_os_log> log;                         //@synthesize log=_log - In the implementation block
@property (assign) unsigned long long totalUploadSize;               //@synthesize totalUploadSize=_totalUploadSize - In the implementation block
@property (retain) NSArray * attachmentURLs;                         //@synthesize attachmentURLs=_attachmentURLs - In the implementation block
@property (retain) NSMutableArray * attachmentRecords;               //@synthesize attachmentRecords=_attachmentRecords - In the implementation block
@property (retain) NSMutableArray * attachments;                     //@synthesize attachments=_attachments - In the implementation block
@property (retain) NSMutableDictionary * uploadedBytes;              //@synthesize uploadedBytes=_uploadedBytes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)archivedClasses;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(DEDBugSession *)session;
-(void)setSession:(DEDBugSession *)arg1 ;
-(NSMutableArray *)attachments;
-(void)setAttachments:(NSMutableArray *)arg1 ;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(NSArray *)attachmentURLs;
-(id)initWithConfiguration:(id)arg1 session:(id)arg2 ;
-(void)finishSession:(id)arg1 withConfiguration:(id)arg2 ;
-(void)didStartCollectingDiagnosticExtensionWithIdentifier:(id)arg1 ;
-(void)didCancelCollectionOnExtension:(id)arg1 ;
-(void)didCollectAttachmentGroup:(id)arg1 ;
-(void)didFinishAllCollections;
-(void)setTotalUploadSize:(unsigned long long)arg1 ;
-(unsigned long long)totalUploadSize;
-(id)flattenDirectories:(id)arg1 ;
-(void)setAttachmentRecords:(NSMutableArray *)arg1 ;
-(void)setUploadedBytes:(NSMutableDictionary *)arg1 ;
-(void)setAttachmentURLs:(NSArray *)arg1 ;
-(NSMutableArray *)attachmentRecords;
-(NSMutableDictionary *)uploadedBytes;
-(void)localCleanup;
@end

