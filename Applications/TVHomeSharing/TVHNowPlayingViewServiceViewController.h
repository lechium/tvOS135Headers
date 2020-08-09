//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PBSViewServicePresenter-Protocol.h"

@class NSString, TVPPlayer, UINavigationController, UITapGestureRecognizer, UIView;

@interface TVHNowPlayingViewServiceViewController : UIViewController <PBSViewServicePresenter>
{
    UINavigationController *_navigationController;	// 8 = 0x8
    UITapGestureRecognizer *_menuGestureRecognizer;	// 16 = 0x10
    TVPPlayer *_player;	// 24 = 0x18
    UIView *_nowPlayingWallPaper;	// 32 = 0x20
}

+ (id)_remoteViewControllerInterface;	// IMP=0x000000010002716c
+ (id)_exportedInterface;	// IMP=0x000000010002706c
- (void).cxx_destruct;	// IMP=0x0000000100027224
@property(retain, nonatomic) UIView *nowPlayingWallPaper; // @synthesize nowPlayingWallPaper=_nowPlayingWallPaper;
@property(retain, nonatomic) TVPPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) UITapGestureRecognizer *menuGestureRecognizer; // @synthesize menuGestureRecognizer=_menuGestureRecognizer;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void)_menuPressed:(id)arg1;	// IMP=0x0000000100027188
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100026f64
- (void)_dismissRemoteViewController;	// IMP=0x0000000100026edc
- (void)_playerDidChangeState:(id)arg1;	// IMP=0x0000000100026d88
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100026ae4
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x000000010002666c
- (void)dealloc;	// IMP=0x00000001000265d0
- (void)viewDidLoad;	// IMP=0x000000010002642c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010002633c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

