/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol RBClientInheritanceManagerDelegate;
@class NSMutableSet, NSString;

@interface RBClientInheritanceManager : NSObject <BSDescriptionProviding> {

	NSMutableSet* _inheritances;
	NSMutableSet* _queuedGainedInheritances;
	NSMutableSet* _queuedLostInheritances;
	BOOL _awaitingAck;
	os_unfair_lock_s _lock;
	id<RBClientInheritanceManagerDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<RBClientInheritanceManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(id<RBClientInheritanceManagerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(void)setInheritances:(id)arg1 ;
-(void)_lock_sendQueuedInheritances;
@end
