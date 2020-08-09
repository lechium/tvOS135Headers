//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVPreviewTableViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class MPModelLibraryRequest, MPModelResponse, MPSectionedCollection, NSString, TVInteractionGestureRecognizer, UILabel, UIView;
@protocol MPLazySectionedCollectionDataSource;

@interface TVMusicTableViewController : TVPreviewTableViewController <UIGestureRecognizerDelegate>
{
    MPModelResponse *_lastReceivedResponse;	// 8 = 0x8
    _Bool _visibleOnScreen;	// 16 = 0x10
    _Bool _shouldUpdateOnViewDidAppear;	// 17 = 0x11
    double _headingVerticalOffset;	// 24 = 0x18
    UILabel *_tableHeaderLabel;	// 32 = 0x20
    TVInteractionGestureRecognizer *_playPauseRecognizer;	// 40 = 0x28
    UIView *_tableHeaderView;	// 48 = 0x30
    MPModelLibraryRequest *_libraryRequest;	// 56 = 0x38
    MPSectionedCollection *_mpResults;	// 64 = 0x40
    id <MPLazySectionedCollectionDataSource> _sectionedCollectionDataSource;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000001000bc1c8
@property(retain, nonatomic) id <MPLazySectionedCollectionDataSource> sectionedCollectionDataSource; // @synthesize sectionedCollectionDataSource=_sectionedCollectionDataSource;
@property(retain, nonatomic) MPSectionedCollection *mpResults; // @synthesize mpResults=_mpResults;
@property(retain, nonatomic) MPModelLibraryRequest *libraryRequest; // @synthesize libraryRequest=_libraryRequest;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) TVInteractionGestureRecognizer *playPauseRecognizer; // @synthesize playPauseRecognizer=_playPauseRecognizer;
@property(retain, nonatomic) UILabel *tableHeaderLabel; // @synthesize tableHeaderLabel=_tableHeaderLabel;
@property(nonatomic) double headingVerticalOffset; // @synthesize headingVerticalOffset=_headingVerticalOffset;
- (id)_playbackViewController;	// IMP=0x00000001000bc0c8
- (id)_previewViewControllerForIndexPath:(id)arg1;	// IMP=0x00000001000bc0c0
- (void)_modelResponseDidInvalidate:(id)arg1;	// IMP=0x00000001000bbfe4
- (void)_configureTableHeaderView;	// IMP=0x00000001000bbe28
- (id)_tableHeaderLabel;	// IMP=0x00000001000bbcc0
- (id)tableHeaderTitleAttributedText;	// IMP=0x00000001000bbc50
- (void)setTableHeaderTitleAttributedText:(id)arg1;	// IMP=0x00000001000bbbcc
- (id)tableHeaderTitle;	// IMP=0x00000001000bbb78
- (void)setTableHeaderTitle:(id)arg1;	// IMP=0x00000001000bbb0c
- (void)_startMusicPlayback;	// IMP=0x00000001000bba98
- (void)_processResponse:(id)arg1 error:(id)arg2;	// IMP=0x00000001000bb858
- (void)_performRequest;	// IMP=0x00000001000bb720
- (void)_handlePlayPauseButton;	// IMP=0x00000001000bb644
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000bb638
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x00000001000bb570
- (id)sectionIndexTitlesForTableView:(id)arg1;	// IMP=0x00000001000bb51c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000bb4c4
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001000bb470
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001000bb424
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000bb348
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000bb2e8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000bb274
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000bb228
- (void)viewDidLoad;	// IMP=0x00000001000bb044
- (id)init;	// IMP=0x00000001000bb034
- (id)initWithLibraryRequest:(id)arg1;	// IMP=0x00000001000bae74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

