//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVPlayback/TVPVideoView.h>

@class UIView;

@interface HBTopShelfVideoView : TVPVideoView
{
    UIView *_snapshotView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100041018
- (void)_applicationDidSnapshotNotification:(id)arg1;	// IMP=0x0000000100040cec
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100040b28
- (void)dealloc;	// IMP=0x0000000100040a6c
- (void)__clearObjectMainThread;	// IMP=0x00000001000409cc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100040874

@end
