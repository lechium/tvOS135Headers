/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/CBCentralManagerDelegate.h>
#import <libobjc.A.dylib/CBPeripheralDelegate.h>
#import <libobjc.A.dylib/CUReadWriteRequestable.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class CBCentralManager, CBPeripheral, NSObject, CUReadRequest, NSMutableArray, CUWriteRequest, NSUUID, NSString, CBL2CAPChannel;

@interface CUBLEConnection : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate, CUReadWriteRequestable> {

	/*^block*/id _activateCompletion;
	CBCentralManager* _centralManager;
	BOOL _guardConnected;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	CBPeripheral* _peripheral;
	NSObject*<OS_dispatch_source> _readSource;
	unsigned char _readSuspended;
	CUReadRequest* _readRequestCurrent;
	NSMutableArray* _readRequests;
	int _socketFD;
	int _state;
	NSObject*<OS_dispatch_source> _writeSource;
	unsigned char _writeSuspended;
	CUWriteRequest* _writeRequestCurrent;
	NSMutableArray* _writeRequests;
	LogCategory* _ucat;
	unsigned short _destinationPSM;
	int _connectionLatency;
	NSUUID* _destinationUUID;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _errorHandler;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	CBL2CAPChannel* _l2capChannel;
	/*^block*/id _serverInvalidationHandler;

}

@property (nonatomic,retain) CBL2CAPChannel * l2capChannel;                           //@synthesize l2capChannel=_l2capChannel - In the implementation block
@property (nonatomic,copy) id serverInvalidationHandler;                              //@synthesize serverInvalidationHandler=_serverInvalidationHandler - In the implementation block
@property (assign,nonatomic) int connectionLatency;                                   //@synthesize connectionLatency=_connectionLatency - In the implementation block
@property (assign,nonatomic) unsigned short destinationPSM;                           //@synthesize destinationPSM=_destinationPSM - In the implementation block
@property (nonatomic,copy) NSUUID * destinationUUID;                                  //@synthesize destinationUUID=_destinationUUID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(id)invalidationHandler;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidated;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2 ;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didOpenL2CAPChannel:(id)arg2 error:(id)arg3 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)readWithRequest:(id)arg1 ;
-(void)writeWithRequest:(id)arg1 ;
-(BOOL)activateDirectAndReturnError:(id*)arg1 ;
-(BOOL)_startConnectingAndReturnError:(id*)arg1 ;
-(BOOL)_setupIOAndReturnError:(id*)arg1 ;
-(void)_reportError:(id)arg1 ;
-(void)_run;
-(BOOL)_runConnectStart;
-(BOOL)_runSetupChannel;
-(void)_processReads:(BOOL)arg1 ;
-(void)_prepareReadRequest:(id)arg1 ;
-(void)_abortReadsWithError:(id)arg1 ;
-(BOOL)_processReadStatus;
-(void)_completeReadRequest:(id)arg1 error:(id)arg2 ;
-(void)writeEndOfDataWithCompletion:(/*^block*/id)arg1 ;
-(void)_processWrites;
-(BOOL)_prepareWriteRequest:(id)arg1 error:(id*)arg2 ;
-(void)_abortWritesWithError:(id)arg1 ;
-(void)_completeWriteRequest:(id)arg1 error:(id)arg2 ;
-(int)connectionLatency;
-(void)setConnectionLatency:(int)arg1 ;
-(unsigned short)destinationPSM;
-(void)setDestinationPSM:(unsigned short)arg1 ;
-(NSUUID *)destinationUUID;
-(void)setDestinationUUID:(NSUUID *)arg1 ;
-(CBL2CAPChannel *)l2capChannel;
-(void)setL2capChannel:(CBL2CAPChannel *)arg1 ;
-(id)serverInvalidationHandler;
-(void)setServerInvalidationHandler:(id)arg1 ;
@end

