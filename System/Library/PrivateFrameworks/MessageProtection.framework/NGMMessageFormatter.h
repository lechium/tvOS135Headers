/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NGMMessageFormatter : NSObject
+(id)formatOutgoingInnerMessageWithPayload:(id)arg1 destinationIdentity:(id)arg2 sendingIdentity:(id)arg3 error:(id*)arg4 ;
+(id)formatOutgoingMessageWithEncryptedPayload:(id)arg1 ephemeral:(id)arg2 signature:(id)arg3 keyValidator:(id)arg4 ;
@end

