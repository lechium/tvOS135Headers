/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFMailDelivery.h>

@class MFSMTPConnection;

@interface MFSMTPDelivery : MFMailDelivery {

	MFSMTPConnection* _connection;

}
-(void)dealloc;
-(void)setAccount:(id)arg1 ;
-(void)_openConnection;
-(id)deliverMessageData:(id)arg1 toRecipients:(id)arg2 ;
-(Class)deliveryClass;
@end

