//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MTTVEpisodeDescriptionViewControllerDelegate-Protocol.h"

@class MTEpisode, MTTVExpandingTextView, NSString, UIImageView, UITapGestureRecognizer;
@protocol MTTVEpisodeDetailViewControllerDelegate;

@interface MTTVEpisodeDetailViewController : UIViewController <MTTVEpisodeDescriptionViewControllerDelegate>
{
    MTEpisode *_episode;	// 8 = 0x8
    id <MTTVEpisodeDetailViewControllerDelegate> _delegate;	// 16 = 0x10
    UIImageView *_imageView;	// 24 = 0x18
    MTTVExpandingTextView *_descriptionView;	// 32 = 0x20
    UITapGestureRecognizer *_playButtonRecognizer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000942c4
@property(retain, nonatomic) UITapGestureRecognizer *playButtonRecognizer; // @synthesize playButtonRecognizer=_playButtonRecognizer;
@property(retain, nonatomic) MTTVExpandingTextView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <MTTVEpisodeDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MTEpisode *episode; // @synthesize episode=_episode;
- (void)episodeDescriptionViewController:(id)arg1 playEpisode:(id)arg2;	// IMP=0x00000001000941c4
- (id)descriptionFont;	// IMP=0x00000001000941a4
- (void)artworkDidChange:(id)arg1;	// IMP=0x0000000100093d44
- (void)unregisterForArtworkChangeNotifications;	// IMP=0x0000000100093ce4
- (void)registerForArtworkChangeNotifications;	// IMP=0x0000000100093c7c
- (id)fetchDescription;	// IMP=0x0000000100093b34
- (id)fetchArtwork;	// IMP=0x0000000100093ad4
- (void)updateDescriptionTextColor;	// IMP=0x00000001000938d4
- (_Bool)isDarkBackground;	// IMP=0x0000000100093884
- (void)updateColors;	// IMP=0x00000001000937ac
- (void)updateDescriptionText;	// IMP=0x0000000100093728
- (void)updateArtwork;	// IMP=0x00000001000936bc
- (void)playPauseButtonAction:(id)arg1;	// IMP=0x0000000100093530
- (id)preferredFocusedView;	// IMP=0x0000000100093524
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100093460
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000932e4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100093294
- (void)viewDidLoad;	// IMP=0x00000001000931ac
- (void)loadView;	// IMP=0x00000001000930a4
- (void)dealloc;	// IMP=0x000000010009302c
- (id)initWithEpisode:(id)arg1;	// IMP=0x0000000100092fb8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
