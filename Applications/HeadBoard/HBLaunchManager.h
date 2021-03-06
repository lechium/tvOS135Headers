//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HBLaunchActionDelegate-Protocol.h"
#import "_UISceneComponentProviding-Protocol.h"

@class NSMapTable, NSString, UIScene;

@interface HBLaunchManager : NSObject <_UISceneComponentProviding, HBLaunchActionDelegate>
{
    UIScene *_scene;	// 8 = 0x8
    NSMapTable *_userInteractionDisabledAssertions;	// 16 = 0x10
}

+ (_Bool)_shouldPresentValidationError:(id)arg1 withNotificationOptions:(out id *)arg2;	// IMP=0x00000001000a4538
+ (_Bool)_presentUserNotificationWithOptions:(id)arg1;	// IMP=0x00000001000a44c4
+ (id)_launchOptionsForRequest:(id)arg1 time:(id)arg2;	// IMP=0x00000001000a4370
- (void).cxx_destruct;	// IMP=0x00000001000a47c4
@property(readonly, nonatomic) NSMapTable *userInteractionDisabledAssertions; // @synthesize userInteractionDisabledAssertions=_userInteractionDisabledAssertions;
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene; // @synthesize _scene;
- (id)_actionForRequest:(id)arg1;	// IMP=0x00000001000a4294
- (void)launchAction:(id)arg1 didExecuteWithRequest:(id)arg2;	// IMP=0x00000001000a4210
- (void)launchAction:(id)arg1 willExecuteWithRequest:(id)arg2;	// IMP=0x00000001000a414c
- (void)executeRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a3dfc
- (id)initWithScene:(id)arg1;	// IMP=0x00000001000a3d64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

