//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "MTRootPoppable-Protocol.h"

@class NSString;

@interface UINavigationController (MTAdditions) <MTRootPoppable>
- (void)mt_hideNavigationBarOnFirstScreen;	// IMP=0x00000001000fc1f8
- (void)mt_popToRootViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fc10c
- (void)mt_popToRootViewControllerAnimated:(_Bool)arg1;	// IMP=0x00000001000fc0ec
- (void)mt_popToRootViewController;	// IMP=0x00000001000fc0c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

