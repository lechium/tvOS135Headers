/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFSASLAuthenticator.h>

@interface _MFGmailClientTokenAuthenticator : MFSASLAuthenticator {

	BOOL _sentResponse;

}
-(id)saslName;
-(id)responseForServerData:(id)arg1 ;
-(BOOL)justSentPlainTextPassword;
-(BOOL)supportsInitialClientResponse;
@end

