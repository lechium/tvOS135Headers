/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDNetworkRouterFirewallRuleLAN.h>

@class HMFNetAddress, NSArray;

@interface HMDNetworkRouterFirewallRuleLANStatic : HMDNetworkRouterFirewallRuleLAN {

	unsigned char _transportProtocol;
	unsigned short _portStart;
	unsigned short _portEnd;
	HMFNetAddress* _ipAddress;
	NSArray* _icmpTypes;

}

@property (nonatomic,readonly) unsigned char transportProtocol;              //@synthesize transportProtocol=_transportProtocol - In the implementation block
@property (nonatomic,readonly) HMFNetAddress * ipAddress;                    //@synthesize ipAddress=_ipAddress - In the implementation block
@property (nonatomic,readonly) unsigned short portStart;                     //@synthesize portStart=_portStart - In the implementation block
@property (nonatomic,readonly) unsigned short portEnd;                       //@synthesize portEnd=_portEnd - In the implementation block
@property (nonatomic,readonly) NSArray * icmpTypes;                          //@synthesize icmpTypes=_icmpTypes - In the implementation block
+(id)createWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(BOOL)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(BOOL)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(BOOL)arg7 ruleDictionary:(id)arg8 error:(id*)arg9 ;
-(HMFNetAddress *)ipAddress;
-(id)attributeDescriptions;
-(unsigned char)transportProtocol;
-(id)prettyJSONDictionary;
-(NSArray *)icmpTypes;
-(unsigned short)portStart;
-(unsigned short)portEnd;
-(id)initWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(BOOL)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(BOOL)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(BOOL)arg7 transportProtocol:(unsigned char)arg8 ipAddress:(id)arg9 portStart:(unsigned short)arg10 portEnd:(unsigned short)arg11 icmpTypes:(id)arg12 ;
@end

