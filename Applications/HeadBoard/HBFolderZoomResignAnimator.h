//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class HBFolderCell, NSString;

@interface HBFolderZoomResignAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    HBFolderCell *_folderCell;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100047934
@property(retain, nonatomic) HBFolderCell *folderCell; // @synthesize folderCell=_folderCell;
- (void)animateTransition:(id)arg1;	// IMP=0x000000010004730c
- (double)transitionDuration:(id)arg1;	// IMP=0x0000000100047304

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

