/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, IMAPAccount;

@interface _MFIMAPMailboxDeletionQueueEntry : NSObject {

	NSArray* urls;
	NSArray* paths;
	IMAPAccount* account;

}

@property (copy) NSArray * urls; 
@property (copy) NSArray * paths; 
@property (retain) IMAPAccount * account; 
-(void)dealloc;
-(NSArray *)paths;
-(void)setPaths:(NSArray *)arg1 ;
-(NSArray *)urls;
-(void)setUrls:(NSArray *)arg1 ;
-(IMAPAccount *)account;
-(void)setAccount:(IMAPAccount *)arg1 ;
@end

