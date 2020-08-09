//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HBTopShelfItem.h"

@class NSNumber, NSString, NSURL;

@interface HBTopShelfSectionedItem : HBTopShelfItem
{
    long long _placeholderAssetType;	// 8 = 0x8
}

+ (id)_logStringForImageShape:(unsigned long long)arg1;	// IMP=0x00000001000183b0
@property(readonly, nonatomic) long long placeholderAssetType; // @synthesize placeholderAssetType=_placeholderAssetType;
- (id)_topShelfSectionedItem;	// IMP=0x00000001000183a4
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000100018224
@property(readonly, nonatomic) NSURL *topRightImageURL;
@property(readonly, nonatomic) NSString *playbackSubtitle;
@property(readonly, nonatomic) NSString *playbackTitle;
@property(readonly, nonatomic) _Bool alwaysShowTitle;
@property(readonly, nonatomic) NSNumber *playbackProgress;
@property(readonly, nonatomic) struct CGSize imageSize;
@property(readonly, nonatomic) unsigned long long imageShape;
- (id)initWithTopShelfSectionedItem:(id)arg1 applicationIdentifier:(id)arg2;	// IMP=0x0000000100017f08

@end

