//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HBRootCell.h"

#import "HBAppObserver-Protocol.h"

@class HBApp, NSString, UIView, _UIStackedImageContainerView;

@interface HBAppCell : HBRootCell <HBAppObserver>
{
    _UIStackedImageContainerView *_folderBackdropView;	// 8 = 0x8
    UIView *_cacheDeleteOverlay;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010004ccbc
@property(retain, nonatomic) UIView *cacheDeleteOverlay; // @synthesize cacheDeleteOverlay=_cacheDeleteOverlay;
@property(retain, nonatomic) _UIStackedImageContainerView *folderBackdropView; // @synthesize folderBackdropView=_folderBackdropView;
- (void)_updateCacheDeleteStyle;	// IMP=0x000000010004cb04
- (void)_updateAppAccessory;	// IMP=0x000000010004c8f4
- (void)_updateAppIcon;	// IMP=0x000000010004c848
- (id)_layerBelowFlash;	// IMP=0x000000010004c760
- (void)setDropState:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000010004bd9c
- (void)setDropState:(long long)arg1;	// IMP=0x000000010004bd8c
@property(readonly, nonatomic) HBApp *app;
- (void)setItem:(id)arg1 withIcon:(id)arg2;	// IMP=0x000000010004bc40
- (void)setItem:(id)arg1;	// IMP=0x000000010004bb34
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010004b9f8
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000010004b880
- (id)notificationObject:(id)arg1;	// IMP=0x000000010004b774
- (void)appStateDidChangeNotification:(id)arg1;	// IMP=0x000000010004b6e0
- (void)appCacheDeletingDidChangeNotification:(id)arg1;	// IMP=0x000000010004b64c
- (void)appIconDidChangeNotification:(id)arg1;	// IMP=0x000000010004b5b8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010004b48c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

