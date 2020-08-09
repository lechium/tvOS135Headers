//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TVDAInternalStepViewControllerDescribing-Protocol.h"

@class NSString, TVDALoadingStep, UIActivityIndicatorView, UILabel;

@interface TVDASpinnerViewController : UIViewController <TVDAInternalStepViewControllerDescribing>
{
    TVDALoadingStep *_loadingStep;	// 8 = 0x8
    UILabel *_internalDescriptionLabel;	// 16 = 0x10
    UIActivityIndicatorView *_spinnerView;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    CDUnknownBlockType _completionHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100006bf0
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIActivityIndicatorView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(readonly, nonatomic) UILabel *internalDescriptionLabel; // @synthesize internalDescriptionLabel=_internalDescriptionLabel;
@property(readonly, nonatomic) TVDALoadingStep *loadingStep; // @synthesize loadingStep=_loadingStep;
- (void)_handleMenuPress:(id)arg1;	// IMP=0x0000000100006ab8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100006a48
- (void)viewDidLoad;	// IMP=0x0000000100006460
- (id)initWithLoadingStep:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000061b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

