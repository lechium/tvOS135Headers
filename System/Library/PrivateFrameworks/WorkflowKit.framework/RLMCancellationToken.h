/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/RLMNotificationToken.h>

@class RLMRealm;

@interface RLMCancellationToken : RLMNotificationToken {

	NotificationToken* _token;
	RLMRealm* _realm;

}
-(void)invalidate;
-(id)realm;
-(id)initWithToken:(NotificationToken*)arg1 realm:(id)arg2 ;
-(void)suppressNextNotification;
@end

