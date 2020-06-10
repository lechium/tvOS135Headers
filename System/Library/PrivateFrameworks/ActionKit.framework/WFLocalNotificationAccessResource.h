/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAccessResource.h>

@interface WFLocalNotificationAccessResource : WFAccessResource {

	unsigned long long _globalLevelStatus;

}

@property (assign,nonatomic) unsigned long long globalLevelStatus;              //@synthesize globalLevelStatus=_globalLevelStatus - In the implementation block
+(void)initialize;
+(BOOL)isSystemResource;
+(void)requestLocalNotificationsAuthorizationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)name;
-(id)icon;
-(unsigned long long)globalLevelStatus;
-(id)errorRecoveryOptionsForGlobalLevelStatus:(unsigned long long)arg1 ;
-(id)protectedResourceDescription;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)refreshAvailability;
-(void)setGlobalLevelStatus:(unsigned long long)arg1 ;
@end

