//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, PBSceneLayoutViewController, UIViewController;
@protocol PBSceneLayoutElement;

@protocol PBSceneLayoutViewControllerDisplayPublisherDelegate <NSObject>
- (void)sceneLayoutViewController:(PBSceneLayoutViewController *)arg1 didEndTransitionForTransitionElement:(UIViewController<PBSceneLayoutElement> *)arg2 forReason:(NSString *)arg3;
- (void)sceneLayoutViewController:(PBSceneLayoutViewController *)arg1 didStartTransitionForTransitionElement:(UIViewController<PBSceneLayoutElement> *)arg2 forReason:(NSString *)arg3;
- (void)sceneLayoutViewController:(PBSceneLayoutViewController *)arg1 didRemoveTransitionElement:(UIViewController<PBSceneLayoutElement> *)arg2;
- (void)sceneLayoutViewController:(PBSceneLayoutViewController *)arg1 didAddTransitionElement:(UIViewController<PBSceneLayoutElement> *)arg2;
@end

