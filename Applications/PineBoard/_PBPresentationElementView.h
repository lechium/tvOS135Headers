//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface _PBPresentationElementView : UIView
{
    _Bool _containedInVisibleWindow;	// 8 = 0x8
}

@property(readonly, nonatomic, getter=isContainedInVisibleWindow) _Bool containedInVisibleWindow; // @synthesize containedInVisibleWindow=_containedInVisibleWindow;
- (void)_updateStateForWindow:(id)arg1;	// IMP=0x0000000100096200
- (void)_updateObserversForWindow:(id)arg1;	// IMP=0x0000000100095ff4
- (void)_windowDidBecomeHidden:(id)arg1;	// IMP=0x0000000100095f4c
- (void)_windowDidBecomeVisible:(id)arg1;	// IMP=0x0000000100095ea4
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000100095e18
- (void)didMoveToWindow;	// IMP=0x0000000100095d88
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100095cb4

@end
