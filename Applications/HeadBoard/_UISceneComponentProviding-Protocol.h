//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, UIScene;

@protocol _UISceneComponentProviding <NSObject>
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene;
- (id)initWithScene:(UIScene *)arg1;

@optional
- (void)_sceneWillInvalidate:(UIScene *)arg1;
- (void)_scene:(UIScene *)arg1 didTransitionFromActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
- (void)_scene:(UIScene *)arg1 willTransitionToActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
- (NSArray *)_actionHandlersForScene:(UIScene *)arg1;
- (NSArray *)_settingsDiffActionsForScene:(UIScene *)arg1;
@end

