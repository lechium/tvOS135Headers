/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/SMTPAccount.h>

@class CastleIMAPAccount;

@interface MFNewcastleSMTPAccount : SMTPAccount {

	CastleIMAPAccount* _castleAccount;

}

@property (nonatomic,retain) CastleIMAPAccount * castleAccount;              //@synthesize castleAccount=_castleAccount - In the implementation block
+(id)accountTypeIdentifier;
-(void)dealloc;
-(id)accountForRenewingCredentials;
-(BOOL)shouldFetchACEDBInfoForError:(id)arg1 ;
-(BOOL)shouldUseAuthentication;
-(id)mailAccountIfAvailable;
-(id)displayHostname;
-(CastleIMAPAccount *)castleAccount;
-(void)setCastleAccount:(CastleIMAPAccount *)arg1 ;
@end

