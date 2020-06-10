/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface GKMatchPacket : NSObject {

	unsigned char _version;
	unsigned char _packetType;
	unsigned _sequenceNumber;
	unsigned _totalLength;
	unsigned short _checksum;
	BOOL _valid;
	NSData* _data;

}

@property (assign,nonatomic) unsigned char version;                 //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned char packetType;              //@synthesize packetType=_packetType - In the implementation block
@property (assign,nonatomic) unsigned sequenceNumber;               //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) unsigned totalLength;                  //@synthesize totalLength=_totalLength - In the implementation block
@property (assign,nonatomic) unsigned short checksum;               //@synthesize checksum=_checksum - In the implementation block
@property (assign,nonatomic) BOOL valid;                            //@synthesize valid=_valid - In the implementation block
@property (nonatomic,retain) NSData * data;                         //@synthesize data=_data - In the implementation block
-(id)init;
-(void)dealloc;
-(NSData *)data;
-(unsigned char)version;
-(void)setData:(NSData *)arg1 ;
-(void)setVersion:(unsigned char)arg1 ;
-(unsigned)sequenceNumber;
-(id)message;
-(id)initWithMessage:(id)arg1 ;
-(BOOL)valid;
-(void)setValid:(BOOL)arg1 ;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(unsigned short)checksum;
-(void)setChecksum:(unsigned short)arg1 ;
-(void)setTotalLength:(unsigned)arg1 ;
-(unsigned)totalLength;
-(unsigned char)packetType;
-(void)setPacketType:(unsigned char)arg1 ;
@end

