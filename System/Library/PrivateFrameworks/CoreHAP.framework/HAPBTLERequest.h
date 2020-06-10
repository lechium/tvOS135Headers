/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HAPBTLETransactionIdentifier, HAPService, HAPCharacteristic, NSData, HMFBlockOperation, HAPBTLEControlOutputStream, HMFTimer;

@interface HAPBTLERequest : HMFObject {

	unsigned char _type;
	BOOL _encrypted;
	BOOL _finished;
	HAPBTLETransactionIdentifier* _identifier;
	HAPService* _service;
	HAPCharacteristic* _characteristic;
	NSData* _body;
	double _timeoutInterval;
	HMFBlockOperation* _operation;
	HAPBTLEControlOutputStream* _controlOutputStream;
	HMFTimer* _responseTimer;

}

@property (nonatomic,readonly) HAPBTLETransactionIdentifier * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned char type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) HAPService * service;                                        //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) HAPCharacteristic * characteristic;                          //@synthesize characteristic=_characteristic - In the implementation block
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted;                           //@synthesize encrypted=_encrypted - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished;                             //@synthesize finished=_finished - In the implementation block
@property (nonatomic,copy,readonly) NSData * body;                                          //@synthesize body=_body - In the implementation block
@property (nonatomic,readonly) double timeoutInterval;                                      //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (assign,nonatomic,__weak) HMFBlockOperation * operation;                          //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) HAPBTLEControlOutputStream * controlOutputStream;              //@synthesize controlOutputStream=_controlOutputStream - In the implementation block
@property (nonatomic,retain) HMFTimer * responseTimer;                                      //@synthesize responseTimer=_responseTimer - In the implementation block
-(id)debugDescription;
-(id)description;
-(id)init;
-(unsigned char)type;
-(HAPBTLETransactionIdentifier *)identifier;
-(double)timeoutInterval;
-(HMFBlockOperation *)operation;
-(void)setOperation:(HMFBlockOperation *)arg1 ;
-(BOOL)isFinished;
-(HAPService *)service;
-(NSData *)body;
-(void)cancelWithError:(id)arg1 ;
-(BOOL)isEncrypted;
-(HAPCharacteristic *)characteristic;
-(id)shortDescription;
-(id)serialize;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(void)setResponseTimer:(HMFTimer *)arg1 ;
-(void)setControlOutputStream:(HAPBTLEControlOutputStream *)arg1 ;
-(HMFTimer *)responseTimer;
-(HAPBTLEControlOutputStream *)controlOutputStream;
-(id)initWithCharacteristic:(id)arg1 requestType:(unsigned char)arg2 bodyData:(id)arg3 shouldEncrypt:(BOOL)arg4 timeoutInterval:(double)arg5 ;
-(id)_serializeHeader;
@end

