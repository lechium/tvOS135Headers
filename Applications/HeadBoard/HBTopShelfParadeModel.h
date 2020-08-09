//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HBTopShelfModel.h"

#import "HBUITopShelfParadeContent-Protocol.h"

@class HBTopShelfPromotionParadeItem, NSArray, NSString;
@protocol HBUITopShelfPromotionParadeItem;

@interface HBTopShelfParadeModel : HBTopShelfModel <HBUITopShelfParadeContent>
{
    long long _style;	// 8 = 0x8
    NSArray *_hbItems;	// 16 = 0x10
    HBTopShelfPromotionParadeItem *_hbPromotionItem;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100035538
@property(retain, nonatomic) HBTopShelfPromotionParadeItem *hbPromotionItem; // @synthesize hbPromotionItem=_hbPromotionItem;
@property(copy, nonatomic) NSArray *hbItems; // @synthesize hbItems=_hbItems;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void)_enumerateAppStoreParadeItemsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000353fc
- (id)_logSafeDescriptionBuilder;	// IMP=0x0000000100035310
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000001000351ec
@property(readonly, nonatomic) NSArray *contentItems;
@property(readonly, nonatomic) id <HBUITopShelfPromotionParadeItem> promotionItem;
- (void)_removedFromController;	// IMP=0x00000001000351b0
- (void)_addedToController;	// IMP=0x000000010003518c
- (void)_applyItemUpdates:(id)arg1;	// IMP=0x0000000100034fc8
- (id)initWithTopShelfCarouselContent:(id)arg1 applicationIdentifier:(id)arg2;	// IMP=0x0000000100034c0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
