/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@protocol OS_dispatch_group;
@class CKDContainerInfo, NSObject;

@interface CKDContainerSpecificInfoOperation : CKDOperation {

	BOOL _requireUserIDs;
	CKDContainerInfo* _containerInfo;
	NSObject*<OS_dispatch_group> _infoFetchedGroup;

}

@property (nonatomic,copy) CKDContainerInfo * containerInfo;                               //@synthesize containerInfo=_containerInfo - In the implementation block
@property (assign,nonatomic) BOOL requireUserIDs;                                          //@synthesize requireUserIDs=_requireUserIDs - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> infoFetchedGroup;              //@synthesize infoFetchedGroup=_infoFetchedGroup - In the implementation block
-(void)setCompletionBlock:(/*^block*/id)arg1 ;
-(void)main;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(BOOL)shouldCheckAppVersion;
-(BOOL)requireUserIDs;
-(void)setContainerInfo:(CKDContainerInfo *)arg1 ;
-(CKDContainerInfo *)containerInfo;
-(void)setRequireUserIDs:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_group>)infoFetchedGroup;
@end
