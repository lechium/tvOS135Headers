//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HBTopShelfBannerViewController.h"

#import "HBTopShelfItemInteracting-Protocol.h"

@class HBTopShelfBannerModel, NSString;
@protocol HBTopShelfItemInteractingDelegate;

@interface HBTopShelfBannerModelViewController : HBTopShelfBannerViewController <HBTopShelfItemInteracting>
{
    id <HBTopShelfItemInteractingDelegate> _interactionDelegate;	// 8 = 0x8
    HBTopShelfBannerModel *_model;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100032b80
@property(retain, nonatomic) HBTopShelfBannerModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <HBTopShelfItemInteractingDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
- (void)_configureTextOverlayView:(id)arg1 withOverlayItem:(id)arg2;	// IMP=0x0000000100032988
- (void)_configureTextOverlayViewForImageStackView:(id)arg1 withItem:(id)arg2;	// IMP=0x00000001000328e4
- (void)_configureTextOverlayViewForLayeredImageContainerView:(id)arg1 withItem:(id)arg2;	// IMP=0x000000010003283c
- (id)_placeholderForUserInterfaceStyle:(long long)arg1;	// IMP=0x00000001000327e0
- (unsigned long long)numberOfItemsInCarouselView:(id)arg1;	// IMP=0x000000010003276c
- (void)carouselView:(id)arg1 didPlayItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000100032658
- (void)carouselView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000100032544
- (void)configureCell:(id)arg1 forItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000100031dc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

