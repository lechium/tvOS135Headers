//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HBTopShelfObject.h"

@class HBTopShelfAction, HBTopShelfPlayAction, NSDate, NSDictionary, TVTopShelfInsetItemTextOverlay, TVTopShelfItem;

@interface HBTopShelfItem : HBTopShelfObject
{
    HBTopShelfPlayAction *_playAction;	// 8 = 0x8
    HBTopShelfAction *_displayAction;	// 16 = 0x10
    TVTopShelfItem *_topShelfItem;	// 24 = 0x18
}

+ (id)_imageRequestForDisplayScale:(double)arg1 imageRequestBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100017a8c
- (void).cxx_destruct;	// IMP=0x0000000100017eb4
@property(readonly, nonatomic) TVTopShelfItem *topShelfItem; // @synthesize topShelfItem=_topShelfItem;
@property(retain, nonatomic) HBTopShelfAction *displayAction; // @synthesize displayAction=_displayAction;
@property(retain, nonatomic) HBTopShelfPlayAction *playAction; // @synthesize playAction=_playAction;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000010001784c
- (void)_didPerformAction:(id)arg1 withSuccess:(_Bool)arg2;	// IMP=0x0000000100017848
- (void)_willPerformAction:(id)arg1;	// IMP=0x0000000100017844
@property(readonly, nonatomic) TVTopShelfInsetItemTextOverlay *insetItemTextOverlay;
@property(readonly, copy, nonatomic) NSDictionary *userInfo;
@property(readonly, copy, nonatomic) NSDate *expirationDate;
- (id)overlayImageRequestForTraitCollection:(id)arg1;	// IMP=0x000000010001761c
- (id)imageRequestForTraitCollection:(id)arg1;	// IMP=0x0000000100017374
- (id)initWithTopShelfItem:(id)arg1;	// IMP=0x00000001000171d0

@end

