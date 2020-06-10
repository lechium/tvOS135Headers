/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCControlChannel.h>
#import <libobjc.A.dylib/VCControlChannelTransactionDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableArray, NSObject, NSString;

@interface VCControlChannelMultiWay : VCControlChannel <VCControlChannelTransactionDelegate> {

	unsigned _transportSessionID;
	int _vfdMessage;
	int _vfdCancel;
	BOOL _isRunning;
	opaque_pthread_t* _pidReceiveProc;
	NSMutableDictionary* _dialogs;
	NSMutableArray* _activeParticipants;
	BOOL _isCCReliableDataNotReceivedReported;
	BOOL _isEncryptionEnabled;
	NSMutableDictionary* _cryptors;
	void* _currentSendMKI;
	void* _currentReceiveMKI;
	NSObject*<OS_dispatch_queue> _sequentialKeyMaterialQueue;

}

@property (assign,nonatomic) unsigned transportSessionID;                  //@synthesize transportSessionID=_transportSessionID - In the implementation block
@property (assign,nonatomic) int vfdMessage;                               //@synthesize vfdMessage=_vfdMessage - In the implementation block
@property (assign,nonatomic) int vfdCancel;                                //@synthesize vfdCancel=_vfdCancel - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * dialogs;              //@synthesize dialogs=_dialogs - In the implementation block
@property (readonly) BOOL isRunning;                                       //@synthesize isRunning=_isRunning - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL isEncryptionEnabled;                             //@synthesize isEncryptionEnabled=_isEncryptionEnabled - In the implementation block
-(void)dealloc;
-(void)start;
-(void)stop;
-(BOOL)isRunning;
-(void)registerPeriodicTask;
-(void)deregisterPeriodicTask;
-(void)periodicTask:(void*)arg1 ;
-(int)updateEncryption:(SCD_Struct_VC132*)arg1 derivedSSRC:(unsigned)arg2 ;
-(int)getKeyDerivationCryptoSet:(SCD_Struct_VC132*)arg1 withKeyMaterial:(id)arg2 derivedSSRC:(unsigned*)arg3 ;
-(void)setCurrentSendMKIWithKeyMaterial:(id)arg1 ;
-(void)initializeSRTPInfo:(tagSRTPINFO*)arg1 ;
-(void)initializeEncryption;
-(void)finalizeEncryption;
-(void)updateEncryptionWithEncryptionMaterial:(SCD_Struct_VC134*)arg1 ;
-(void)updateEncryptionWithKeyMaterial:(id)arg1 ;
-(BOOL)encryptData:(char*)arg1 size:(int)arg2 sequenceNumber:(unsigned short)arg3 ;
-(BOOL)decryptWithMKI:(void*)arg1 data:(char*)arg2 size:(int)arg3 sequenceNumber:(unsigned short)arg4 ;
-(unsigned)transportSessionID;
-(id)initWithTransportSessionID:(unsigned)arg1 reportingAgent:(opaqueRTCReportingRef)arg2 mode:(int)arg3 ;
-(void)addActiveParticipant:(unsigned long long)arg1 ;
-(BOOL)sendReliableMessageAndWait:(id)arg1 participantID:(unsigned long long)arg2 ;
-(void)setEncryptionWithEncryptionMaterial:(SCD_Struct_VC134*)arg1 ;
-(BOOL)sendReliableMessage:(id)arg1 participantID:(unsigned long long)arg2 timeout:(unsigned)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeActiveParticipant:(unsigned long long)arg1 ;
-(void)addNewKeyMaterial:(id)arg1 ;
-(id)initWithTransportSessionID:(unsigned)arg1 reportingAgent:(opaqueRTCReportingRef)arg2 ;
-(void)flushActiveMessages;
-(void)removeAllActiveParticipants;
-(BOOL)isParticipantActive:(unsigned long long)arg1 ;
-(void)addToSentStats:(int)arg1 ;
-(BOOL)isEncryptionEnabled;
-(id)lastUsedMKIBytes;
-(void)scheduleAfter:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(void)flushReportingStats;
-(BOOL)decryptMessageWithMKI:(void*)arg1 message:(id)arg2 buffer:(char*)arg3 size:(unsigned)arg4 sequenceNumber:(unsigned short)arg5 ;
-(id)processEncryptedPayload:(id)arg1 isData:(BOOL)arg2 sequenceNumber:(id)arg3 MKIData:(id)arg4 participantID:(id)arg5 ;
-(BOOL)sendReliableMessageAndWait:(id)arg1 participantID:(unsigned long long)arg2 timeout:(id)arg3 ;
-(void)flushRealTimeReportingStats;
-(void)addToReceivedStats:(int)arg1 ;
-(void)messageReceived:(id)arg1 participantInfo:(SCD_Struct_VC135*)arg2 ;
-(void)sendReliableMessage:(id)arg1 participantID:(unsigned long long)arg2 ;
-(void)sendUnreliableMessage:(id)arg1 participantID:(unsigned long long)arg2 ;
-(void)broadcastUnreliableMessage:(id)arg1 ;
-(void)setTransportSessionID:(unsigned)arg1 ;
-(int)vfdMessage;
-(void)setVfdMessage:(int)arg1 ;
-(int)vfdCancel;
-(void)setVfdCancel:(int)arg1 ;
-(NSMutableDictionary *)dialogs;
@end
