//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SATVActivationViewController, SATVNavigationController;

@interface SATVActivationContainerViewController : UIViewController
{
    SATVActivationViewController *_activationController;	// 8 = 0x8
    CDUnknownBlockType _menuHandler;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
    SATVNavigationController *_navController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010008597c
@property(retain, nonatomic) SATVNavigationController *navController; // @synthesize navController=_navController;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType menuHandler; // @synthesize menuHandler=_menuHandler;
- (void)_sendStepCompletionNotificationWithSuccessInfo:(_Bool)arg1;	// IMP=0x00000001000857a8
@property(readonly, nonatomic, getter=_activationController) SATVActivationViewController *activationController; // @synthesize activationController=_activationController;
- (void)autoAdvance;	// IMP=0x00000001000852a8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100085214
- (void)viewDidLoad;	// IMP=0x00000001000850e8

@end
