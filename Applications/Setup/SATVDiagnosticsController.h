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

@interface SATVDiagnosticsController : SATVStepViewController <SATVConsentViewControllerDelegate, SATVConsentViewControllerDataSource, SATVConsentStep>
{
    CDUnknownBlockType consentHandler;	// 8 = 0x8
    OBPrivacyLinkController *_privacyLink;	// 16 = 0x10
}

+ (_Bool)isSupported;	// IMP=0x0000000100041294
+ (id)stableKey;	// IMP=0x0000000100041080
- (void).cxx_destruct;	// IMP=0x00000001000418b4
@property(retain, nonatomic) OBPrivacyLinkController *privacyLink; // @synthesize privacyLink=_privacyLink;
@property(copy, nonatomic) CDUnknownBlockType consentHandler; // @synthesize consentHandler;
- (void)_enableDiagnostics:(_Bool)arg1;	// IMP=0x0000000100041738
- (void)consentViewControllerDidSelectDissent:(id)arg1;	// IMP=0x00000001000416b4
- (void)consentViewControllerDidSelectConsent:(id)arg1;	// IMP=0x0000000100041630
- (id)footerButtonViewForConsentViewController:(id)arg1;	// IMP=0x0000000100041618
- (id)dissentButtonTextForConsentViewController:(id)arg1;	// IMP=0x0000000100041598
- (id)consentButtonTextForConsentViewController:(id)arg1;	// IMP=0x0000000100041518
- (id)subtitleTextForConsentViewController:(id)arg1;	// IMP=0x0000000100041498
- (id)titleTextForConsentViewController:(id)arg1;	// IMP=0x0000000100041418
- (void)reset;	// IMP=0x0000000100041350
@property(readonly, nonatomic) _Bool isConfigured;
- (void)autoAdvance;	// IMP=0x0000000100041284
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000411f0
- (void)viewDidLoad;	// IMP=0x0000000100041110
- (id)init;	// IMP=0x000000010004108c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) CDUnknownBlockType menuHandler;
@property(readonly) Class superclass;

@end

