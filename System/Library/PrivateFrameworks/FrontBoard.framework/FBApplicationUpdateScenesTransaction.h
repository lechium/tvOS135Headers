/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBSynchronizedTransactionGroup.h>
#import <libobjc.A.dylib/FBApplicationProcessLaunchTransactionObserver.h>
#import <libobjc.A.dylib/FBUpdateSceneTransactionObserver.h>

@class RBSProcessIdentity, FBApplicationProcessLaunchTransaction, NSMutableArray, FBApplicationProcess, NSString;

@interface FBApplicationUpdateScenesTransaction : FBSynchronizedTransactionGroup <FBApplicationProcessLaunchTransactionObserver, FBUpdateSceneTransactionObserver> {

	RBSProcessIdentity* _identity;
	FBApplicationProcessLaunchTransaction* _processLaunchTransaction;
	BOOL _processLaunched;
	BOOL _waitsForSceneCommits;
	NSMutableArray* _updateSceneTransactions;
	NSMutableArray* _pendingUpdateSceneBlocks;

}

@property (nonatomic,readonly) FBApplicationProcess * process; 
@property (assign,nonatomic) BOOL waitsForSceneCommits;                     //@synthesize waitsForSceneCommits=_waitsForSceneCommits - In the implementation block
@property (nonatomic,readonly) NSString * bundleID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(NSString *)bundleID;
-(void)addObserver:(id)arg1 ;
-(BOOL)_canBeInterrupted;
-(BOOL)_shouldFailForChildTransaction:(id)arg1 ;
-(id)_customizedDescriptionProperties;
-(void)_willAddChildTransaction:(id)arg1 ;
-(void)_didRemoveChildTransaction:(id)arg1 ;
-(void)_willFailWithReason:(id)arg1 ;
-(void)_didComplete;
-(void)_willInterruptWithReason:(id)arg1 ;
-(FBApplicationProcess *)process;
-(id)initWithProcessIdentity:(id)arg1 executionContextProvider:(/*^block*/id)arg2 ;
-(void)_updateSceneWithIdentity:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3 ;
-(void)_executeSceneUpdatesIfAppropriate;
-(void)_performSynchronizedCommit:(id)arg1 ;
-(void)transaction:(id)arg1 willLaunchProcess:(id)arg2 ;
-(void)transaction:(id)arg1 didLaunchProcess:(id)arg2 ;
-(void)_noteWillCommitUpdateForScene:(id)arg1 ;
-(void)_noteDidCommitUpdateForScene:(id)arg1 ;
-(void)updateSceneTransactionDidCreateScene:(id)arg1 ;
-(void)updateSceneTransactionWillUpdateScene:(id)arg1 ;
-(void)updateSceneTransactionWillCommitUpdate:(id)arg1 ;
-(void)updateSceneTransactionDidCommitUpdate:(id)arg1 ;
-(id)initWithApplicationBundleID:(id)arg1 executionContextProvider:(/*^block*/id)arg2 ;
-(void)setWaitsForSceneCommits:(BOOL)arg1 ;
-(void)updateSceneWithIdentifier:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3 ;
-(void)updateSceneWithIdentity:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3 ;
-(BOOL)waitsForSceneCommits;
@end

