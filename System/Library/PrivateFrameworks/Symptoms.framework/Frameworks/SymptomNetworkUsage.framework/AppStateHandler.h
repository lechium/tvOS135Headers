/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NWAppStateEventListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSMutableSet, NWEntityMapper, NSString;

@interface AppStateHandler : NSObject <NWAppStateEventListenerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _appPidState;
	NSMutableDictionary* _appBundlesMonitored;
	NSMutableDictionary* _appsWithStates;
	NSMutableSet* _foregroundApps;
	NWEntityMapper* _entityMapper;
	BOOL _hasAnyForegroundApp;
	BOOL _handlesRnf;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getAppsWithStates;
-(void)configure:(id)arg1 ;
-(BOOL)hasAnyForegroundApp;
-(id)foregroundAppKeys;
-(unsigned)currentStateForProcessWithPid:(int)arg1 ;
-(id)_getAppsWithStates;
-(BOOL)_trackerSetHasForeground:(id)arg1 ;
-(void)handleApplicationStateChangeForDisplayName:(id)arg1 UUID:(id)arg2 pid:(int)arg3 state:(unsigned)arg4 ;
-(void)purgeInvalidPidState;
-(void)_removeStateTracker:(id)arg1 hadForeground:(BOOL*)arg2 hasForeground:(BOOL*)arg3 ;
-(id)initWithMapper:(id)arg1 ;
@end

