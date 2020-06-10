/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBWorkspaceServerDelegate.h>
#import <libobjc.A.dylib/FBSceneClientProvider.h>

@protocol FBWorkspaceDelegate, OS_dispatch_queue;
@class FBProcess, RBSProcessIdentity, RBSTarget, FBWorkspaceServer, NSMapTable, NSMutableSet, NSObject, FBSceneClientProviderInvalidationAction, RBSAssertion, BSAuditToken, NSString;

@interface FBWorkspace : NSObject <FBWorkspaceServerDelegate, FBSceneClientProvider> {

	id<FBWorkspaceDelegate> _weak_delegate;
	FBProcess* _weak_process;
	RBSProcessIdentity* _processIdentity;
	RBSTarget* _assertionTarget;
	FBWorkspaceServer* _server;
	NSMapTable* _hostToClientMap;
	NSMutableSet* _invalidatingScenes;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	FBSceneClientProviderInvalidationAction* _invalidationAction;
	RBSAssertion* _subordinateProcessAssertion;
	BOOL _invalidated;

}

@property (assign,nonatomic,__weak) id<FBWorkspaceDelegate> delegate; 
@property (nonatomic,__weak,readonly) FBProcess * process; 
@property (nonatomic,readonly) BSAuditToken * auditToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(id)_queue;
-(id<FBWorkspaceDelegate>)delegate;
-(void)setDelegate:(id<FBWorkspaceDelegate>)arg1 ;
-(id)_server;
-(BSAuditToken *)auditToken;
-(FBProcess *)process;
-(void)sendActions:(id)arg1 ;
-(void)registerInvalidationAction:(id)arg1 ;
-(id)registerHost:(id)arg1 withInitialParameters:(id)arg2 ;
-(void)unregisterHost:(id)arg1 ;
-(void)_invalidateSubordinateProcessAssertionIfNecessary;
-(void)_queue_fireInvalidationAction;
-(void)_acquireSubordinateProcessAssertionIfNecessary;
-(id)processForServer:(id)arg1 ;
-(id)injectionTargetForServer:(id)arg1 ;
-(void)server:(id)arg1 didReceiveSceneRequestWithOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)serverDidInvalidateConnection:(id)arg1 ;
-(id)initWithParentProcess:(id)arg1 queue:(id)arg2 callOutQueue:(id)arg3 ;
-(void)_queue_invalidateAllScenes;
-(void)_queue_enumerateScenes:(/*^block*/id)arg1 ;
-(void)_queue_sceneDidInvalidate:(id)arg1 ;
@end

