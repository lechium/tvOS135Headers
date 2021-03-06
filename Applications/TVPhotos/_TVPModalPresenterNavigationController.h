//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "TVPModalPresenterFocusing-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSMapTable, NSString, UIView, UIViewController;
@protocol UIFocusEnvironment, UIFocusItemContainer;

@interface _TVPModalPresenterNavigationController : UINavigationController <UIGestureRecognizerDelegate, TVPModalPresenterFocusing>
{
    UIViewController *_rootViewController;	// 8 = 0x8
    NSMapTable *_pushCompletionBlocks;	// 16 = 0x10
    NSMapTable *_popCompletionBlocks;	// 24 = 0x18
    NSArray *_previousViewControllers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000088dc
@property(retain, nonatomic) NSArray *previousViewControllers; // @synthesize previousViewControllers=_previousViewControllers;
- (void)updatePreferredFocusedViewStateForFocus:(_Bool)arg1;	// IMP=0x0000000100008828
- (void)_dismissForLastViewController:(_Bool)arg1;	// IMP=0x0000000100008718
- (void)_dismissForLastViewController;	// IMP=0x0000000100008708
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100008544
- (void)reset;	// IMP=0x0000000100008470
- (id)popViewControllerAnimated:(_Bool)arg1;	// IMP=0x000000010000838c
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000082e8
- (void)popViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008220
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008188
- (id)initWithRootViewController:(id)arg1;	// IMP=0x0000000100008090

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end

