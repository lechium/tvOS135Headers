//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBScene, PBSceneManager;

@protocol PBSceneManagerObserver <NSObject>

@optional
- (void)sceneManager:(PBSceneManager *)arg1 defaultKioskScene:(FBScene *)arg2 didUpdateAppGridHidden:(_Bool)arg3;
- (void)sceneManager:(PBSceneManager *)arg1 didChangeHiliteStateForScene:(FBScene *)arg2;
- (void)sceneManager:(PBSceneManager *)arg1 didChangeIdleTimerStateForScene:(FBScene *)arg2;
- (void)sceneManager:(PBSceneManager *)arg1 didChangeFocusFromScene:(FBScene *)arg2 toScene:(FBScene *)arg3;
@end
