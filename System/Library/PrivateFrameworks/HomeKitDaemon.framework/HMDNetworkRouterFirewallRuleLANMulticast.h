/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDNetworkRouterFirewallRuleLAN.h>

@class HMFNetAddress;

@interface HMDNetworkRouterFirewallRuleLANMulticast : HMDNetworkRouterFirewallRuleLAN {

	unsigned short _port;
	HMFNetAddress* _ipAddress;

}

@property (nonatomic,readonly) HMFNetAddress * ipAddress;              //@synthesize ipAddress=_ipAddress - In the implementation block
@property (nonatomic,readonly) unsigned short port;                    //@synthesize port=_port - In the implementation block
+(id)createWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(BOOL)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(BOOL)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(BOOL)arg7 ruleDictionary:(id)arg8 error:(id*)arg9 ;
-(unsigned short)port;
-(HMFNetAddress *)ipAddress;
-(id)attributeDescriptions;
-(id)prettyJSONDictionary;
-(id)initWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(BOOL)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(BOOL)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(BOOL)arg7 ipAddress:(id)arg8 port:(unsigned short)arg9 ;
@end
