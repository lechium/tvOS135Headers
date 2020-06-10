/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VCSyncDataEndpoint.h>

@protocol OS_dispatch_queue, VCDatabaseProvider;
@class NSSet, NSObject, VCDaemonXPCEventHandler, NSMutableSet, NSString;

@interface VCDaemonSyncDataEndpoint : NSObject <VCSyncDataEndpoint> {

	NSObject*<OS_dispatch_queue> _queue;
	id<VCDatabaseProvider> _databaseProvider;
	VCDaemonXPCEventHandler* _eventHandler;
	NSMutableSet* _mutableSyncDataHandlers;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<VCDatabaseProvider> databaseProvider;              //@synthesize databaseProvider=_databaseProvider - In the implementation block
@property (nonatomic,readonly) VCDaemonXPCEventHandler * eventHandler;               //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,readonly) NSMutableSet * mutableSyncDataHandlers;               //@synthesize mutableSyncDataHandlers=_mutableSyncDataHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * syncDataHandlers; 
-(NSObject*<OS_dispatch_queue>)queue;
-(VCDaemonXPCEventHandler *)eventHandler;
-(id<VCDatabaseProvider>)databaseProvider;
-(NSSet *)syncDataHandlers;
-(id)initWithDatabaseProvider:(id)arg1 eventHandler:(id)arg2 ;
-(NSMutableSet *)mutableSyncDataHandlers;
@end

