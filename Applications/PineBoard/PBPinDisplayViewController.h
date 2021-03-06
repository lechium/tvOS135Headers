//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSystemUI/TVSUIDigitEntryViewController.h>

#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_source;

@interface PBPinDisplayViewController : TVSUIDigitEntryViewController <UIViewControllerTransitioningDelegate>
{
    double _timeout;	// 8 = 0x8
    CDUnknownBlockType _dismissalCompletion;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_timerSource;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010011d1d4
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timerSource; // @synthesize timerSource=_timerSource;
@property(copy, nonatomic) CDUnknownBlockType dismissalCompletion; // @synthesize dismissalCompletion=_dismissalCompletion;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
- (void)_cancelTimer;	// IMP=0x000000010011d000
- (void)_startTimerIfNecessary;	// IMP=0x000000010011cce4
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x000000010011cc0c
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x000000010011cb94
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x000000010011cac8
- (void)_dismissViewControllerWithValue:(_Bool)arg1;	// IMP=0x000000010011c92c
- (void)_handleHomeButton:(id)arg1;	// IMP=0x000000010011c7f0
- (void)_handleMenuButton:(id)arg1;	// IMP=0x000000010011c6b4
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010011c644
- (void)viewDidLoad;	// IMP=0x000000010011c260
- (void)dealloc;	// IMP=0x000000010011c17c
- (id)initWithNumberOfDigits:(unsigned long long)arg1 separatorIndexes:(id)arg2;	// IMP=0x000000010011c02c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

