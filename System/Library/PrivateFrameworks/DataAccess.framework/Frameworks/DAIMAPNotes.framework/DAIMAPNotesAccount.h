/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAIMAPNotes.framework/DAIMAPNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DAAccount.h>

@interface DAIMAPNotesAccount : DAAccount {

	int _imapNotesAccountVersion;

}

@property (assign,setter=setIMAPNotesAccountVersion:,nonatomic) int imapNotesAccountVersion;              //@synthesize imapNotesAccountVersion=_imapNotesAccountVersion - In the implementation block
-(id)onBehalfOfBundleIdentifier;
-(BOOL)isEqualToAccount:(id)arg1 ;
-(int)imapNotesAccountVersion;
-(void)setIMAPNotesAccountVersion:(int)arg1 ;
@end

