/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEFilterFlow.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NWEndpoint, NSUUID;

@interface NEFilterSocketFlow : NEFilterFlow <NSSecureCoding, NSCopying> {

	long long _generateIdentifierOnce;
	int _socketFamily;
	int _socketType;
	int _socketProtocol;
	NWEndpoint* _remoteEndpoint;
	NWEndpoint* _localEndpoint;
	NSUUID* _uuid;
	NSUUID* _euuid;
	unsigned long long _socketID;
	NSUUID* _socketUUID;

}

@property (nonatomic,copy) NSUUID * uuid;                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSUUID * euuid;                   //@synthesize euuid=_euuid - In the implementation block
@property (copy) NWEndpoint * localEndpoint;                 //@synthesize localEndpoint=_localEndpoint - In the implementation block
@property (copy) NWEndpoint * remoteEndpoint;                //@synthesize remoteEndpoint=_remoteEndpoint - In the implementation block
@property (assign) int socketFamily;                         //@synthesize socketFamily=_socketFamily - In the implementation block
@property (assign) int socketType;                           //@synthesize socketType=_socketType - In the implementation block
@property (assign) int socketProtocol;                       //@synthesize socketProtocol=_socketProtocol - In the implementation block
@property (assign) unsigned long long socketID;              //@synthesize socketID=_socketID - In the implementation block
@property (readonly) NSUUID * socketUUID;                    //@synthesize socketUUID=_socketUUID - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)writeMessageWithControlSocket:(int)arg1 drop:(BOOL)arg2 socketID:(unsigned long long)arg3 inboundPassOffset:(unsigned long long)arg4 inboundPeekOffset:(unsigned long long)arg5 outboundPassOffset:(unsigned long long)arg6 outboundPeekOffset:(unsigned long long)arg7 statsReportFrequency:(long long)arg8 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(NWEndpoint *)localEndpoint;
-(void)setLocalEndpoint:(NWEndpoint *)arg1 ;
-(NWEndpoint *)remoteEndpoint;
-(void)setRemoteEndpoint:(NWEndpoint *)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)euuid;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)identifierString;
-(unsigned long long)socketID;
-(BOOL)createDataReply:(id)arg1 controlSocket:(int)arg2 direction:(long long)arg3 verdict:(id)arg4 context:(id)arg5 ;
-(BOOL)createNewFlowReply:(id)arg1 controlSocket:(int)arg2 verdict:(id)arg3 context:(id)arg4 ;
-(BOOL)createDataCompleteReply:(id)arg1 controlSocket:(int)arg2 direction:(long long)arg3 verdict:(id)arg4 context:(id)arg5 ;
-(id)initWithSocketFamily:(int)arg1 socketType:(int)arg2 socketProtocol:(int)arg3 pid:(int)arg4 epid:(int)arg5 uuid:(unsigned char)arg6 euuid:(unsigned char)arg7 socketID:(unsigned long long)arg8 ;
-(void)setLocalAddress:(sockaddr*)arg1 ;
-(void)setRemoteAddress:(sockaddr*)arg1 ;
-(int)socketProtocol;
-(void)setSocketID:(unsigned long long)arg1 ;
-(void)setEuuid:(NSUUID *)arg1 ;
-(void)setSocketFamily:(int)arg1 ;
-(void)setSocketType:(int)arg1 ;
-(void)setSocketProtocol:(int)arg1 ;
-(int)socketFamily;
-(int)socketType;
-(NSUUID *)socketUUID;
-(void)writeXPCMessage:(id)arg1 drop:(BOOL)arg2 inboundPassOffset:(unsigned long long)arg3 inboundPeekOffset:(unsigned long long)arg4 outboundPassOffset:(unsigned long long)arg5 outboundPeekOffset:(unsigned long long)arg6 statsReportFrequency:(long long)arg7 ;
-(void)writeCurrentVerdictWithMessage:(id)arg1 controlSocket:(int)arg2 ;
@end

