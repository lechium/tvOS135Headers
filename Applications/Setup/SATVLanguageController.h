//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SATVStepViewController.h"

#import "SATVListStep-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSIndexPath, NSString, SATVInternationalUtility, SATVTableViewController;

@interface SATVLanguageController : SATVStepViewController <UITableViewDelegate, UITableViewDataSource, SATVListStep>
{
    CDUnknownBlockType selectionHandler;	// 8 = 0x8
    NSIndexPath *_selectedIndexPath;	// 16 = 0x10
    NSIndexPath *_focusedIndexPath;	// 24 = 0x18
    SATVInternationalUtility *_internationalUtility;	// 32 = 0x20
    SATVTableViewController *_tableViewController;	// 40 = 0x28
}

+ (id)stableKey;	// IMP=0x00000001000418f4
- (void).cxx_destruct;	// IMP=0x0000000100042cac
@property(retain, nonatomic) SATVTableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
@property(retain, nonatomic) SATVInternationalUtility *internationalUtility; // @synthesize internationalUtility=_internationalUtility;
@property(retain, nonatomic) NSIndexPath *focusedIndexPath; // @synthesize focusedIndexPath=_focusedIndexPath;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler;
- (void)_updateLabelValue;	// IMP=0x0000000100042a6c
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;	// IMP=0x00000001000429a4
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000428bc
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000010004280c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100042648
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001000425d4
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001000425cc
@property(nonatomic) _Bool hasBeenDisplayed;
@property(copy, nonatomic) NSString *selectedLanguage;
- (void)selectLanguage:(id)arg1;	// IMP=0x00000001000422a8
- (void)reset;	// IMP=0x0000000100042264
@property(readonly, nonatomic) _Bool isConfigured;
- (id)preferredFocusEnvironments;	// IMP=0x0000000100042128
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100041f2c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100041e80
- (void)viewDidLoad;	// IMP=0x0000000100041ca8
- (void)buildTable;	// IMP=0x0000000100041a1c
- (void)startOver;	// IMP=0x0000000100041a10
- (void)autoAdvance;	// IMP=0x000000010004197c
- (id)init;	// IMP=0x0000000100041900

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) CDUnknownBlockType menuHandler;
@property(readonly) Class superclass;

@end

