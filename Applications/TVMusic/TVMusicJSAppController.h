//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVApplicationControllerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, NSURL, TVApplicationController;

@interface TVMusicJSAppController : NSObject <TVApplicationControllerDelegate, UIViewControllerTransitioningDelegate>
{
    NSURL *_applicationURL;	// 8 = 0x8
    TVApplicationController *_appController;	// 16 = 0x10
}

+ (id)_urlForBagKey:(id)arg1 bagSubkey:(id)arg2;	// IMP=0x000000010000a4b8
+ (id)_manageSubscriptionsURL;	// IMP=0x000000010000a394
+ (id)subscriptionsAppController;	// IMP=0x0000000100009a04
+ (void)initialize;	// IMP=0x00000001000099d0
- (void).cxx_destruct;	// IMP=0x000000010000a6c0
@property(retain, nonatomic) TVApplicationController *appController; // @synthesize appController=_appController;
@property(retain, nonatomic) NSURL *applicationURL; // @synthesize applicationURL=_applicationURL;
- (void)_closeApp;	// IMP=0x000000010000a33c
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x000000010000a228
- (void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;	// IMP=0x000000010000a180
- (void)appController:(id)arg1 didStopWithOptions:(id)arg2;	// IMP=0x000000010000a0a0
- (void)appController:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100009fc0
- (void)launchApplicationWithNavigationController:(id)arg1 launchOptions:(id)arg2;	// IMP=0x0000000100009ae0
- (id)initWithApplicationURL:(id)arg1;	// IMP=0x0000000100009a68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

