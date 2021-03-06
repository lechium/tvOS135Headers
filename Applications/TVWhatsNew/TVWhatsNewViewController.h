//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TVApplicationControllerDelegate-Protocol.h"
#import "TVWNViewServicePresenter-Protocol.h"

@class NSString, TVApplicationController, TVStoreApplicationSetupHelper;

@interface TVWhatsNewViewController : UIViewController <TVWNViewServicePresenter, TVApplicationControllerDelegate>
{
    TVApplicationController *_appController;	// 8 = 0x8
    TVStoreApplicationSetupHelper *_setupHelper;	// 16 = 0x10
    CDUnknownBlockType _messageReplyBlock;	// 24 = 0x18
}

+ (id)_remoteViewControllerInterface;	// IMP=0x0000000100003ec4
+ (id)_exportedInterface;	// IMP=0x0000000100003d8c
- (void).cxx_destruct;	// IMP=0x0000000100003f74
- (void)viewServiceHandleMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000037d0
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000374c
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x00000001000033dc
- (void)_executeRemoteMethod:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100003284
- (void)_markAsSeenAndDismiss;	// IMP=0x0000000100003204
- (void)_handleDismissNotification:(id)arg1;	// IMP=0x000000010000316c
- (void)_loadWithBootURL:(id)arg1;	// IMP=0x0000000100002fb8
- (void)appController:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000100002f28
- (void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;	// IMP=0x0000000100002df4
- (void)appController:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100002d6c
- (void)_presetLaunchErrorDialog;	// IMP=0x0000000100002b8c
- (void)_setupContentViewWithAppCntroller:(id)arg1;	// IMP=0x0000000100002a74
- (void)loadView;	// IMP=0x00000001000029e0
- (void)dealloc;	// IMP=0x0000000100002968
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010000264c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

