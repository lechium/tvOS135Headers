/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSMutableDictionary;

@interface TLContentProtectionStateObserver : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSString* _accessQueueLabel;
	NSMutableDictionary* _blocksScheduledForProtectedContentUnlockedEvent;
	long long _contentProtectionStatus;
	long long _unlockedSinceBootStatus;
	int _firstUnlockNotifyToken;

}
+(id)sharedContentProtectionStateObserver;
-(id)init;
-(void)dealloc;
-(id)performBlockAfterProtectedContentUnlocked:(/*^block*/id)arg1 ;
-(void)cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)arg1 ;
-(void)_assertRunningOnAccessQueue;
-(void)_cancelFirstUnlockNotifyToken;
-(id)_performBlockAfterProtectedContentUnlocked:(/*^block*/id)arg1 ;
-(void)_loadContentProtectionStatusIfNeeded;
-(void)_loadUnlockedSinceBootStatusIfNeeded;
-(void)_cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)arg1 ;
-(void)_handleFirstUnlockNotification;
-(void)_updateUnlockedSinceBootStatus;
-(long long)_queryCurrentUnlockedSinceBootStatus;
-(void)_registerFirstUnlockNotifyToken;
-(void)_assertNotRunningOnAccessQueue;
@end

