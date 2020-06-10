/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DAResolveRecipientsConsumer.h>

@class MFConditionLock, NSDictionary, NSError;

@interface _MFDAResolveRecipientsConsumer : NSObject <DAResolveRecipientsConsumer> {

	MFConditionLock* _conditionLock;
	NSDictionary* _resolvedRecipientsByEmailAddress;
	NSError* _error;

}

@property (readonly) NSError * error; 
-(id)init;
-(void)dealloc;
-(NSError *)error;
-(id)waitForResolvedRecipients;
-(void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3 ;
-(void)resolvedRecipientsByEmailAddress:(id)arg1 ;
@end
