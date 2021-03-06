//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SATVTableViewController.h"

#import "SATVIPEntryViewControllerDelegate-Protocol.h"
#import "SATVNetworkConfigurationWizardDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, SATVButton, SATVNavigationController, TVSEthernetInterface;
@protocol SATVNetworkConfigurationDelegate;

@interface SATVNetworkConfigurationViewController : SATVTableViewController <UITableViewDataSource, UITableViewDelegate, SATVNetworkConfigurationWizardDelegate, SATVIPEntryViewControllerDelegate>
{
    id <SATVNetworkConfigurationDelegate> _configurationDelegate;	// 8 = 0x8
    TVSEthernetInterface *_activeInterface;	// 16 = 0x10
    SATVButton *_doneButton;	// 24 = 0x18
    CDUnknownBlockType _ipEntryCompletionBlock;	// 32 = 0x20
    unsigned long long _currentlyEditedConfigurationOption;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010001fca4
@property(nonatomic) unsigned long long currentlyEditedConfigurationOption; // @synthesize currentlyEditedConfigurationOption=_currentlyEditedConfigurationOption;
@property(copy, nonatomic) CDUnknownBlockType ipEntryCompletionBlock; // @synthesize ipEntryCompletionBlock=_ipEntryCompletionBlock;
@property(retain, nonatomic) SATVButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) TVSEthernetInterface *activeInterface; // @synthesize activeInterface=_activeInterface;
@property(nonatomic) __weak id <SATVNetworkConfigurationDelegate> configurationDelegate; // @synthesize configurationDelegate=_configurationDelegate;
- (void)_doneButtonSelected:(id)arg1;	// IMP=0x000000010001fbac
- (void)_handleInactiveInterfaceIfNeeded;	// IMP=0x000000010001fb18
- (long long)_cellAccessoryTypeForConfigurationOption:(unsigned long long)arg1;	// IMP=0x000000010001fb0c
- (_Bool)_isCellEnabledForConfigurationOption:(unsigned long long)arg1;	// IMP=0x000000010001fa3c
- (id)_titleForActiveInterface;	// IMP=0x000000010001f944
- (id)_ipValueForConfigurationOption:(unsigned long long)arg1;	// IMP=0x000000010001f858
- (void)_setIPValue:(id)arg1 forNetworkConfigurationOption:(unsigned long long)arg2;	// IMP=0x000000010001f6c8
- (id)_detailTextForConfigurationOption:(unsigned long long)arg1;	// IMP=0x000000010001f43c
- (id)_titleForConfigurationOption:(unsigned long long)arg1;	// IMP=0x000000010001f10c
- (id)_keyPathForConfigurationOption:(unsigned long long)arg1;	// IMP=0x000000010001f09c
- (void)_teardownObserversForInterface:(id)arg1;	// IMP=0x000000010001efe0
- (void)_setupObserversForInterface:(id)arg1;	// IMP=0x000000010001ef1c
- (void)_updateTableCellForKeyPath:(id)arg1;	// IMP=0x000000010001eda0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010001ed34
- (void)ipEntryViewControllerDidFinish:(id)arg1;	// IMP=0x000000010001ec38
- (void)didCancelNetworkConfigurationWizard:(id)arg1;	// IMP=0x000000010001ebb4
- (void)interfaceDidBecomeInactiveForConfigurationWizard:(id)arg1;	// IMP=0x000000010001eba8
- (void)didCompleteNetworkConfigurationWizard:(id)arg1;	// IMP=0x000000010001ea14
- (void)didRequestEntryForOption:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001e7bc
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000010001e7b0
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010001e4e0
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010001e4d8
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010001e4d0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010001e2c8
- (void)_didSelectMenu;	// IMP=0x000000010001e288
- (id)preferredFocusEnvironments;	// IMP=0x000000010001e1d4
- (void)viewDidLayoutSubviews;	// IMP=0x000000010001dfd8
- (void)loadView;	// IMP=0x000000010001da24
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010001d97c
- (void)dealloc;	// IMP=0x000000010001d908
- (id)init;	// IMP=0x000000010001d7ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SATVNavigationController *navigationController; // @dynamic navigationController;
@property(readonly) Class superclass;

@end

