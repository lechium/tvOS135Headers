/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFRequestQueue.h>

@class DAMailAccount, NSString;

@interface MFDARequestQueue : MFRequestQueue {

	DAMailAccount* _account;
	NSString* _folderID;

}
-(void)dealloc;
-(id)initWithAccount:(id)arg1 folderID:(id)arg2 ;
-(id)filterRequests:(id)arg1 consumers:(id)arg2 newConsumers:(id*)arg3 ;
-(void)processRequests:(id)arg1 consumers:(id)arg2 ;
@end

