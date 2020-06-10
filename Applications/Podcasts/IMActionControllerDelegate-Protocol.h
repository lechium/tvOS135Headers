//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
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

