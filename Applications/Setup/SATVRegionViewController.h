//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SATVStepViewController.h"

#import "SATVListStep-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class BYLocaleDataSource, NSArray, NSDictionary, NSString, SATVInternationalUtility, SATVTableViewController, _SATVRegionOtherCountriesContainerView;

@interface SATVRegionViewController : SATVStepViewController <UITableViewDelegate, UITableViewDataSource, SATVListStep>
{
    CDUnknownBlockType selectionHandler;	// 8 = 0x8
    BYLocaleDataSource *_localeDataSource;	// 16 = 0x10
    _SATVRegionOtherCountriesContainerView *_otherCountriesContainer;	// 24 = 0x18
    NSArray *_otherCountriesSectionIndexTitles;	// 32 = 0x20
    NSDictionary *_otherCountriesSectionIndex;	// 40 = 0x28
    NSArray *_otherCountriesSectionIndexKeys;	// 48 = 0x30
    SATVInternationalUtility *_internationalUtility;	// 56 = 0x38
    SATVTableViewController *_tableViewController;	// 64 = 0x40
}

+ (id)stableKey;	// IMP=0x000000010003e930
- (void).cxx_destruct;	// IMP=0x00000001000403b4
@property(retain, nonatomic) SATVTableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
@property(retain, nonatomic) SATVInternationalUtility *internationalUtility; // @synthesize internationalUtility=_internationalUtility;
@property(copy, nonatomic) NSArray *otherCountriesSectionIndexKeys; // @synthesize otherCountriesSectionIndexKeys=_otherCountriesSectionIndexKeys;
@property(copy, nonatomic) NSDictionary *otherCountriesSectionIndex; // @synthesize otherCountriesSectionIndex=_otherCountriesSectionIndex;
@property(copy, nonatomic) NSArray *otherCountriesSectionIndexTitles; // @synthesize otherCountriesSectionIndexTitles=_otherCountriesSectionIndexTitles;
@property(retain, nonatomic) _SATVRegionOtherCountriesContainerView *otherCountriesContainer; // @synthesize otherCountriesContainer=_otherCountriesContainer;
@property(retain, nonatomic) BYLocaleDataSource *localeDataSource; // @synthesize localeDataSource=_localeDataSource;
@property(copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0000000100040280
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000001000401b0
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010003fe90
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010003fdc4
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010003fc24
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010003fbf8
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x000000010003fbf0
- (id)sectionIndexTitlesForTableView:(id)arg1;	// IMP=0x000000010003fbe0
- (void)_configureSectionIndex;	// IMP=0x000000010003f70c
- (id)_countryAtSectionIndexPath:(id)arg1;	// IMP=0x000000010003f5b4
- (void)countryScanCompleted:(id)arg1;	// IMP=0x000000010003f490
- (void)reset;	// IMP=0x000000010003f444
@property(readonly, nonatomic) _Bool isConfigured;
- (id)preferredFocusEnvironments;	// IMP=0x000000010003f288
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010003f1f4
- (void)viewDidLoad;	// IMP=0x000000010003eb6c
- (void)autoAdvance;	// IMP=0x000000010003ea80
- (void)dealloc;	// IMP=0x000000010003ea08
- (id)init;	// IMP=0x000000010003e93c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) CDUnknownBlockType menuHandler;
@property(readonly) Class superclass;

@end

