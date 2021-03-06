/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NEPrettyDescription.h>

@class NEConfiguration, NEConfigurationManager, NSString, NEDNSProxyProviderProtocol;

@interface NEDNSProxyManager : NSObject <NEPrettyDescription> {

	BOOL _hasLoaded;
	NEConfiguration* _configuration;
	NEConfigurationManager* _configurationManager;

}

@property (assign) BOOL hasLoaded;                                               //@synthesize hasLoaded=_hasLoaded - In the implementation block
@property (retain) NEConfiguration * configuration;                              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) NEConfigurationManager * configurationManager;              //@synthesize configurationManager=_configurationManager - In the implementation block
@property (copy) NSString * localizedDescription; 
@property (retain) NEDNSProxyProviderProtocol * providerProtocol; 
@property (getter=isEnabled) BOOL enabled; 
+(id)sharedManager;
-(id)description;
-(id)init;
-(NSString *)localizedDescription;
-(void)setEnabled:(BOOL)arg1 ;
-(NEConfiguration *)configuration;
-(void)setConfiguration:(NEConfiguration *)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setHasLoaded:(BOOL)arg1 ;
-(void)loadFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(NEConfigurationManager *)configurationManager;
-(void)createEmptyConfiguration;
-(id)initDNSProxyManagerWithPluginType:(id)arg1 ;
-(BOOL)hasLoaded;
-(NEDNSProxyProviderProtocol *)providerProtocol;
-(void)removeFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveToPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setProviderProtocol:(NEDNSProxyProviderProtocol *)arg1 ;
@end

