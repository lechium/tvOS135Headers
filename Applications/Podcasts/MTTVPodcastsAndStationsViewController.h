//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTTVFetchedCollectionWithSectionsViewController.h"

#import "MTTVCreateStationButtonCollectionViewCellDelegate-Protocol.h"
#import "MTTVPodcastActionController-Protocol.h"
#import "MTTVStationActionControllerDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class MTTVPodcastActionController, MTTVStationActionController, NSString, UITextField;

@interface MTTVPodcastsAndStationsViewController : MTTVFetchedCollectionWithSectionsViewController <UITextFieldDelegate, UICollectionViewDelegateFlowLayout, MTTVPodcastActionController, MTTVStationActionControllerDelegate, MTTVCreateStationButtonCollectionViewCellDelegate>
{
    _Bool _hasStations;	// 8 = 0x8
    UITextField *_hiddenTextField;	// 16 = 0x10
    MTTVPodcastActionController *_podcastActionController;	// 24 = 0x18
    MTTVStationActionController *_stationActionController;	// 32 = 0x20
}

+ (id)notSubscribedPodcastResultsController;	// IMP=0x00000001000ba69c
+ (id)subscribedPodcastResultsController;	// IMP=0x00000001000ba57c
+ (id)predicateForStations;	// IMP=0x00000001000ba568
+ (id)createFirstStationResultsController;	// IMP=0x00000001000ba4a4
+ (id)stationResultsController;	// IMP=0x00000001000ba368
+ (id)resultsController;	// IMP=0x00000001000ba20c
- (void).cxx_destruct;	// IMP=0x00000001000bd0c4
@property(nonatomic) _Bool hasStations; // @synthesize hasStations=_hasStations;
@property(retain, nonatomic) MTTVStationActionController *stationActionController; // @synthesize stationActionController=_stationActionController;
@property(retain, nonatomic) MTTVPodcastActionController *podcastActionController; // @synthesize podcastActionController=_podcastActionController;
@property(retain, nonatomic) UITextField *hiddenTextField; // @synthesize hiddenTextField=_hiddenTextField;
- (void)buttonCell:(id)arg1 didSelectButton:(id)arg2;	// IMP=0x00000001000bd03c
- (void)_updateFocusabilityForCreateStationButtonFooter;	// IMP=0x00000001000bce44
- (void)_updateSectionHeaderVisbilityForSubscribedPodcasts;	// IMP=0x00000001000bcd50
- (void)_didUpdateCollectionView:(id)arg1;	// IMP=0x00000001000bccc4
- (id)_indexPathForPodcastUuid:(id)arg1;	// IMP=0x00000001000bcbf0
- (void)_showCreateStationUI;	// IMP=0x00000001000bcb08
- (_Bool)_hasOnePodcast;	// IMP=0x00000001000bca64
- (_Bool)_hasUnsubscribedPodcasts;	// IMP=0x00000001000bca10
- (_Bool)_hasSubscribedPodcasts;	// IMP=0x00000001000bc9bc
- (_Bool)_hasStations;	// IMP=0x00000001000bc968
- (_Bool)_isIndexPathForCreateNewStation:(id)arg1;	// IMP=0x00000001000bc8b8
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x00000001000bc688
- (void)performDeleteStation:(id)arg1;	// IMP=0x00000001000bc610
- (void)performShowSettingsForStation:(id)arg1;	// IMP=0x00000001000bc54c
- (void)performDeletePodcast:(id)arg1;	// IMP=0x00000001000bc3f4
- (void)performShowSettingsForPodcast:(id)arg1;	// IMP=0x00000001000bc330
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000001000bc29c
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000001000bc0b8
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x00000001000bbf94
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x00000001000bbf84
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000001000bbec4
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x00000001000bbe74
- (id)collectionView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000001000bbdd8
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x00000001000bbd38
- (id)reuseIdentifierForItemAtIndexPath:(id)arg1;	// IMP=0x00000001000bbc70
- (void)tearDownEmptyContentViewController;	// IMP=0x00000001000bbbfc
- (void)standupEmptyContentViewController;	// IMP=0x00000001000bbb88
- (void)updateListState;	// IMP=0x00000001000bba90
- (void)collectionView:(id)arg1 configureCell:(id)arg2 withPodcast:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x00000001000bb960
- (void)collectionView:(id)arg1 configureCell:(id)arg2 withStation:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x00000001000bb740
- (void)collectionView:(id)arg1 configureCell:(id)arg2 withObject:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x00000001000bb644
- (void)collectionView:(id)arg1 didLongPressItemAtIndexPath:(id)arg2;	// IMP=0x00000001000bb478
- (void)playItemAtIndexPath:(id)arg1;	// IMP=0x00000001000bb288
- (void)artworkDidChange:(id)arg1;	// IMP=0x00000001000bb0b0
- (void)unregisterForArtworkChangeNotifications;	// IMP=0x00000001000bb050
- (void)registerForArtworkChangeNotifications;	// IMP=0x00000001000bafe8
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000001000baf70
- (void)registerCollectionViewClasses;	// IMP=0x00000001000bad70
- (void)viewWillLayoutSubviews;	// IMP=0x00000001000bad3c
- (void)viewDidLoad;	// IMP=0x00000001000ba984
- (void)dealloc;	// IMP=0x00000001000ba938
- (id)init;	// IMP=0x00000001000ba7bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

