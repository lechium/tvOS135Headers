/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcuts/VCSyncDataHandler.h>

@class VCDaemonXPCEventHandler;

@interface VCIntentDefinitionSyncDataHandler : VCSyncDataHandler {

	VCDaemonXPCEventHandler* _eventHandler;

}

@property (nonatomic,readonly) VCDaemonXPCEventHandler * eventHandler;              //@synthesize eventHandler=_eventHandler - In the implementation block
+(int)messageType;
+(id)definitionDirectoryURL;
+(id)syncDirectoryURLForBundleIdentifier:(id)arg1 ;
-(void)dealloc;
-(VCDaemonXPCEventHandler *)eventHandler;
-(void)installedApplicationsDidChange:(id)arg1 ;
-(BOOL)applyChanges:(id)arg1 fromSyncService:(id)arg2 error:(id*)arg3 ;
-(BOOL)deleteSyncedData:(id*)arg1 ;
-(id)unsyncedChangesForSyncService:(id)arg1 metadata:(id*)arg2 error:(id*)arg3 ;
-(BOOL)markChangesAsSynced:(id)arg1 withSyncService:(id)arg2 metadata:(id)arg3 error:(id*)arg4 ;
-(BOOL)resetSyncStateForService:(id)arg1 error:(id*)arg2 ;
-(id)initWithEventHandler:(id)arg1 ;
@end

