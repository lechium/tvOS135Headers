//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVPPhotoLibraryFeedCollectionViewController.h"

#import "TVPPhotoLibraryOneUpViewControllerDelegate-Protocol.h"

@class NSString;

@interface TVPSharedPSActivityViewController : TVPPhotoLibraryFeedCollectionViewController <TVPPhotoLibraryOneUpViewControllerDelegate>
{
    long long _selectedItemIndex;	// 8 = 0x8
}

@property(nonatomic) long long selectedItemIndex; // @synthesize selectedItemIndex=_selectedItemIndex;
- (void)_updateFeedInfoAndUI;	// IMP=0x000000010005c7c4
- (void)_cacheFeedInfoIfRequired;	// IMP=0x000000010005c6d4
- (id)_feedCollection;	// IMP=0x000000010005c634
- (id)_photoStreamHeaderSubtitle;	// IMP=0x000000010005c4c0
- (id)_photoStreamHeaderTitle;	// IMP=0x000000010005c450
- (void)_onSelectSlideshowButton:(id)arg1;	// IMP=0x000000010005c3b0
- (void)_onSelectScreenSaverButton:(id)arg1;	// IMP=0x000000010005c224
- (void)photoLibraryOneUpControllerWillPop:(id)arg1;	// IMP=0x000000010005c124
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010005be80
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000010005bcc0
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010005b8cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
