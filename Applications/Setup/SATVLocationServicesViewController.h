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

@interface SATVLocationServicesViewController : SATVStepViewController <SATVConsentViewControllerDelegate, SATVConsentViewControllerDataSource, SATVConsentStep>
{
    CDUnknownBlockType consentHandler;	// 8 = 0x8
    OBPrivacyLinkController *_privacyLink;	// 16 = 0x10
}

+ (id)stableKey;	// IMP=0x000000010001fd08
- (void).cxx_destruct;	// IMP=0x0000000100020514
@property(retain, nonatomic) OBPrivacyLinkController *privacyLink; // @synthesize privacyLink=_privacyLink;
@property(copy, nonatomic) CDUnknownBlockType consentHandler; // @synthesize consentHandler;
- (void)_enableLocationServices:(_Bool)arg1;	// IMP=0x000000010002036c
- (void)consentViewControllerDidSelectDissent:(id)arg1;	// IMP=0x00000001000202e8
- (void)consentViewControllerDidSelectConsent:(id)arg1;	// IMP=0x0000000100020264
- (id)footerButtonViewForConsentViewController:(id)arg1;	// IMP=0x000000010002024c
- (id)dissentButtonTextForConsentViewController:(id)arg1;	// IMP=0x00000001000201cc
- (id)consentButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010002014c
- (id)subtitleTextForConsentViewController:(id)arg1;	// IMP=0x00000001000200cc
- (id)titleTextForConsentViewController:(id)arg1;	// IMP=0x000000010002004c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010001ffb8
- (void)reset;	// IMP=0x000000010001fee4
@property(readonly, nonatomic) _Bool isConfigured;
- (void)autoAdvance;	// IMP=0x000000010001fe78
- (void)viewDidLoad;	// IMP=0x000000010001fd98
- (id)init;	// IMP=0x000000010001fd14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) CDUnknownBlockType menuHandler;
@property(readonly) Class superclass;

@end

