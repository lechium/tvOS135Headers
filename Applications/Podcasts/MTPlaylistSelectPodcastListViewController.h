//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTBasePodcastListViewController.h"

@class NSMutableSet, NSString;
@protocol MTPlaylistSelectPodcastListViewControllerSaveDelegate;

@interface MTPlaylistSelectPodcastListViewController : MTBasePodcastListViewController
{
    _Bool _allPodcastsSelected;	// 8 = 0x8
    NSString *_playlistName;	// 16 = 0x10
    NSMutableSet *_podcastUuids;	// 24 = 0x18
    NSString *_playlistUuid;	// 32 = 0x20
    id <MTPlaylistSelectPodcastListViewControllerSaveDelegate> _saveDelegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000db710
@property(retain) id <MTPlaylistSelectPodcastListViewControllerSaveDelegate> saveDelegate; // @synthesize saveDelegate=_saveDelegate;
@property(retain, nonatomic) NSString *playlistUuid; // @synthesize playlistUuid=_playlistUuid;
@property(nonatomic) _Bool allPodcastsSelected; // @synthesize allPodcastsSelected=_allPodcastsSelected;
@property(retain, nonatomic) NSMutableSet *podcastUuids; // @synthesize podcastUuids=_podcastUuids;
@property(retain, nonatomic) NSString *playlistName; // @synthesize playlistName=_playlistName;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000db588
- (id)reuseIdentifierForRow:(id)arg1;	// IMP=0x00000001000db57c
- (id)newCellInstanceWithReuseIdentifier:(id)arg1;	// IMP=0x00000001000db524
- (void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000001000db440
- (void)togglePodcastUuid:(id)arg1;	// IMP=0x00000001000db3a0
- (void)restoreSelection;	// IMP=0x00000001000db39c
- (void)viewWillLayoutSubviews;	// IMP=0x00000001000db1fc
- (void)updateAllPodcastsTo:(_Bool)arg1;	// IMP=0x00000001000daeec
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000dae7c
- (void)viewDidLoad;	// IMP=0x00000001000dabc0

@end
