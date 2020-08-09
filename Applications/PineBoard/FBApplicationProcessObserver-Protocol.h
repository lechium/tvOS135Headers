//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBProcessObserver-Protocol.h"

@class FBApplicationProcess, FBProcessExitContext;

@protocol FBApplicationProcessObserver <FBProcessObserver>

@optional
- (void)applicationProcessDebuggingStateDidChange:(FBApplicationProcess *)arg1;
- (void)applicationProcessDidExit:(FBApplicationProcess *)arg1 withContext:(FBProcessExitContext *)arg2;
- (void)applicationProcessDidLaunch:(FBApplicationProcess *)arg1;
- (void)applicationProcessWillLaunch:(FBApplicationProcess *)arg1;
@end

