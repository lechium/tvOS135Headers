/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CBClassicPeer, NSInputStream, NSOutputStream, CBUUID;

@interface CBRFCOMMChannel : NSObject {

	int _socketFD;
	CBClassicPeer* _peer;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	CBUUID* _serviceUUID;

}

@property (nonatomic,readonly) int socketFD;                               //@synthesize socketFD=_socketFD - In the implementation block
@property (nonatomic,readonly) CBClassicPeer * peer;                       //@synthesize peer=_peer - In the implementation block
@property (nonatomic,readonly) NSInputStream * inputStream;                //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) NSOutputStream * outputStream;              //@synthesize outputStream=_outputStream - In the implementation block
@property (nonatomic,readonly) CBUUID * serviceUUID;                       //@synthesize serviceUUID=_serviceUUID - In the implementation block
-(NSInputStream *)inputStream;
-(NSOutputStream *)outputStream;
-(id)initWithPeer:(id)arg1 info:(id)arg2 ;
-(int)socketFD;
-(CBClassicPeer *)peer;
-(CBUUID *)serviceUUID;
@end
