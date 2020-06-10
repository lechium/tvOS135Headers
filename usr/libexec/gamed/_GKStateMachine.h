//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol _GKStateMachineDelegate;

@interface _GKStateMachine : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSString *_currentState;	// 16 = 0x10
    NSDictionary *_validTransitions;	// 24 = 0x18
    id <_GKStateMachineDelegate> _delegate;	// 32 = 0x20
    _Bool _shouldLogStateTransitions;	// 40 = 0x28
}

@property id <_GKStateMachineDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSDictionary *validTransitions; // @synthesize validTransitions=_validTransitions;
@property(nonatomic) _Bool shouldLogStateTransitions; // @synthesize shouldLogStateTransitions=_shouldLogStateTransitions;
- (void)_performTransitionFromState:(id)arg1 toState:(id)arg2;	// IMP=0x00000001000ffd08
- (id)_validateTransitionFromState:(id)arg1 toState:(id)arg2;	// IMP=0x00000001000ff860
- (id)missingTransitionFromState:(id)arg1 toState:(id)arg2;	// IMP=0x00000001000ff81c
- (_Bool)_setCurrentState:(id)arg1;	// IMP=0x00000001000ff5f0
@property(retain) NSString *currentState; // @synthesize currentState=_currentState;
- (_Bool)applyState:(id)arg1;	// IMP=0x00000001000ff5d8
- (void)dealloc;	// IMP=0x00000001000ff548
- (id)init;	// IMP=0x00000001000ff50c

@end
