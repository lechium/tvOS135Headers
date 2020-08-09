//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTCollectionViewCell.h"

#import "MTEpisodeLockupDelegate-Protocol.h"

@class MTColorTheme, MTEpisode, MTEpisodeActionController, MTEpisodeLockup, NSString, UIView;
@protocol MTEpisodeCollectionViewCellDelegate;

@interface MTEpisodeCollectionViewCell : MTCollectionViewCell <MTEpisodeLockupDelegate>
{
    UIView *_lockupContainer;	// 8 = 0x8
    MTEpisodeLockup *_episodeLockup;	// 16 = 0x10
}

+ (double)maximumContentWidthForStyle:(unsigned long long)arg1;	// IMP=0x00000001000965fc
+ (struct CGSize)artworkSizeForStyle:(unsigned long long)arg1;	// IMP=0x00000001000965e8
+ (double)estimatedHeightForWidth:(double)arg1 style:(unsigned long long)arg2;	// IMP=0x0000000100096510
+ (double)estimatedHeightForWidth:(double)arg1 showsArtwork:(_Bool)arg2;	// IMP=0x00000001000964c8
+ (unsigned long long)styleForWidth:(double)arg1 showsArtwork:(_Bool)arg2;	// IMP=0x00000001000964b4
- (void).cxx_destruct;	// IMP=0x0000000100097d40
@property(retain, nonatomic) MTEpisodeLockup *episodeLockup; // @synthesize episodeLockup=_episodeLockup;
@property(retain, nonatomic) UIView *lockupContainer; // @synthesize lockupContainer=_lockupContainer;
- (void)clearLayer:(id)arg1;	// IMP=0x0000000100097cb4
- (void)lockupDidChangeSize:(id)arg1;	// IMP=0x0000000100097bc8
- (void)lockup:(id)arg1 moreButtonTapped:(id)arg2;	// IMP=0x0000000100097b58
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000100097ac0
- (void)moreButtonTapped:(id)arg1;	// IMP=0x0000000100097abc
- (void)updateOverlayForSelectedOrIsNew;	// IMP=0x0000000100097574
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010009749c
- (void)layoutSubviews;	// IMP=0x000000010009733c
- (void)prepareForReuse;	// IMP=0x0000000100097294
- (void)fixEmptyTextContainers;	// IMP=0x0000000100097254
- (void)invalidateLayoutMargins;	// IMP=0x0000000100097214
- (void)invalidateSizeMetrics;	// IMP=0x00000001000971d4
- (void)updateActionSheetsAndPopovers;	// IMP=0x0000000100097194
- (void)dismissActionSheetsAndPopovers;	// IMP=0x0000000100097154
@property(readonly, nonatomic) MTEpisodeActionController *actionController;
@property(nonatomic, getter=isCurrentPlayerItem) _Bool currentPlayerItem;
@property(nonatomic, getter=isExpanded) _Bool expanded;
@property(retain, nonatomic) MTColorTheme *colorTheme;
@property(retain, nonatomic) MTEpisode *episode;
- (void)updateCurrentRowHeight;	// IMP=0x0000000100096db0
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000100096cb4
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000100096c64
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100096b44
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100096b38
@property(nonatomic) _Bool showsPlayState;
@property(nonatomic) _Bool showsPubDate;
@property(nonatomic) unsigned long long style;
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x0000000100096898
- (void)dealloc;	// IMP=0x0000000100096824
- (void)setupCell;	// IMP=0x0000000100096668
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100096610

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MTEpisodeCollectionViewCellDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
