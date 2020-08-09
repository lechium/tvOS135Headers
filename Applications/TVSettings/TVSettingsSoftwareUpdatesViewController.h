//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

#import "PBSOSUpdateServiceDelegate-Protocol.h"
#import "TVSettingsBetaTermsViewControllerDelegate-Protocol.h"

@class NSArray, NSString, PBSAssertion, SDBetaProgram, TSKSettingItem;

@interface TVSettingsSoftwareUpdatesViewController : TSKViewController <PBSOSUpdateServiceDelegate, TVSettingsBetaTermsViewControllerDelegate>
{
    _Bool _checkingForUpdates;	// 8 = 0x8
    PBSAssertion *_downloadPriorityAssertion;	// 16 = 0x10
    NSString *_lastProgressText;	// 24 = 0x18
    TSKSettingItem *_advancedSettingsItem;	// 32 = 0x20
    TSKSettingItem *_updateSoftwareItem;	// 40 = 0x28
    TSKSettingItem *_betaSoftwareItem;	// 48 = 0x30
    SDBetaProgram *_selectedBetaSeedProgram;	// 56 = 0x38
    NSArray *_availableBetaSeedPrograms;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010002e1d0
@property(copy, nonatomic) NSArray *availableBetaSeedPrograms; // @synthesize availableBetaSeedPrograms=_availableBetaSeedPrograms;
@property(retain, nonatomic) SDBetaProgram *selectedBetaSeedProgram; // @synthesize selectedBetaSeedProgram=_selectedBetaSeedProgram;
@property(nonatomic) __weak TSKSettingItem *betaSoftwareItem; // @synthesize betaSoftwareItem=_betaSoftwareItem;
@property(nonatomic) __weak TSKSettingItem *updateSoftwareItem; // @synthesize updateSoftwareItem=_updateSoftwareItem;
@property(nonatomic) __weak TSKSettingItem *advancedSettingsItem; // @synthesize advancedSettingsItem=_advancedSettingsItem;
@property(copy, nonatomic) NSString *lastProgressText; // @synthesize lastProgressText=_lastProgressText;
@property(retain, nonatomic) PBSAssertion *downloadPriorityAssertion; // @synthesize downloadPriorityAssertion=_downloadPriorityAssertion;
@property(nonatomic) _Bool checkingForUpdates; // @synthesize checkingForUpdates=_checkingForUpdates;
- (void)_setShouldShowInternalSettings:(_Bool)arg1;	// IMP=0x000000010002dfa8
- (_Bool)_shouldShowInternalSettings;	// IMP=0x000000010002deec
- (void)_showConfirmationForEnrollmentInProgram:(id)arg1;	// IMP=0x000000010002d988
- (void)_selectBetaSeedProgram;	// IMP=0x000000010002d324
- (void)_toggleBetaEnrollment:(id)arg1;	// IMP=0x000000010002d1fc
- (void)_updateBetaSoftwareItem:(id)arg1;	// IMP=0x000000010002d034
- (void)_initializeBetaSeedPrograms;	// IMP=0x000000010002ccd0
- (void)_updateSWUpdateItem:(id)arg1;	// IMP=0x000000010002cad0
- (void)_updateInternalSettingsItem:(id)arg1;	// IMP=0x000000010002ca78
- (void)_toggleInternalSettingsItem:(id)arg1;	// IMP=0x000000010002ca30
- (void)betaTermsViewController:(id)arg1 didAcceptAllTerms:(_Bool)arg2;	// IMP=0x000000010002c82c
- (void)osUpdateServiceDidFinishApplyWithData:(id)arg1;	// IMP=0x000000010002c828
- (void)osUpdateServiceDidEncounterSlowUpdateWithData:(id)arg1;	// IMP=0x000000010002c824
- (void)osUpdateServiceDidUpdateApplyProgressWithData:(id)arg1;	// IMP=0x000000010002c820
- (void)osUpdateServiceDidStartApplyWithData:(id)arg1;	// IMP=0x000000010002c81c
- (void)osUpdateServiceDidStartRedownloadWithData:(id)arg1;	// IMP=0x000000010002c818
- (void)osUpdateServiceDidFinishDownloadWithData:(id)arg1;	// IMP=0x000000010002c704
- (void)osUpdateServiceDidUpdateDownloadProgressWithData:(id)arg1;	// IMP=0x000000010002c2d4
- (void)osUpdateServiceDidStartDownloadWithData:(id)arg1;	// IMP=0x000000010002c248
- (void)osUpdateServiceDidFinishCheckWithData:(id)arg1;	// IMP=0x000000010002c1bc
- (void)osUpdateServiceDidStartCheckWithData:(id)arg1;	// IMP=0x000000010002c130
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x000000010002bff0
- (void)_handleCheckForUpdates:(_Bool)arg1;	// IMP=0x000000010002bc70
- (void)checkForUpdates:(id)arg1;	// IMP=0x000000010002ba64
- (id)loadSettingGroups;	// IMP=0x000000010002b348
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010002b2a0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010002b19c
- (void)viewDidLoad;	// IMP=0x000000010002ae78
- (void)dealloc;	// IMP=0x000000010002ae20
- (id)init;	// IMP=0x000000010002ad74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

