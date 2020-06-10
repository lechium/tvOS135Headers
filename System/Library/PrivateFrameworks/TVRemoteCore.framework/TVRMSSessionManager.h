/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, TVRMSSessionManagerDelegate;
@class NSMutableDictionary, NSObject;

@interface TVRMSSessionManager : NSObject {

	NSMutableDictionary* _sessions;
	NSObject*<OS_dispatch_queue> _sessionManagerQueue;
	id<TVRMSSessionManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TVRMSSessionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<TVRMSSessionManagerDelegate>)delegate;
-(void)setDelegate:(id<TVRMSSessionManagerDelegate>)arg1 ;
-(id)sessionWithIdentifier:(int)arg1 ;
-(int)_uniqueSessionIdentifier;
-(void)_updatePersistedSessionIdentifiers;
-(void)_scheduleSessionExpirationWithIdentifier:(int)arg1 timeout:(int)arg2 ;
-(int)identifierForSession:(id)arg1 ;
-(void)beginSession:(id)arg1 timeout:(int)arg2 shouldTakePowerAssertion:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)endSessionWithIdentifier:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)refreshSessionWithIdentifier:(int)arg1 ;
-(id)persistedSessionIdentifiers;
@end

