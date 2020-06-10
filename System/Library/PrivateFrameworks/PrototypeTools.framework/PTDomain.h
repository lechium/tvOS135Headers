/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PTDomainClient.h>

@class NSXPCConnection, PTDomainInfo, NSString, PTSettings, NSMutableDictionary, PTTestRecipe;

@interface PTDomain : NSObject <PTDomainClient> {

	NSXPCConnection* _serverConnection;
	PTDomainInfo* _domainInfo;
	NSString* _domainID;
	PTSettings* _rootSettings;
	NSMutableDictionary* _testRecipesByIdentifier;
	PTTestRecipe* _activeTestRecipe;
	BOOL _registrationRequested;
	BOOL _registrationCompleted;
	BOOL _haveSentProxyDefinition;
	double _delayBeforeRegisteringAfterInterruption;
	BOOL _archiveIsApplied;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)domainName;
+(id)_sharedInstance;
+(Class)rootSettingsClass;
+(id)rootSettings;
+(void)registerTestRecipe:(id)arg1 ;
+(id)domainGroupName;
-(void)dealloc;
-(id)_init;
-(id)_rootSettings;
-(void)_registerTestRecipe:(id)arg1 ;
-(void)_updateServerConnectionStatusIfNecessary;
-(void)_disableObservationIfNecessary;
-(void)_sendProxyDefinitionIfNecessary;
-(void)_updateActiveTestRecipe;
-(void)_applyArchive:(id)arg1 ;
-(void)_noteRegistrationCompleted;
-(void)_restoreDefaultSettings;
-(void)_applyArchiveValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)_createConnection;
-(void)_registerWithServerIfNecessary;
-(void)_tearDownConnection;
-(void)_handleConnectionInterrupted;
-(void)_handleConnectionInvalidated;
-(void)updateSettingsFromArchive:(id)arg1 ;
-(void)restoreDefaultSettings;
-(void)setArchiveValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)invokeOutletAtKeyPath:(id)arg1 ;
-(void)sendActiveTestRecipeEvent:(long long)arg1 ;
@end

