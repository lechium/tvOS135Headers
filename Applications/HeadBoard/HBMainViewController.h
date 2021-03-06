//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HBAppGridViewControllerDelegate-Protocol.h"
#import "HBUILaunchAnimationEnvironment-Protocol.h"
#import "HBUITopShelfContentViewControllerDelegate-Protocol.h"

@class HBAppGridViewController, HBRootFolderController, HBRootItem, HBTopShelfManager, HBUITopShelfHostViewController, NSString;
@protocol HBUITopShelfContentViewController;

@interface HBMainViewController : UIViewController <HBAppGridViewControllerDelegate, HBUITopShelfContentViewControllerDelegate, HBUILaunchAnimationEnvironment>
{
    _Bool _resignFocus;	// 8 = 0x8
    HBAppGridViewController *_gridViewController;	// 16 = 0x10
    HBRootFolderController *_rootFolderController;	// 24 = 0x18
    HBUITopShelfHostViewController *_topShelfViewController;	// 32 = 0x20
    HBTopShelfManager *_topShelfManager;	// 40 = 0x28
    HBRootItem *_currentTopShelfItem;	// 48 = 0x30
    CDUnknownBlockType _topShelfDelayCallback;	// 56 = 0x38
    CDUnknownBlockType _topShelfDecelerationCompleteCallback;	// 64 = 0x40
    UIViewController<HBUITopShelfContentViewController> *_currentTopShelfItemViewController;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000001000aa890
@property(retain, nonatomic) UIViewController<HBUITopShelfContentViewController> *currentTopShelfItemViewController; // @synthesize currentTopShelfItemViewController=_currentTopShelfItemViewController;
@property(copy, nonatomic) CDUnknownBlockType topShelfDecelerationCompleteCallback; // @synthesize topShelfDecelerationCompleteCallback=_topShelfDecelerationCompleteCallback;
@property(copy, nonatomic) CDUnknownBlockType topShelfDelayCallback; // @synthesize topShelfDelayCallback=_topShelfDelayCallback;
@property(retain, nonatomic) HBRootItem *currentTopShelfItem; // @synthesize currentTopShelfItem=_currentTopShelfItem;
@property(retain, nonatomic) HBTopShelfManager *topShelfManager; // @synthesize topShelfManager=_topShelfManager;
@property(readonly, nonatomic) HBUITopShelfHostViewController *topShelfViewController; // @synthesize topShelfViewController=_topShelfViewController;
@property(readonly, nonatomic, getter=_rootFolderController) HBRootFolderController *rootFolderController; // @synthesize rootFolderController=_rootFolderController;
@property(readonly, nonatomic) HBAppGridViewController *gridViewController; // @synthesize gridViewController=_gridViewController;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000001000aa6e0
- (id)nextLaunchAnimationEnvironments;	// IMP=0x00000001000aa5d4
- (void)topShelfContentViewController:(id)arg1 willScrollToFirstItem:(_Bool)arg2;	// IMP=0x00000001000aa530
- (void)topShelfContentViewController:(id)arg1 contentStyleDidChange:(unsigned long long)arg2;	// IMP=0x00000001000aa4e0
- (void)_handleTopShelfDecelerationCallback;	// IMP=0x00000001000aa450
- (void)_purgeAssetCache;	// IMP=0x00000001000aa3f0
- (void)_handleTVTapEvent:(id)arg1;	// IMP=0x00000001000aa350
- (void)_menuGesture:(id)arg1;	// IMP=0x00000001000aa13c
- (void)_resignFocusForIdleScreen;	// IMP=0x00000001000aa0c0
- (void)_becomeFocusedFromIdleScreen;	// IMP=0x00000001000a9ff8
- (void)gridViewControllerItemsBecameReady:(id)arg1;	// IMP=0x00000001000a9cb8
- (void)gridViewControllerDidScrollCloseEnoughToTop:(id)arg1;	// IMP=0x00000001000a9c78
- (void)gridViewControllerDidEndDecelerating:(id)arg1;	// IMP=0x00000001000a9c6c
- (void)gridViewController:(id)arg1 itemMovedOutOfDock:(id)arg2 replacedWithItem:(id)arg3;	// IMP=0x00000001000a9bdc
- (void)gridViewController:(id)arg1 itemMovedIntoDock:(id)arg2;	// IMP=0x00000001000a9b7c
- (void)appGridViewController:(id)arg1 didUpdateFocusInContext:(CDStruct_334d6f95)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000001000a9a94
- (void)applicationDidBecomeActiveNotification:(id)arg1;	// IMP=0x00000001000a9a88
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x00000001000a9894
- (void)_updateTopShelfWithItem:(id)arg1 inDirection:(long long)arg2;	// IMP=0x00000001000a93d8
- (void)_delayedTopShelfChange;	// IMP=0x00000001000a9348
- (void)prepareForTransitionWithType:(long long)arg1 animationDuration:(double)arg2 delay:(double)arg3;	// IMP=0x00000001000a91d8
- (id)preferredFocusEnvironments;	// IMP=0x00000001000a90d0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000a8f88
- (void)viewDidLoad;	// IMP=0x00000001000a8b00
- (void)loadView;	// IMP=0x00000001000a8a6c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000a8960

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

