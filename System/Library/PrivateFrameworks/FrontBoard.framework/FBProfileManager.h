/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSSet, NSMutableDictionary;

@interface FBProfileManager : NSObject {

	BOOL _started;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSSet* _workQueue_managedApplicationBundleIDs;
	NSMutableDictionary* _workQueue_profilesBySignerIdentity;

}

@property (getter=isStarted,nonatomic,readonly) BOOL started; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)isStarted;
-(void)startService;
-(void)_workQueue_reloadProfiles;
-(void)_workQueue_reloadManagedApplicationBundleIDs;
-(void)_managedAppsChangedNotification:(id)arg1 ;
-(BOOL)isManaged:(id)arg1 ;
-(id)profilesForSignerIdentity:(id)arg1 ;
-(void)_reloadProfiles;
@end

