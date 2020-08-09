//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IMAction, UINavigationController, UITabBarController, UIViewController;

@protocol IMActionControllerDelegate <NSObject>
- (void)presentViewController:(UIViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (UITabBarController *)tabBarController;
- (_Bool)isHorizontallyCompact;

@optional
- (UINavigationController *)rootNavigationController;
- (void)didPerformActionInSheet:(IMAction *)arg1;
@end

