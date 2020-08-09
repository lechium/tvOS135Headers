//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUIAceObjectViewController.h>

@class NSString, SRServerUtteranceView;

@interface SRServerUtteranceController : SiriUIAceObjectViewController
{
    SRServerUtteranceView *_utteranceView;	// 8 = 0x8
    NSString *_utterance;	// 16 = 0x10
    NSString *_utterancePrefix;	// 24 = 0x18
    _Bool _isTip;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010006a048
- (double)_insertionAnimatedZPosition;	// IMP=0x000000010006a034
- (long long)_replacementAnimation;	// IMP=0x000000010006a02c
- (long long)_insertionAnimation;	// IMP=0x000000010006a024
- (long long)_pinAnimationType;	// IMP=0x000000010006a01c
- (_Bool)_shouldSkipAnimationsInAlternateSpeeds;	// IMP=0x000000010006a014
- (double)_scaledTopPadding;	// IMP=0x0000000100069fb0
- (double)_extendedTopPadding;	// IMP=0x0000000100069f08
- (double)baselineOffsetFromBottom;	// IMP=0x0000000100069ef0
- (double)desiredTopPaddingBelowController:(id)arg1;	// IMP=0x0000000100069ddc
- (double)desiredHeightForWidth:(double)arg1;	// IMP=0x0000000100069d78
- (id)description;	// IMP=0x0000000100069cf0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100069bfc
- (void)loadView;	// IMP=0x000000010006991c
- (void)_loadFromObject:(id)arg1;	// IMP=0x0000000100069608
- (void)setAceObject:(id)arg1;	// IMP=0x0000000100069568

@end
