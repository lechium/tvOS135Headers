//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, UIView;

@interface PREStackViewController : UIViewController
{
    NSArray *_viewControllers;	// 8 = 0x8
    UIView *_containerView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010000c958
@property(copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (void)didReceiveMemoryWarning;	// IMP=0x000000010000c8d0
- (void)viewDidLoad;	// IMP=0x000000010000c6d8
- (void)showViewController:(id)arg1 sender:(id)arg2;	// IMP=0x000000010000c604
- (void)replaceViewController:(id)arg1 withViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000010000c4bc
- (void)removeViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010000c3d8
- (void)popToViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010000c294
- (void)popToRootViewControllerAnimated:(_Bool)arg1;	// IMP=0x000000010000c1c0
- (void)popViewControllerAnimated:(_Bool)arg1;	// IMP=0x000000010000c09c
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000bf94
@property(readonly, nonatomic) UIViewController *visibleViewController;
@property(readonly, nonatomic) UIViewController *topViewController;
- (void)_setViewControllers:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000ab20
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010000aa9c
- (void)loadView;	// IMP=0x000000010000a934
- (id)initWithRootViewController:(id)arg1;	// IMP=0x000000010000a848
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010000a70c

@end
