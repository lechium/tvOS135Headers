//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DAPlatformInterfaceInternal-Protocol.h"

@class NSString;

@interface DAPlatform_Embedded : NSObject <DAPlatformInterfaceInternal>
{
}

+ (id)sharedInstance;	// IMP=0x0000000100017788
- (void)_activateCFUserNotificationWithTitle:(id)arg1 message:(id)arg2 defaultButtonName:(id)arg3 cancelButtonName:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100017868
- (void)_addPlatformCFUserNotificationOptions:(id)arg1;	// IMP=0x0000000100017864
- (void)undimCheckerBoardDisplay;	// IMP=0x0000000100017860
- (void)dimCheckerBoardDisplay;	// IMP=0x000000010001785c
- (void)sceneStatusBarStyle:(long long)arg1;	// IMP=0x0000000100017858
- (void)hideSceneStatusBar;	// IMP=0x0000000100017854
- (void)showSceneStatusBar;	// IMP=0x0000000100017850
- (_Bool)didSetProxyServerInformation;	// IMP=0x0000000100017848
- (void)exitCheckerBoard;	// IMP=0x0000000100017844
- (void)activateSimpleAlertWithTitle:(id)arg1 message:(id)arg2 defaultButtonName:(id)arg3 cancelButtonName:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100017798
- (_Bool)isCheckerBoardActive;	// IMP=0x0000000100017790

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

