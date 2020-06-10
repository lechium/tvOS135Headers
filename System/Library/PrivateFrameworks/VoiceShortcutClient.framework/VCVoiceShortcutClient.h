/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/INVCVoiceShortcutClient.h>

@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, NSXPCConnection, NSString;

@interface VCVoiceShortcutClient : NSObject <INVCVoiceShortcutClient> {

	NSObject*<OS_dispatch_queue> _xpcQueue;
	NSObject*<OS_dispatch_queue> _internalStateQueue;
	NSHashTable* _errorHandlers;
	NSXPCConnection* _xpcConnection;
	/*^block*/id _creationBlock;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> xpcQueue;                        //@synthesize xpcQueue=_xpcQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalStateQueue;              //@synthesize internalStateQueue=_internalStateQueue - In the implementation block
@property (nonatomic,readonly) NSHashTable * errorHandlers;                                  //@synthesize errorHandlers=_errorHandlers - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,copy,readonly) id creationBlock;                                        //@synthesize creationBlock=_creationBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)standardClient;
-(void)dealloc;
-(id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithListenerEndpoint:(id)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)xpcQueue;
-(id)initWithXPCConnection:(id)arg1 ;
-(void)getVoiceShortcutsWithCompletion:(/*^block*/id)arg1 ;
-(void)getVoiceShortcutWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setShortcutSuggestions:(id)arg1 forAppWithBundleIdentifier:(id)arg2 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 inDomain:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)creationBlock;
-(NSObject*<OS_dispatch_queue>)internalStateQueue;
-(void)getSiriPodcastsDatabaseURLWithCompletion:(/*^block*/id)arg1 ;
-(void)getNumberOfVoiceShortcutsWithCompletion:(/*^block*/id)arg1 ;
-(void)getVoiceShortcutWithPhrase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getVoiceShortcutsForAppWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateVoiceShortcutWithIdentifier:(id)arg1 phrase:(id)arg2 shortcut:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)deleteVoiceShortcutWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)validateVoiceShortcutPhrases:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestSyncToWatchWithForceReset:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateShortcutsVocabularyWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)requestDataMigration:(id*)arg1 ;
-(void)getShortcutSuggestionsForAppWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getShortcutSuggestionsForAllAppsWithLimit:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)generateSingleUseTokenForWorkflowIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)refreshTriggerWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unregisterTriggerWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getConfiguredTriggerDescriptionsWithCompletion:(/*^block*/id)arg1 ;
-(void)fireTriggerWithIdentifier:(id)arg1 force:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)checkTriggerStateWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)checkTriggerStateWithKeyPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteTriggerWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)runShortcutWithName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)runShortcutWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)obliterateShortcuts:(/*^block*/id)arg1 ;
-(id)initWithXPCConnection:(id)arg1 XPCConnectionCreationBlock:(/*^block*/id)arg2 ;
-(id)initWithXPCConnectionCreationBlock:(/*^block*/id)arg1 ;
-(void)createVoiceShortcut:(id)arg1 phrase:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)shareSheetWorkflowsForExtensionMatchingDictionaries:(id)arg1 hostBundleIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)shareSheetWorkflowsForExtensionMatchingDictionaries:(id)arg1 resolvedActivityItems:(id)arg2 hostBundleIdentifier:(id)arg3 error:(id*)arg4 ;
-(void)generateSingleUseTokenForWorkflowReference:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)subscribeToVoiceShortcutDataUpdateNotifications;
-(void)unsubscribeFromVoiceShortcutDataUpdateNotifications;
-(BOOL)hasRunEventsInTheLast5DaysWithError:(id*)arg1 ;
-(id)asynchronousRemoteDataStoreWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteDataStoreWithErrorHandler:(/*^block*/id)arg1 ;
-(id)asynchronousRemoteDataStoreWithErrorHandler:(/*^block*/id)arg1 synchronous:(BOOL)arg2 ;
-(void)callErrorHandlerIfNeeded:(/*^block*/id)arg1 withError:(id)arg2 ;
-(id)unsafePopConnectionErrorHandlers;
-(void)handleXPCConnectionInterruption;
-(void)handleXPCConnectionInvalidation;
-(void)unsafeSetupXPCConnection;
-(NSHashTable *)errorHandlers;
@end

