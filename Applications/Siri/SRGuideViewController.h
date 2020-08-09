//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUISnippetCollectionViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSCache, NSDate, NSMutableArray, NSMutableSet, NSOperationQueue, NSSet, NSString, SAGuidanceGuideSnippet, SRBigButtonController, UIImage;

@interface SRGuideViewController : SiriUISnippetCollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSCache *_domainIconCache;	// 8 = 0x8
    NSDate *_startViewingTime;	// 16 = 0x10
    _Bool _showingDetails;	// 24 = 0x18
    NSSet *_siriEnabledAppList;	// 32 = 0x20
    SRBigButtonController *_bigButtonController;	// 40 = 0x28
    NSOperationQueue *_guideImageOperationQueue;	// 48 = 0x30
    NSMutableSet *_spawnedGuideImageFetches;	// 56 = 0x38
    UIImage *_fallbackImage;	// 64 = 0x40
    NSMutableArray *_enabledIntentSupportedAppSnippets;	// 72 = 0x48
    SAGuidanceGuideSnippet *_guideSnippet;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000010002337c
@property(retain, nonatomic, getter=_guideSnippet) SAGuidanceGuideSnippet *guideSnippet; // @synthesize guideSnippet=_guideSnippet;
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000100023364
- (void)_prepareSiriEnabledAppList;	// IMP=0x0000000100023120
- (_Bool)_hasTitle;	// IMP=0x00000001000230a8
- (id)_fallbackImage;	// IMP=0x0000000100023000
- (id)_iconImageForGuideDomainSnippet:(id)arg1;	// IMP=0x0000000100022c8c
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x0000000100022c7c
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000100022b44
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100022948
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100022940
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x0000000100022938
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000010002287c
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000001000221c4
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000001000220d4
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000001000220cc
- (double)_heightOfRowForDomainSnippet:(id)arg1;	// IMP=0x0000000100021fe0
- (id)_domainSnippetForIndexPath:(id)arg1;	// IMP=0x0000000100021f50
- (id)_domainSnippetForEnabledIntentSupportedAppAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100021f38
- (id)_domainSnippetForHelpDomainAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100021eb4
- (long long)_numberOfIntentEnabledApps;	// IMP=0x0000000100021e9c
- (long long)_numberOfIntentSupportedApps;	// IMP=0x0000000100021e28
- (long long)_numberOfHelpDomains;	// IMP=0x0000000100021db4
- (long long)_pinAnimationType;	// IMP=0x0000000100021d98
- (_Bool)usePlatterStyle;	// IMP=0x0000000100021d90
- (_Bool)wantsToManageBackgroundColor;	// IMP=0x0000000100021d88
- (double)desiredHeightForTransparentHeaderView;	// IMP=0x0000000100021cb4
- (void)configureReusableTransparentHeaderView:(id)arg1;	// IMP=0x0000000100021c24
- (Class)transparentHeaderViewClass;	// IMP=0x0000000100021bf0
- (void)_endTrackingGuideShowTimeIfNecessary;	// IMP=0x0000000100021a68
- (double)desiredTopPaddingBelowController:(id)arg1;	// IMP=0x0000000100021940
- (double)desiredHeightForWidth:(double)arg1;	// IMP=0x0000000100021768
- (void)siriDidDeactivate;	// IMP=0x000000010002175c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100021624
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000214bc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100021320
- (void)loadView;	// IMP=0x0000000100021154
- (id)_bigButtonViewController;	// IMP=0x0000000100021060
- (void)setDelegate:(id)arg1;	// IMP=0x0000000100021010
- (void)didReceiveMemoryWarning;	// IMP=0x0000000100020fb8
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100020ea4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

