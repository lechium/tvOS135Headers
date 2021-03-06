//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVMusicMPRequestViewController.h"

#import "TVCollectionViewDelegate-Protocol.h"

@class MPModelTVSeason, NSArray, NSDateFormatter, NSString, TVImageView, UIControl, UIView;

@interface TVMusicLibraryEpisodesViewController : TVMusicMPRequestViewController <TVCollectionViewDelegate>
{
    UIView *_imageViewContainer;	// 8 = 0x8
    TVImageView *_artworkImageView;	// 16 = 0x10
    UIControl *_goToShowButton;	// 24 = 0x18
    UIControl *_moreButton;	// 32 = 0x20
    NSArray *_actionButtons;	// 40 = 0x28
    MPModelTVSeason *_tvSeason;	// 48 = 0x30
    NSDateFormatter *_episodeReleaseDateFormatter;	// 56 = 0x38
    _Bool _visibleOnScreen;	// 64 = 0x40
    _Bool _shouldReloadOnViewDidAppear;	// 65 = 0x41
}

+ (_Bool)_isTVEpisodeWatched:(id)arg1;	// IMP=0x0000000100015eec
- (void).cxx_destruct;	// IMP=0x0000000100016544
- (struct CGSize)artworkSize;	// IMP=0x0000000100016530
- (void)_bookmarkWillUpdateNotification:(id)arg1;	// IMP=0x00000001000162a8
- (id)_songCellPlaceholderImage;	// IMP=0x0000000100016244
- (id)_artworkPlaceholderImageForUserInterfaceStyle:(long long)arg1;	// IMP=0x00000001000161e0
- (void)_selectedMoreButton;	// IMP=0x00000001000160a4
- (void)_setPositionForView:(id)arg1 topLeft:(struct CGPoint)arg2;	// IMP=0x0000000100016044
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100015ab4
- (void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100015a1c
- (_Bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100015a14
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100015918
- (double)cellsTopMargin;	// IMP=0x000000010001590c
- (id)cellIdentifier;	// IMP=0x0000000100015900
- (void)_goToShow;	// IMP=0x000000010001579c
- (void)_sizeImageViewToFit;	// IMP=0x0000000100015680
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010001550c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010001523c
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100014f88
- (void)viewDidLoad;	// IMP=0x00000001000145d0
- (id)_seasonName;	// IMP=0x00000001000144c4
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100014428
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000143dc
- (void)dealloc;	// IMP=0x0000000100014364
- (id)initWithSeason:(id)arg1 libraryRequest:(id)arg2;	// IMP=0x0000000100013d4c
- (id)initWithTitle:(id)arg1 libraryRequest:(id)arg2;	// IMP=0x0000000100013d34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

