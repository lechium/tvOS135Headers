/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface AVCRTCPPacket : NSObject {

	unsigned char _packetType;
	unsigned _SSRC;

}

@property (assign,nonatomic) unsigned char packetType;              //@synthesize packetType=_packetType - In the implementation block
@property (assign,setter=SRC,nonatomic) unsigned SSRC;              //@synthesize SSRC=_SSRC - In the implementation block
+(id)newPacketWithRTCPPacket:(tagRTCPPACKET*)arg1 ;
-(id)description;
-(id)initWithRTCPPacket:(tagRTCPPACKET*)arg1 ;
-(unsigned char)packetType;
-(unsigned)SSRC;
-(void)setPacketType:(unsigned char)arg1 ;
-(void)setSSRC:(unsigned)arg1 ;
@end

