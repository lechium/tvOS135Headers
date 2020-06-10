/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IDSFoundation/IDSFoundation-Structs.h>
@class NSData, NSString;

@interface IDSStunMessage : NSObject {

	long long _type;
	unsigned short _len;
	NSData* _transactionID;
	NSString* _requestID;
	IDSStunAttribute _attributes[20];
	int _numAttribute;
	NSData* _key;
	CCCryptorRef _cryptorRef;
	BOOL _requiresAES128CTR;
	double _startTime;

}

@property (nonatomic,readonly) long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSData * transactionID;              //@synthesize transactionID=_transactionID - In the implementation block
@property (nonatomic,readonly) NSString * requestID;                //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy) NSData * key;                            //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double startTime;                      //@synthesize startTime=_startTime - In the implementation block
-(id)description;
-(void)dealloc;
-(NSData *)key;
-(long long)type;
-(double)startTime;
-(id)initWithType:(long long)arg1 ;
-(void)setKey:(NSData *)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)setAttributes:(id)arg1 ;
-(void)setTransactionID:(NSData *)arg1 ;
-(NSData *)transactionID;
-(NSString *)requestID;
-(BOOL)addAttribute:(IDSStunAttribute*)arg1 ;
-(BOOL)hasAttribute:(unsigned short)arg1 ;
-(BOOL)getAttribute:(long long)arg1 attribute:(IDSStunAttribute*)arg2 ;
-(BOOL)read:(char*)arg1 inputLength:(unsigned long long)arg2 internal:(BOOL)arg3 ;
-(BOOL)verifyMessageIntegrityWithKey:(id)arg1 inputBuffer:(char*)arg2 inputLength:(int)arg3 ;
-(BOOL)decryptAES128CTRStunAttributes:(id)arg1 ;
-(BOOL)write:(char*)arg1 outputLength:(int*)arg2 remainingLength:(unsigned long long)arg3 internal:(BOOL)arg4 ;
-(BOOL)initAES128CTR:(id)arg1 ;
-(void)setTransactionID:(id)arg1 attributes:(id)arg2 ;
-(BOOL)read:(char*)arg1 inputLength:(unsigned long long)arg2 ;
-(void)_addUInt16Attribute:(long long)arg1 value:(unsigned short)arg2 ;
-(void)_addBinaryDataAttribute:(long long)arg1 value:(id)arg2 ;
-(void)_addUInt32Attribute:(long long)arg1 value:(unsigned)arg2 ;
-(void)_addUInt64Attribute:(long long)arg1 value:(unsigned long long)arg2 ;
-(BOOL)write:(char*)arg1 outputLength:(int*)arg2 remainingLength:(unsigned long long)arg3 ;
-(void)_addUUIDAttribute:(long long)arg1 value:(id)arg2 ;
-(void)_addXORAddressAttribute:(long long)arg1 value:(sockaddr*)arg2 ;
-(void)_addUInt8Attribute:(long long)arg1 value:(unsigned char)arg2 ;
-(BOOL)stunRequestToBuffer:(char*)arg1 outputLength:(int*)arg2 transactionID:(char*)arg3 reqCount:(int)arg4 userName:(char*)arg5 usernameLen:(int)arg6 sendTime:(unsigned short)arg7 keyData:(id)arg8 remainingLength:(unsigned long long)arg9 ;
-(BOOL)stunResponseToBuffer:(char*)arg1 outputLength:(int*)arg2 transactionID:(id)arg3 reqCount:(int)arg4 echoTime:(unsigned short)arg5 delay:(unsigned short)arg6 keyData:(id)arg7 remainingLength:(unsigned long long)arg8 ;
-(BOOL)dataIndicationToBuffer:(char*)arg1 outputLength:(int*)arg2 data:(char*)arg3 dataLen:(int)arg4 keyData:(id)arg5 remainingLength:(unsigned long long)arg6 ;
@end

