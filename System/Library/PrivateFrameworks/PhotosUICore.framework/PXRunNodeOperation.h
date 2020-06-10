/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class PXRunNode, NSLock;

@interface PXRunNodeOperation : NSOperation {

	unsigned long long _state;
	PXRunNode* _runNode;
	NSLock* __stateLock;

}

@property (nonatomic,readonly) NSLock * _stateLock;              //@synthesize _stateLock=__stateLock - In the implementation block
@property (nonatomic,readonly) PXRunNode * runNode;              //@synthesize runNode=_runNode - In the implementation block
@property (readonly) unsigned long long state;                   //@synthesize state=_state - In the implementation block
+(id)keyPathsForValuesAffectingIsFinished;
+(id)keyPathsForValuesAffectingIsReady;
+(id)keyPathsForValuesAffectingIsExecuting;
-(id)init;
-(unsigned long long)state;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isReady;
-(BOOL)isAsynchronous;
-(NSLock *)_stateLock;
-(BOOL)_transitionToState:(unsigned long long)arg1 ;
-(id)initWithRunNode:(id)arg1 ;
-(BOOL)cancelIfAble;
-(BOOL)completeIfAble;
-(PXRunNode *)runNode;
@end
