//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIApplication.h>

#import "UIApplicationDelegate-Protocol.h"

@class NSString, UIWindow;

@interface Application : UIApplication <UIApplicationDelegate>
{
}

- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;	// IMP=0x0000000100005c78
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000100005c30
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x0000000100005be8
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x0000000100005ba0
- (void)applicationDidFinishLaunching:(id)arg1;	// IMP=0x0000000100005b1c
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x0000000100005b18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

