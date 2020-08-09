//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol DAPlatformInterface <NSObject>
- (void)activateSimpleAlertWithTitle:(NSString *)arg1 message:(NSString *)arg2 defaultButtonName:(NSString *)arg3 cancelButtonName:(NSString *)arg4 handler:(void (^)(void))arg5;
- (void)undimCheckerBoardDisplay;
- (void)dimCheckerBoardDisplay;
- (void)sceneStatusBarStyle:(long long)arg1;
- (void)hideSceneStatusBar;
- (void)showSceneStatusBar;
- (_Bool)didSetProxyServerInformation;
- (void)exitCheckerBoard;
- (_Bool)isCheckerBoardActive;
@end

