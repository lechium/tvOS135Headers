//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "MTResultsControllerDelegate-Protocol.h"

@class MTCompositeResultsController, MTCoreDataResultsController, NSString;

@interface MTTVFetchedTableWithSectionsViewController : UITableViewController <MTResultsControllerDelegate>
{
    long long _userDrivenCounter;	// 8 = 0x8
    _Bool _inSwipeToDeleteMode;	// 16 = 0x10
    MTCompositeResultsController *_compositeResultsController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100070d18
@property(retain, nonatomic) MTCompositeResultsController *compositeResultsController; // @synthesize compositeResultsController=_compositeResultsController;
@property(nonatomic) _Bool inSwipeToDeleteMode; // @synthesize inSwipeToDeleteMode=_inSwipeToDeleteMode;
- (void)_updateTableAnimated:(_Bool)arg1;	// IMP=0x00000001000706f4
- (void)refetchWithPredicate:(id)arg1;	// IMP=0x0000000100070674
- (void)refetchWithSortDescriptors:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000705dc
- (void)refetchWithPredicate:(id)arg1 sortDescriptors:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000001000704f4
@property(readonly, nonatomic) MTCoreDataResultsController *frc;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x00000001000701b4
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x000000010006feec
- (void)controllerWillChangeContent:(id)arg1;	// IMP=0x000000010006fe88
- (_Bool)hideHeaderForEmptySection:(long long)arg1;	// IMP=0x000000010006fe80
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x000000010006fe40
- (void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000010006fe3c
- (id)newCellInstanceWithReuseIdentifier:(id)arg1;	// IMP=0x000000010006fde4
- (id)reuseIdentifierForRow:(id)arg1;	// IMP=0x000000010006fdd0
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000010006fd5c
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000010006fc84
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010006fb70
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000010006fad0
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010006fa7c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010006fa08
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;	// IMP=0x000000010006f9cc
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;	// IMP=0x000000010006f9a8
- (unsigned long long)_sectionForController:(id)arg1;	// IMP=0x000000010006f930
- (id)_controllerForSection:(unsigned long long)arg1;	// IMP=0x000000010006f8d4
- (id)indexPathForObject:(id)arg1;	// IMP=0x000000010006f7c0
- (id)indexPathsForObject:(id)arg1;	// IMP=0x000000010006f740
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x000000010006f6c0
@property(nonatomic) _Bool changeIsUserDriven;
- (void)viewDidLoad;	// IMP=0x000000010006f5a8
- (void)dealloc;	// IMP=0x000000010006f530
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010006f520
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010006f510
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000010006f500
- (id)initWithCompositeFetchedResultsController:(id)arg1;	// IMP=0x000000010006f464
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 propertyKeys:(id)arg4;	// IMP=0x000000010006f2e8
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;	// IMP=0x000000010006f26c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

