/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, NSNumber;

@interface ASTEnvironment : NSObject {

	unsigned long long _environmentType;
	unsigned long long _server;
	NSURL* _serverURL;
	NSString* _SOCKSProxyServer;
	NSNumber* _SOCKSProxyPort;

}

@property (assign,nonatomic) unsigned long long environmentType;                              //@synthesize environmentType=_environmentType - In the implementation block
@property (assign,nonatomic) unsigned long long server;                                       //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) NSURL * serverURL;                                               //@synthesize serverURL=_serverURL - In the implementation block
@property (setter=OCKSProxyServer,nonatomic,retain) NSString * SOCKSProxyServer;              //@synthesize SOCKSProxyServer=_SOCKSProxyServer - In the implementation block
@property (setter=OCKSProxyPort,nonatomic,retain) NSNumber * SOCKSProxyPort;                  //@synthesize SOCKSProxyPort=_SOCKSProxyPort - In the implementation block
+(id)currentEnvironment;
+(BOOL)isInternalBuild;
+(id)environmentWithEnvironmentType:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)server;
-(void)setServer:(unsigned long long)arg1 ;
-(void)setEnvironmentType:(unsigned long long)arg1 ;
-(unsigned long long)environmentType;
-(NSURL *)serverURL;
-(id)_defaultServerURL;
-(NSString *)SOCKSProxyServer;
-(NSNumber *)SOCKSProxyPort;
-(id)initWithEnvironmentType:(unsigned long long)arg1 ;
-(unsigned long long)_defaultServerSelection;
-(id)_generateServerURL;
-(id)_environmentServerString;
-(void)setServerURL:(NSURL *)arg1 ;
-(void)setSOCKSProxyServer:(NSString *)arg1 ;
-(void)setSOCKSProxyPort:(NSNumber *)arg1 ;
@end

