/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAccessResource.h>

@class NSArray;

@interface WFAccountAccessResource : WFAccessResource {

	id _observer;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) Class accountClass; 
@property (nonatomic,copy,readonly) NSArray * accounts; 
-(void)dealloc;
-(id)username;
-(id)initWithDefinition:(id)arg1 ;
-(NSArray *)accounts;
-(id)resourceName;
-(Class)accountClass;
-(unsigned long long)globalLevelStatus;
-(id)protectedResourceDescription;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)canLogOut;
-(void)logOut;
-(id)errorReasonForGlobalLevelStatus:(unsigned long long)arg1 ;
-(id)importErrorReasonForGlobalLevelStatus:(unsigned long long)arg1 ;
-(void)makeAvailableAtGlobalLevelWithWebAuthenticationSession:(/*^block*/id)arg1 ;
-(id)settingsUIDefinition;
@end

