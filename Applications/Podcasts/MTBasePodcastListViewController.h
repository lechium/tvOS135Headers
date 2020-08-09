//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTFetchedTableViewController.h"

#import "MTTableViewDataSource-Protocol.h"

@class NSAttributedString, NSString;
@protocol MTRefreshControlDelegate, MTSourceListDelegate;

@interface MTBasePodcastListViewController : MTFetchedTableViewController <MTTableViewDataSource>
{
    _Bool _endRefreshWhenDraggingEnds;	// 8 = 0x8
    _Bool _refreshing;	// 9 = 0x9
    id <MTSourceListDelegate> _delegate;	// 16 = 0x10
    id <MTRefreshControlDelegate> _refreshDelegate;	// 24 = 0x18
    NSString *_selectedUuid;	// 32 = 0x20
    NSAttributedString *_attributedTitleForRefreshControl;	// 40 = 0x28
    SEL _selectorForRefreshControl;	// 48 = 0x30
    id _targetForRefreshControl;	// 56 = 0x38
}

+ (id)defaultsKey;	// IMP=0x000000010000cdd4
- (void).cxx_destruct;	// IMP=0x000000010000ee20
@property(nonatomic) __weak id targetForRefreshControl; // @synthesize targetForRefreshControl=_targetForRefreshControl;
@property(nonatomic) SEL selectorForRefreshControl; // @synthesize selectorForRefreshControl=_selectorForRefreshControl;
@property(retain, nonatomic) NSAttributedString *attributedTitleForRefreshControl; // @synthesize attributedTitleForRefreshControl=_attributedTitleForRefreshControl;
@property(nonatomic, getter=isRefreshing) _Bool refreshing; // @synthesize refreshing=_refreshing;
@property(retain, nonatomic) NSString *selectedUuid; // @synthesize selectedUuid=_selectedUuid;
@property(nonatomic) __weak id <MTRefreshControlDelegate> refreshDelegate; // @synthesize refreshDelegate=_refreshDelegate;
@property(nonatomic) __weak id <MTSourceListDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)indexPathIsCurrentlySelectedRow:(id)arg1;	// IMP=0x000000010000ec84
- (void)selectItemWithUuid:(id)arg1 forceScroll:(_Bool)arg2;	// IMP=0x000000010000eb78
- (id)_selectItemWithUuid:(id)arg1;	// IMP=0x000000010000ea70
- (id)firstValidIndexPath;	// IMP=0x000000010000e9c4
- (void)getObjectId:(id *)arg1 andIndexPath:(id *)arg2 forItemWithUuid:(id)arg3;	// IMP=0x000000010000e9c0
- (void)updatedDefaults:(id)arg1;	// IMP=0x000000010000e810
- (long long)flattenedCellIndexForIndexPath:(id)arg1;	// IMP=0x000000010000e658
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000010000e568
- (void)endRefreshingWhenDraggingCompletes;	// IMP=0x000000010000e444
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x000000010000e1a0
- (void)dealloc;	// IMP=0x000000010000e128
- (void)configureRowHeight;	// IMP=0x000000010000e080
- (void)viewDidLoad;	// IMP=0x000000010000ded8
- (void)loadView;	// IMP=0x000000010000ddf4
- (void)didReceiveMemoryWarning;	// IMP=0x000000010000ddc0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010000dcd4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010000d6b0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010000d5b8
- (id)tableView;	// IMP=0x000000010000d584
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x000000010000d4a8
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x000000010000d320
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x000000010000d308
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010000d290
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010000d25c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010000d228
- (void)didEndDraggingScrollView;	// IMP=0x000000010000d1e8
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000010000d1dc
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x000000010000d1c8
- (void)restoreSelection;	// IMP=0x000000010000d140
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010000cf9c
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;	// IMP=0x000000010000cf94
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x000000010000cf8c
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x000000010000cf70
- (void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000010000cf0c
- (id)newCellInstanceWithReuseIdentifier:(id)arg1;	// IMP=0x000000010000ceb4
- (id)reuseIdentifierForRow:(id)arg1;	// IMP=0x000000010000cea0
- (id)storedUuid;	// IMP=0x000000010000cddc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

