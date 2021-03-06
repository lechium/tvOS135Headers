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

@interface SATVSiriDiagnosticsController : SATVStepViewController <SATVConsentViewControllerDelegate, SATVConsentViewControllerDataSource, SATVConsentStep>
{
    CDUnknownBlockType consentHandler;	// 8 = 0x8
    OBPrivacyLinkController *_privacyLink;	// 16 = 0x10
}

+ (void)_reset;	// IMP=0x000000010008e838
+ (_Bool)_isConfigured;	// IMP=0x000000010008e7a4
+ (_Bool)isSupportedForUpgrade;	// IMP=0x000000010008e708
+ (_Bool)isSupported;	// IMP=0x000000010008e660
+ (id)stableKey;	// IMP=0x000000010008e3f8
+ (id)siriSettingsConnection;	// IMP=0x000000010008e38c
- (void).cxx_destruct;	// IMP=0x000000010008f03c
@property(retain, nonatomic) OBPrivacyLinkController *privacyLink; // @synthesize privacyLink=_privacyLink;
@property(copy, nonatomic) CDUnknownBlockType consentHandler; // @synthesize consentHandler;
- (void)_enableSiriDiagnostics:(_Bool)arg1;	// IMP=0x000000010008ed70
- (void)consentViewControllerDidSelectFooter:(id)arg1;	// IMP=0x000000010008ecb8
- (void)consentViewControllerDidSelectDissent:(id)arg1;	// IMP=0x000000010008eca8
- (void)consentViewControllerDidSelectConsent:(id)arg1;	// IMP=0x000000010008ec98
- (id)footerButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010008ec18
- (id)dissentButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010008eb98
- (id)consentButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010008eb18
- (id)subtitleTextForConsentViewController:(id)arg1;	// IMP=0x000000010008ea98
- (id)titleTextForConsentViewController:(id)arg1;	// IMP=0x000000010008ea18
- (void)reset;	// IMP=0x000000010008e81c
@property(readonly, nonatomic) _Bool isConfigured;
- (void)autoAdvance;	// IMP=0x000000010008e650
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010008e5bc
- (void)viewDidLoad;	// IMP=0x000000010008e48c
- (id)init;	// IMP=0x000000010008e404

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) CDUnknownBlockType menuHandler;
@property(readonly) Class superclass;

@end

