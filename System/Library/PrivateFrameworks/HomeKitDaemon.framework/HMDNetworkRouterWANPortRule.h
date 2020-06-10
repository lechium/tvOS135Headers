/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/HMDNetworkRouterWANRule.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMDTLVProtocol.h>

@class HMDNetworkRouterProtocol, NSString, HMDNetworkRouterIPAddress, HMDTLVUnsignedNumberValue;

@interface HMDNetworkRouterWANPortRule : NSObject <HMDNetworkRouterWANRule, NSCopying, HMDTLVProtocol> {

	HMDNetworkRouterProtocol* _protocol;
	NSString* _hostDNSName;
	HMDNetworkRouterIPAddress* _hostIPStart;
	HMDNetworkRouterIPAddress* _hostIPEnd;
	HMDTLVUnsignedNumberValue* _hostPortStart;
	HMDTLVUnsignedNumberValue* _hostPortEnd;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HMDNetworkRouterProtocol * protocol;                    //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,retain) NSString * hostDNSName;                                 //@synthesize hostDNSName=_hostDNSName - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterIPAddress * hostIPStart;                //@synthesize hostIPStart=_hostIPStart - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterIPAddress * hostIPEnd;                  //@synthesize hostIPEnd=_hostIPEnd - In the implementation block
@property (nonatomic,retain) HMDTLVUnsignedNumberValue * hostPortStart;              //@synthesize hostPortStart=_hostPortStart - In the implementation block
@property (nonatomic,retain) HMDTLVUnsignedNumberValue * hostPortEnd;                //@synthesize hostPortEnd=_hostPortEnd - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(HMDNetworkRouterProtocol *)protocol;
-(void)setProtocol:(HMDNetworkRouterProtocol *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithProtocol:(id)arg1 hostDNSName:(id)arg2 hostIPStart:(id)arg3 hostIPEnd:(id)arg4 hostPortStart:(id)arg5 hostPortEnd:(id)arg6 ;
-(void)addTo:(id)arg1 ;
-(void)setHostDNSName:(NSString *)arg1 ;
-(void)setHostIPStart:(HMDNetworkRouterIPAddress *)arg1 ;
-(void)setHostIPEnd:(HMDNetworkRouterIPAddress *)arg1 ;
-(NSString *)hostDNSName;
-(HMDNetworkRouterIPAddress *)hostIPStart;
-(HMDNetworkRouterIPAddress *)hostIPEnd;
-(void)setHostPortStart:(HMDTLVUnsignedNumberValue *)arg1 ;
-(void)setHostPortEnd:(HMDTLVUnsignedNumberValue *)arg1 ;
-(HMDTLVUnsignedNumberValue *)hostPortStart;
-(HMDTLVUnsignedNumberValue *)hostPortEnd;
@end

