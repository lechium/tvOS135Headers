//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SUICProgressStateMachine;

@protocol SUICProgressStateMachineObserving <NSObject>
- (void)progressStateMachine:(SUICProgressStateMachine *)arg1 ignoredEvent:(unsigned long long)arg2;
- (void)progressStateMachine:(SUICProgressStateMachine *)arg1 didTransitionToState:(unsigned long long)arg2 fromState:(unsigned long long)arg3 forEvent:(unsigned long long)arg4;
@end

