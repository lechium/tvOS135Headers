//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class PBPIPContainerViewController;

@protocol PBPIPContainerViewControllerAnimationDelegate <NSObject>
- (void)containerViewController:(PBPIPContainerViewController *)arg1 performStopAnimationWithFinalLayerFrame:(struct CGRect)arg2 animationHandler:(void (^)(void))arg3 completionHandler:(void (^)(void))arg4;
- (void)containerViewController:(PBPIPContainerViewController *)arg1 prepareStopAnimationWithCompletionHandler:(void (^)(void))arg2;
- (void)containerViewController:(PBPIPContainerViewController *)arg1 performStartAnimationWithAnimationHandler:(void (^)(void))arg2 completionHandler:(void (^)(void))arg3;
- (void)containerViewController:(PBPIPContainerViewController *)arg1 prepareStartAnimationWithInitialLayerFrame:(struct CGRect)arg2 completionHandler:(void (^)(void))arg3;
@end

