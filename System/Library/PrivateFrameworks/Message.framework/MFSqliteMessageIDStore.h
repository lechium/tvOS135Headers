/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class NSString, MFMailMessageLibrary;

@interface MFSqliteMessageIDStore : NSObject {

	NSString* _url;
	int _mailboxRowid;
	MFMailMessageLibrary* _library;

}
-(void)dealloc;
-(void)_loadMailboxRowidIfNecessary:(sqlite3Ref)arg1 ;
-(id)initWithLibrary:(id)arg1 URLString:(id)arg2 ;
-(id)knownMessageIDsFromSet:(id)arg1 ;
-(id)messageIDsAddedBeforeDate:(double)arg1 ;
-(void)deleteUIDsNotInArray:(id)arg1 ;
-(unsigned)numberOfMessageIDs;
-(void)deleteAllUIDs;
-(unsigned long long)flagsForUID:(id)arg1 ;
@end
