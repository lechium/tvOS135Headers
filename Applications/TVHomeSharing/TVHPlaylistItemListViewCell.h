//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHMediaItemListViewCell.h"

@class UILabel;

@interface TVHPlaylistItemListViewCell : TVHMediaItemListViewCell
{
    UILabel *_artistTitleLabel;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100026328
@property(retain, nonatomic) UILabel *artistTitleLabel; // @synthesize artistTitleLabel=_artistTitleLabel;
- (void)layoutSubviews;	// IMP=0x0000000100025fb8
- (void)_updateColors;	// IMP=0x0000000100025dec
- (void)updateWithViewElement:(id)arg1;	// IMP=0x000000010002570c

@end
