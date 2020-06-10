/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <IDS/IDSDatagramChannel.h>

@class VCMockIDSDataChannelLinkContext, NSLock;

@interface VCMockIDSDatagramChannel : IDSDatagramChannel {

	VCMockIDSDataChannelLinkContext* _linkContext;
	/*^block*/id _eventHandler;
	/*^block*/id _readHandler;
	/*^block*/id _readHandlerWithOptions;
	/*^block*/id _writeDatagramsBlock;
	/*^block*/id _writeDatagramBlock;
	/*^block*/id _readyToReadBlock;
	NSLock* _blockSettingLock;
	VCSingleLinkedList* _datagramPackets;
	CFAllocatorRef _datagramPacketAllocator;
	unsigned long long _datagramPacketNextSequenceNumber;
	BOOL _usingOptions;
	double _emulatedRxPLR;

}
-(void)invalidate;
-(void)start;
-(void)setEventHandler:(/*^block*/id)arg1 ;
-(void)readDatagramWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)readDatagramsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)osChannelInfoLog;
-(void)setChannelPreferences:(id)arg1 ;
-(int)underlyingFileDescriptor;
-(void)writeDatagrams:(const void*)arg1 datagramsSize:(unsigned*)arg2 datagramsInfo:(SCD_Struct_VC70*)arg3 datagramsCount:(int)arg4 options:(/*function pointer*/void**)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)writeDatagram:(const void*)arg1 datagramSize:(unsigned)arg2 flags:(SCD_Struct_VC70)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)writeDatagram:(const void*)arg1 datagramSize:(unsigned)arg2 datagramInfo:(SCD_Struct_VC70)arg3 options:(SCD_Struct_VC72*)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setReadHandler:(/*^block*/id)arg1 ;
-(void)setReadHandlerWithOptions:(/*^block*/id)arg1 ;
-(int)readyToRead;
-(void)requestSessionInfoWithOptions:(id)arg1 ;
-(void)reportFirstPacketTimeForMKI:(id)arg1 ;
-(BOOL)enqueueDatagramPacket:(const void*)arg1 datagramSize:(unsigned)arg2 options:(SCD_Struct_VC72*)arg3 error:(id*)arg4 ;
-(void)dequeueDatagramPacket:(/*^block*/id)arg1 ;
-(void)readDatagram:(const void*)arg1 datagramSize:(unsigned)arg2 datagramOptions:(SCD_Struct_VC72*)arg3 ;
-(id)initRequiresOptions:(BOOL)arg1 ;
-(void)setWriteDatagramsBlock:(/*^block*/id)arg1 ;
-(void)setWriteDatagramBlock:(/*^block*/id)arg1 ;
-(void)setReadyToReadBlock:(/*^block*/id)arg1 ;
@end

