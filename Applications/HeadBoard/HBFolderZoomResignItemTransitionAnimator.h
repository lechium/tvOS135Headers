//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class HBApp, HBFolderCell, NSString, UIView;

@interface HBFolderZoomResignItemTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _resignTransitionToLeft;	// 8 = 0x8
    HBFolderCell *_folderCell;	// 16 = 0x10
    HBApp *_transitioningApp;	// 24 = 0x18
    UIView *_transitioningView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100048308
@property(nonatomic) _Bool resignTransitionToLeft; // @synthesize resignTransitionToLeft=_resignTransitionToLeft;
@property(retain, nonatomic) UIView *transitioningView; // @synthesize transitioningView=_transitioningView;
@property(retain, nonatomic) HBApp *transitioningApp; // @synthesize transitioningApp=_transitioningApp;
@property(retain, nonatomic) HBFolderCell *folderCell; // @synthesize folderCell=_folderCell;
- (void)animateTransition:(id)arg1;	// IMP=0x0000000100047da4
- (double)transitionDuration:(id)arg1;	// IMP=0x0000000100047d9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

