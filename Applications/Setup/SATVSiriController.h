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

@interface SATVSiriController : SATVStepViewController <SATVConsentViewControllerDelegate, SATVConsentViewControllerDataSource, SATVConsentStep>
{
    CDUnknownBlockType consentHandler;	// 8 = 0x8
    OBPrivacyLinkController *_privacyLink;	// 16 = 0x10
}

+ (_Bool)isSupported;	// IMP=0x0000000100053e34
+ (id)stableKey;	// IMP=0x0000000100053ba8
- (void).cxx_destruct;	// IMP=0x00000001000549dc
@property(retain, nonatomic) OBPrivacyLinkController *privacyLink; // @synthesize privacyLink=_privacyLink;
@property(copy, nonatomic) CDUnknownBlockType consentHandler; // @synthesize consentHandler;
- (void)_storeFrontDidChange:(id)arg1;	// IMP=0x00000001000548e0
- (void)_enableAssistantOnStoreFrontChange;	// IMP=0x00000001000547ec
- (void)_setDictationEnabled:(_Bool)arg1;	// IMP=0x000000010005479c
- (void)_setAssistantEnabled:(_Bool)arg1;	// IMP=0x00000001000546d0
- (void)_enableSiriAndDictation:(_Bool)arg1;	// IMP=0x0000000100054430
- (void)consentViewControllerDidSelectDissent:(id)arg1;	// IMP=0x00000001000543ac
- (void)consentViewControllerDidSelectConsent:(id)arg1;	// IMP=0x0000000100054328
- (id)footerButtonViewForConsentViewController:(id)arg1;	// IMP=0x0000000100054310
- (id)footnoteTextForConsentViewController:(id)arg1;	// IMP=0x0000000100054290
- (id)dissentButtonTextForConsentViewController:(id)arg1;	// IMP=0x0000000100054210
- (id)consentButtonTextForConsentViewController:(id)arg1;	// IMP=0x0000000100054190
- (id)subtitleTextForConsentViewController:(id)arg1;	// IMP=0x0000000100054110
- (id)titleTextForConsentViewController:(id)arg1;	// IMP=0x0000000100054090
- (void)reset;	// IMP=0x0000000100053f44
@property(readonly, nonatomic) _Bool isConfigured;
- (void)autoAdvance;	// IMP=0x0000000100053e24
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100053d90
- (void)viewDidLoad;	// IMP=0x0000000100053cb0
- (void)dealloc;	// IMP=0x0000000100053c38
- (id)init;	// IMP=0x0000000100053bb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) CDUnknownBlockType menuHandler;
@property(readonly) Class superclass;

@end

