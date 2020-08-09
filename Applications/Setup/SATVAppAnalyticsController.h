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

@interface SATVAppAnalyticsController : SATVStepViewController <SATVConsentViewControllerDelegate, SATVConsentViewControllerDataSource, SATVConsentStep>
{
    CDUnknownBlockType consentHandler;	// 8 = 0x8
    OBPrivacyLinkController *_privacyLink;	// 16 = 0x10
}

+ (_Bool)isSupported;	// IMP=0x000000010000d928
+ (id)stableKey;	// IMP=0x000000010000d91c
- (void).cxx_destruct;	// IMP=0x000000010000e1a4
@property(retain, nonatomic) OBPrivacyLinkController *privacyLink; // @synthesize privacyLink=_privacyLink;
@property(copy, nonatomic) CDUnknownBlockType consentHandler; // @synthesize consentHandler;
- (void)_enableAppAnalytics:(_Bool)arg1;	// IMP=0x000000010000e028
- (void)consentViewControllerDidSelectDissent:(id)arg1;	// IMP=0x000000010000dfa4
- (void)consentViewControllerDidSelectConsent:(id)arg1;	// IMP=0x000000010000df20
- (id)footerButtonViewForConsentViewController:(id)arg1;	// IMP=0x000000010000df08
- (id)dissentButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010000de88
- (id)consentButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010000de08
- (id)subtitleTextForConsentViewController:(id)arg1;	// IMP=0x000000010000dd88
- (id)titleTextForConsentViewController:(id)arg1;	// IMP=0x000000010000dd08
- (void)reset;	// IMP=0x000000010000dc40
@property(readonly, nonatomic) _Bool isConfigured;
- (void)autoAdvance;	// IMP=0x000000010000dbd4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010000db40
- (void)viewDidLoad;	// IMP=0x000000010000da60
- (id)init;	// IMP=0x000000010000d9dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) CDUnknownBlockType menuHandler;
@property(readonly) Class superclass;

@end
