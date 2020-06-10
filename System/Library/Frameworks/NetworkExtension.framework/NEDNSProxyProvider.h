/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEProvider.h>

@class NSArray;

@interface NEDNSProxyProvider : NEProvider {

	NSArray* _systemDNSSettings;

}

@property (retain) NSArray * systemDNSSettings;              //@synthesize systemDNSSettings=_systemDNSSettings - In the implementation block
-(BOOL)handleNewFlow:(id)arg1 ;
-(void)startProxyWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopProxyWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelProxyWithError:(id)arg1 ;
-(BOOL)handleNewUDPFlow:(id)arg1 initialRemoteEndpoint:(id)arg2 ;
-(NSArray *)systemDNSSettings;
-(void)setSystemDNSSettings:(NSArray *)arg1 ;
@end

