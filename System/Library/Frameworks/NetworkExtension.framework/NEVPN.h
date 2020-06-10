/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NEConfigurationLegacySupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NEVPNProtocol;

@interface NEVPN : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	BOOL _enabled;
	BOOL _onDemandEnabled;
	BOOL _disconnectOnDemandEnabled;
	NSArray* _onDemandRules;
	NEVPNProtocol* _protocol;
	long long _tunnelType;
	NSArray* _exceptionApps;

}

@property (copy) NSArray * exceptionApps;                                                                    //@synthesize exceptionApps=_exceptionApps - In the implementation block
@property (getter=isEnabled) BOOL enabled;                                                                   //@synthesize enabled=_enabled - In the implementation block
@property (getter=isOnDemandEnabled) BOOL onDemandEnabled;                                                   //@synthesize onDemandEnabled=_onDemandEnabled - In the implementation block
@property (assign,getter=isDisconnectOnDemandEnabled,nonatomic) BOOL disconnectOnDemandEnabled;              //@synthesize disconnectOnDemandEnabled=_disconnectOnDemandEnabled - In the implementation block
@property (copy) NSArray * onDemandRules;                                                                    //@synthesize onDemandRules=_onDemandRules - In the implementation block
@property (copy) NEVPNProtocol * protocol;                                                                   //@synthesize protocol=_protocol - In the implementation block
@property (assign) long long tunnelType;                                                                     //@synthesize tunnelType=_tunnelType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NEVPNProtocol *)protocol;
-(void)setProtocol:(NEVPNProtocol *)arg1 ;
-(BOOL)isEnabled;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(long long)tunnelType;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(void)setTunnelType:(long long)arg1 ;
-(NSArray *)onDemandRules;
-(void)setOnDemandRules:(NSArray *)arg1 ;
-(void)setOnDemandEnabled:(BOOL)arg1 ;
-(void)setDisconnectOnDemandEnabled:(BOOL)arg1 ;
-(BOOL)isDisconnectOnDemandEnabled;
-(BOOL)isOnDemandEnabled;
-(NSArray *)exceptionApps;
-(void)setExceptionApps:(NSArray *)arg1 ;
@end

