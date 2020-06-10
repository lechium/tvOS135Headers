/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DAMailMessage.h>

@class MFMailMessage, NSString;

@interface MFDADraftMessage : DAMailMessage {

	MFMailMessage* _message;
	unsigned long long _clientID;
	NSString* _bodyData;

}
-(void)dealloc;
-(id)date;
-(id)clientID;
-(id)body;
-(id)subject;
-(id)serverID;
-(id)from;
-(id)to;
-(int)bodyType;
-(void)setClientID:(unsigned long long)arg1 ;
-(id)messageIDHeader;
-(id)cc;
-(id)bcc;
-(id)replyTo;
-(id)initWithMailMessage:(id)arg1 clientID:(unsigned long long)arg2 ;
@end

