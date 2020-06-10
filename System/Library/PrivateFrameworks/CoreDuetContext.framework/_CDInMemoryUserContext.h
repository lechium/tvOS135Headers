/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CDUserContext.h>
#import <libobjc.A.dylib/_CDContextInternal.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSMutableArray, _CDInMemoryContext, NSString;

@interface _CDInMemoryUserContext : NSObject <_CDUserContext, _CDContextInternal> {

	NSObject*<OS_dispatch_queue> _syncQueue;
	NSMutableDictionary* _contexts;
	NSMutableArray* _pendingAllDeviceRegistrations;
	_CDInMemoryContext* _userContext;
	NSString* _localDeviceID;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                      //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * contexts;                              //@synthesize contexts=_contexts - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingAllDeviceRegistrations;              //@synthesize pendingAllDeviceRegistrations=_pendingAllDeviceRegistrations - In the implementation block
@property (nonatomic,retain) _CDInMemoryContext * userContext;                            //@synthesize userContext=_userContext - In the implementation block
@property (nonatomic,retain) NSString * localDeviceID;                                    //@synthesize localDeviceID=_localDeviceID - In the implementation block
+(id)userContext;
-(id)description;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(BOOL)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSMutableDictionary *)contexts;
-(id)localContext;
-(_CDInMemoryContext *)userContext;
-(void)registerCallback:(id)arg1 ;
-(void)deregisterCallback:(id)arg1 ;
-(id)allDevices;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(NSString *)localDeviceID;
-(void)setLocalDeviceID:(NSString *)arg1 ;
-(id)objectForContextualKeyPath:(id)arg1 ;
-(BOOL)setObject:(id)arg1 forContextualKeyPath:(id)arg2 ;
-(id)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3 valueDidChange:(BOOL*)arg4 ;
-(BOOL)hasKnowledgeOfContextualKeyPath:(id)arg1 ;
-(id)lastModifiedDateForContextualKeyPath:(id)arg1 ;
-(BOOL)evaluatePredicate:(id)arg1 ;
-(BOOL)addObjects:(id)arg1 toArrayAtKeyPath:(id)arg2 ;
-(BOOL)removeObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2 ;
-(BOOL)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3 ;
-(id)propertiesForContextualKeyPath:(id)arg1 ;
-(id)setObject:(id)arg1 returningMetadataForContextualKeyPath:(id)arg2 ;
-(void)setContextValue:(id)arg1 forContextualKeyPath:(id)arg2 ;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)contextForDeviceWithDeviceID:(id)arg1 ;
-(id)unsafe_contextForDeviceWithDeviceID:(id)arg1 ;
-(id)contextForKeyPath:(id)arg1 ;
-(id)unsafe_remoteDevices;
-(id)unsafe_remoteDeviceIDs;
-(id)unsafe_remoteUserContextProxySourceDeviceUUIDs;
-(id)unsafe_remoteDevicesForRemoteUserContextProxySourceDeviceUUID:(id)arg1 ;
-(id)unsafe_remoteDeviceIDsForRemoteUserContextProxySourceDeviceUUID:(id)arg1 ;
-(id)unsafe_remoteDevicesByDeviceIDForRemoteUserContextProxySourceDeviceUUID:(id)arg1 ;
-(id)unsafe_multiDeviceRegistrations;
-(id)namedDeviceIDsFromPredicate:(id)arg1 ;
-(id)allDeviceIDs;
-(id)deviceWithDeviceID:(id)arg1 fromDevices:(id)arg2 ;
-(BOOL)unsafe_hasMultiDeviceRegistrations;
-(id)unsafe_multiDeviceRegistrationsByDeviceID;
-(id)valuesForKeyPaths:(id)arg1 inContextsMatchingPredicate:(id)arg2 ;
-(id)valuesForKeyPaths:(id)arg1 ;
-(id)remoteDeviceIDs;
-(void)activateDevices:(id)arg1 remoteUserContextProxySourceDeviceUUID:(id)arg2 ;
-(void)deactivateDevices:(id)arg1 remoteUserContextProxySourceDeviceUUID:(id)arg2 ;
-(BOOL)hasMultiDeviceRegistrations;
-(void)setContexts:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)pendingAllDeviceRegistrations;
-(void)setPendingAllDeviceRegistrations:(NSMutableArray *)arg1 ;
-(void)setUserContext:(_CDInMemoryContext *)arg1 ;
@end

