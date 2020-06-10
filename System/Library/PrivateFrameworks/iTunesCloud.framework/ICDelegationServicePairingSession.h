/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, ICDelegationServicePairingSessionDelegate;
#import <iTunesCloud/iTunesCloud-Structs.h>
@class NSObject, NSMutableArray, NSData, NSMutableData, ICDelegationServiceSecuritySettings;

@interface ICDelegationServicePairingSession : NSObject {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSMutableArray* _existingPairingCompletionHandlers;
	NSData* _inputKey;
	NSMutableData* _inputNonce;
	NSData* _outputKey;
	NSMutableData* _outputNonce;
	PairingSessionPrivateRef _pairingSession;
	long long _state;
	id<ICDelegationServicePairingSessionDelegate> _delegate;
	long long _role;
	ICDelegationServiceSecuritySettings* _securitySettings;

}

@property (assign,nonatomic,__weak) id<ICDelegationServicePairingSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long role;                                                           //@synthesize role=_role - In the implementation block
@property (nonatomic,readonly) ICDelegationServiceSecuritySettings * securitySettings;                   //@synthesize securitySettings=_securitySettings - In the implementation block
-(void)dealloc;
-(id<ICDelegationServicePairingSessionDelegate>)delegate;
-(void)setDelegate:(id<ICDelegationServicePairingSessionDelegate>)arg1 ;
-(long long)role;
-(void)_receivedData:(id)arg1 ;
-(ICDelegationServiceSecuritySettings *)securitySettings;
-(void)receievedData:(id)arg1 ;
-(void)getDecryptedDataForEncryptedData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)initWithRole:(long long)arg1 securitySettings:(id)arg2 ;
-(void)prepareEncryptedSessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getEncryptedDataForData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_handlePairingSessionCompletionWithError:(id)arg1 ;
-(id)_encryptedDataForData:(id)arg1 ;
-(BOOL)_deriveEncryptionKeysReturningError:(id*)arg1 ;
-(void)_sendData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

