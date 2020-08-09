//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "UITableViewDelegate-Protocol.h"

@class NSIndexPath, NSString, SATVFocusRedirectView, SATVTableView, UIView, UIViewController, UIVisualEffectView;

@interface SATVPreviewTableViewController : UITableViewController <UITableViewDelegate>
{
    UIVisualEffectView *_backdropView;	// 8 = 0x8
    UIView *_tableContainingView;	// 16 = 0x10
    SATVFocusRedirectView *_previewContainerView;	// 24 = 0x18
    NSIndexPath *_lastAutoUpdatePreviewIndexPath;	// 32 = 0x20
    double _lastAutoUpdatePreviewDelay;	// 40 = 0x28
    NSIndexPath *_pendingAutoUpdatePreviewIndexPath;	// 48 = 0x30
    long long _initializationStyle;	// 56 = 0x38
    _Bool _previewOnRightSide;	// 64 = 0x40
    _Bool _fadeThroughPreviews;	// 65 = 0x41
    UIViewController *_previewViewController;	// 72 = 0x48
    double _tableViewWidth;	// 80 = 0x50
    unsigned long long _backdropViewMode;	// 88 = 0x58
    UIView *_bannerView;	// 96 = 0x60
    UIView *_headerView;	// 104 = 0x68
    UIView *_previewView;	// 112 = 0x70
    CDUnknownBlockType _autoUpdatePreviewViewControllerBlock;	// 120 = 0x78
    struct UIEdgeInsets _tableViewPadding;	// 128 = 0x80
    struct UIEdgeInsets _previewViewPadding;	// 160 = 0xa0
}

+ (double)defaultSectionHeaderHeight;	// IMP=0x0000000100029c3c
+ (double)defaultRowHeight;	// IMP=0x0000000100029c30
- (void).cxx_destruct;	// IMP=0x0000000100029d58
@property(copy, nonatomic) CDUnknownBlockType autoUpdatePreviewViewControllerBlock; // @synthesize autoUpdatePreviewViewControllerBlock=_autoUpdatePreviewViewControllerBlock;
@property(nonatomic) _Bool fadeThroughPreviews; // @synthesize fadeThroughPreviews=_fadeThroughPreviews;
@property(retain, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic) unsigned long long backdropViewMode; // @synthesize backdropViewMode=_backdropViewMode;
@property(nonatomic) _Bool previewOnRightSide; // @synthesize previewOnRightSide=_previewOnRightSide;
@property(nonatomic) struct UIEdgeInsets previewViewPadding; // @synthesize previewViewPadding=_previewViewPadding;
@property(nonatomic) struct UIEdgeInsets tableViewPadding; // @synthesize tableViewPadding=_tableViewPadding;
@property(nonatomic) double tableViewWidth; // @synthesize tableViewWidth=_tableViewWidth;
@property(retain, nonatomic) UIViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
- (void)_setPreviewPaused:(_Bool)arg1;	// IMP=0x0000000100029bb4
- (struct CGRect)_frameForPreview;	// IMP=0x00000001000299a0
- (struct CGRect)_frameForTable;	// IMP=0x0000000100029834
- (struct CGRect)_frameForHeaderView;	// IMP=0x00000001000297ac
- (void)_updateBackdropViewBeforeSettingPreviewViewIfNessecary;	// IMP=0x0000000100029728
- (void)_updateBackdropViewAfterSettingPreviewViewIfNessecary;	// IMP=0x00000001000296c0
- (_Bool)_isBackdropViewVisible;	// IMP=0x0000000100029690
- (void)_unregisterForBackdropViewHideStateUpdates;	// IMP=0x0000000100029674
- (void)_registerForBackdropViewHideStateUpdates;	// IMP=0x0000000100029580
- (void)_delayedAutoUpdatePreviewViewController;	// IMP=0x000000010002943c
- (void)_cancelAutoUpdatingPreviewViewController;	// IMP=0x0000000100029408
- (void)_resetAutoUpdatePreviewViewControllerState;	// IMP=0x00000001000293b8
- (void)_cancelDelayedAutoUpdateOfPreviewViewController;	// IMP=0x0000000100029394
- (_Bool)_isAutoUpdatingPreviewViewController;	// IMP=0x0000000100029358
- (void)_removeBackdropView;	// IMP=0x000000010002931c
- (void)_addBackdropView;	// IMP=0x00000001000291fc
- (void)setBackdropViewHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000290f0
- (struct CGRect)adjustedFrameForPreviewFrame:(struct CGRect)arg1;	// IMP=0x0000000100028de0
- (void)_setPreviewView:(id)arg1 forced:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000289fc
- (void)setPreviewViewController:(id)arg1 forced:(_Bool)arg2;	// IMP=0x0000000100028748
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000100028604
- (void)_applicationDidFinishSuspension:(id)arg1;	// IMP=0x00000001000284d4
- (void)_applicationWillEnterForeground:(id)arg1;	// IMP=0x00000001000284c4
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000283f0
- (void)viewDidLayoutSubviews;	// IMP=0x000000010002804c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100027ef0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100027d7c
@property(retain, nonatomic) SATVTableView *tableView; // @dynamic tableView;
- (id)preferredFocusEnvironments;	// IMP=0x0000000100027c6c
- (void)loadView;	// IMP=0x00000001000279c8
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000100027920

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

