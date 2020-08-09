//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SATVStepViewController.h"

#import "SATVConsentStep-Protocol.h"
#import "SATVConsentViewControllerDataSource-Protocol.h"
#import "SATVConsentViewControllerDelegate-Protocol.h"

@class NSString, OBPrivacyLinkController;

@interface SATVSiriAndDictationStepViewController : SATVStepViewController <SATVConsentViewControllerDelegate, SATVConsentViewControllerDataSource, SATVConsentStep>
{
    CDUnknownBlockType consentHandler;	// 8 = 0x8
    OBPrivacyLinkController *_privacyLink;	// 16 = 0x10
}

+ (void)setDictationEnabled:(_Bool)arg1;	// IMP=0x000000010002b4e4
+ (void)setAssistantEnabled:(_Bool)arg1;	// IMP=0x000000010002b418
+ (id)stableKey;	// IMP=0x000000010002b19c
+ (void)initialize;	// IMP=0x000000010002b138
- (void).cxx_destruct;	// IMP=0x000000010002bcec
@property(retain, nonatomic) OBPrivacyLinkController *privacyLink; // @synthesize privacyLink=_privacyLink;
@property(copy, nonatomic) CDUnknownBlockType consentHandler; // @synthesize consentHandler;
- (void)_storeFrontDidChange:(id)arg1;	// IMP=0x000000010002bbec
- (void)_enableAssistantOnStoreFrontChange;	// IMP=0x000000010002baf8
- (void)_enableSiriAndDictation:(_Bool)arg1;	// IMP=0x000000010002b84c
- (void)consentViewControllerDidSelectDissent:(id)arg1;	// IMP=0x000000010002b7d4
- (void)consentViewControllerDidSelectConsent:(id)arg1;	// IMP=0x000000010002b75c
- (id)footerButtonViewForConsentViewController:(id)arg1;	// IMP=0x000000010002b744
- (id)dissentButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010002b6c4
- (id)consentButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010002b644
- (id)subtitleTextForConsentViewController:(id)arg1;	// IMP=0x000000010002b5c4
- (id)titleTextForConsentViewController:(id)arg1;	// IMP=0x000000010002b544
- (void)autoAdvance;	// IMP=0x000000010002b534
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010002b384
- (void)viewDidLoad;	// IMP=0x000000010002b2a4
- (void)dealloc;	// IMP=0x000000010002b22c
- (id)init;	// IMP=0x000000010002b1a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isConfigured;
@property(copy, nonatomic) CDUnknownBlockType menuHandler;
@property(readonly) Class superclass;

@end

