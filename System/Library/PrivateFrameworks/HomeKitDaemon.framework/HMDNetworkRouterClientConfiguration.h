/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMDTLVProtocol.h>

@class HMDTLVUnsignedNumberValue, HMDNetworkRouterCredential, HMDNetworkRouterWANFirewallConfiguration, HMDNetworkRouterLANFirewallConfiguration, NSString;

@interface HMDNetworkRouterClientConfiguration : NSObject <NSCopying, HMDTLVProtocol> {

	HMDTLVUnsignedNumberValue* _clientIdentifier;
	HMDTLVUnsignedNumberValue* _lanIdentifier;
	HMDNetworkRouterCredential* _credential;
	HMDNetworkRouterWANFirewallConfiguration* _wanFirewallConfiguration;
	HMDNetworkRouterLANFirewallConfiguration* _lanFirewallConfiguration;

}

@property (nonatomic,retain) HMDTLVUnsignedNumberValue * clientIdentifier;                                     //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) HMDTLVUnsignedNumberValue * lanIdentifier;                                        //@synthesize lanIdentifier=_lanIdentifier - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterCredential * credential;                                          //@synthesize credential=_credential - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterWANFirewallConfiguration * wanFirewallConfiguration;              //@synthesize wanFirewallConfiguration=_wanFirewallConfiguration - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterLANFirewallConfiguration * lanFirewallConfiguration;              //@synthesize lanFirewallConfiguration=_lanFirewallConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(HMDTLVUnsignedNumberValue *)clientIdentifier;
-(HMDNetworkRouterCredential *)credential;
-(void)setCredential:(HMDNetworkRouterCredential *)arg1 ;
-(void)setClientIdentifier:(HMDTLVUnsignedNumberValue *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setLanIdentifier:(HMDTLVUnsignedNumberValue *)arg1 ;
-(void)setWanFirewallConfiguration:(HMDNetworkRouterWANFirewallConfiguration *)arg1 ;
-(void)setLanFirewallConfiguration:(HMDNetworkRouterLANFirewallConfiguration *)arg1 ;
-(HMDTLVUnsignedNumberValue *)lanIdentifier;
-(HMDNetworkRouterWANFirewallConfiguration *)wanFirewallConfiguration;
-(HMDNetworkRouterLANFirewallConfiguration *)lanFirewallConfiguration;
-(id)initWithClientIdentifier:(id)arg1 lanIdentifier:(id)arg2 credential:(id)arg3 wanFirewallConfiguration:(id)arg4 lanFirewallConfiguration:(id)arg5 ;
@end

