/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, TRDeviceSetupPeripheralDelegate;
@class NSObject, NSString;

@interface TRDeviceSetupPeripheral : NSObject {

	BOOL _performingSetup;
	BOOL _preparingForSetup;
	NSObject*<OS_dispatch_queue> _queue;
	id<TRDeviceSetupPeripheralDelegate> _delegate;
	/*^block*/id _pendingSendDataHandler;
	NSString* _authenticatediTunesStoreID;

}

@property (copy) id pendingSendDataHandler;                                                    //@synthesize pendingSendDataHandler=_pendingSendDataHandler - In the implementation block
@property (nonatomic,copy) NSString * authenticatediTunesStoreID;                              //@synthesize authenticatediTunesStoreID=_authenticatediTunesStoreID - In the implementation block
@property (assign,nonatomic,__weak) id<TRDeviceSetupPeripheralDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<TRDeviceSetupPeripheralDelegate>)delegate;
-(void)setDelegate:(id<TRDeviceSetupPeripheralDelegate>)arg1 ;
-(void)_authenticateWithAction:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)_setUpWithAction:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)_didTapWithSendDataHandler:(/*^block*/id)arg1 ;
-(void)_didReceiveData:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)_didDisconnect;
-(void)cancelPreparingForSetup;
-(id)pendingSendDataHandler;
-(void)setPendingSendDataHandler:(id)arg1 ;
-(BOOL)_sendAction:(id)arg1 sendDataHandler:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)_setupDidFailWithError:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)_finishSetupWithAction:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)_cancelSetupWithAction:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)_legacyAuthenticateWithAction:(id)arg1 attemptCount:(unsigned long long)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)_legacyAuthenticateWithUserAgent:(id)arg1 deviceGUID:(id)arg2 accountID:(id)arg3 password:(id)arg4 attemptCount:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)_startAuthenticationWithReceivedAction:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)_cancelAuthenticationWithReceivedAction:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)setAuthenticatediTunesStoreID:(NSString *)arg1 ;
-(BOOL)performSetupAndReturnError:(id*)arg1 ;
-(void)cancelSetupForStateChange;
-(void)cancelSetupForTimeout;
-(NSString *)authenticatediTunesStoreID;
@end

