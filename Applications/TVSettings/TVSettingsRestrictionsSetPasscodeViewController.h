//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TVSUIDigitEntryViewControllerDelegate-Protocol.h"

@class NSString, TVSUIDigitEntryViewController;

@interface TVSettingsRestrictionsSetPasscodeViewController : UIViewController <TVSUIDigitEntryViewControllerDelegate>
{
    _Bool _verificationPhase;	// 8 = 0x8
    TVSUIDigitEntryViewController *_passcodeEntryViewController;	// 16 = 0x10
    NSString *_passcodeToConfirm;	// 24 = 0x18
    CDUnknownBlockType _completion;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000c98e8
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool verificationPhase; // @synthesize verificationPhase=_verificationPhase;
@property(retain, nonatomic) NSString *passcodeToConfirm; // @synthesize passcodeToConfirm=_passcodeToConfirm;
@property(retain, nonatomic) TVSUIDigitEntryViewController *passcodeEntryViewController; // @synthesize passcodeEntryViewController=_passcodeEntryViewController;
- (void)digitEntryViewControllerDidFinish:(id)arg1;	// IMP=0x00000001000c9188
- (void)digitEntryViewControllerDidCancel:(id)arg1;	// IMP=0x00000001000c9114
- (void)viewWillLayoutSubviews;	// IMP=0x00000001000c901c
- (void)viewDidLoad;	// IMP=0x00000001000c8f48
- (id)preferredFocusEnvironments;	// IMP=0x00000001000c8ef4
- (id)initWithTitle:(id)arg1 prompt:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000c8c40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

