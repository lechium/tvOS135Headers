//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class XBDisplayEdgeInsetsWrapper;

@interface _XBWrapperWindow : UIWindow
{
    XBDisplayEdgeInsetsWrapper *_customSafeAreaInsets;	// 8 = 0x8
}

+ (_Bool)_isSecure;	// IMP=0x00000001000027dc
- (void).cxx_destruct;	// IMP=0x0000000100002808
@property(retain, nonatomic, getter=_customSafeAreaInsets, setter=_setCustomSafeAreaInsets:) XBDisplayEdgeInsetsWrapper *_customSafeAreaInsets; // @synthesize _customSafeAreaInsets;
- (long long)_orientationForRootTransform;	// IMP=0x00000001000027d4
- (long long)_orientationForViewTransform;	// IMP=0x00000001000027cc
- (_Bool)_shouldResizeWithScene;	// IMP=0x00000001000027c4
- (_Bool)_alwaysGetsContexts;	// IMP=0x00000001000027bc
- (_Bool)_isWindowServerHostingManaged;	// IMP=0x00000001000027b4
- (_Bool)_shouldUseRemoteContext;	// IMP=0x00000001000027ac

@end

