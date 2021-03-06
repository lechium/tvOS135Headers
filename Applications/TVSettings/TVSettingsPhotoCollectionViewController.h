//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, TVImageScaleDecorator, TVPhotoCollection, UICollectionView;
@protocol TVSettingsPhotoCollectionViewControllerSelectionDelegate;

@interface TVSettingsPhotoCollectionViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    TVPhotoCollection *_collection;	// 8 = 0x8
    TVImageScaleDecorator *_scaleDecorator;	// 16 = 0x10
    id <TVSettingsPhotoCollectionViewControllerSelectionDelegate> _delegate;	// 24 = 0x18
    UICollectionView *_gridView;	// 32 = 0x20
    NSArray *_photoAssets;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100075328
@property(copy, nonatomic) NSArray *photoAssets; // @synthesize photoAssets=_photoAssets;
@property(retain, nonatomic) UICollectionView *gridView; // @synthesize gridView=_gridView;
@property(nonatomic) __weak id <TVSettingsPhotoCollectionViewControllerSelectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TVPhotoCollection *collection; // @synthesize collection=_collection;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100075210
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000100075048
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100074ea4
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000100074e8c
- (id)preferredFocusEnvironments;	// IMP=0x0000000100074b28
- (void)loadView;	// IMP=0x00000001000748c0
- (void)dealloc;	// IMP=0x0000000100074848
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100074780

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

