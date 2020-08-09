//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSTransaction.h>

@class PBSystemOverlayPresentationRequest, UIViewController;
@protocol PBSystemOverlayContentPresenting, PBSystemUIPresenting;

@interface PBSystemOverlayPresentationTransaction : BSTransaction
{
    PBSystemOverlayPresentationRequest *_request;	// 8 = 0x8
    UIViewController<PBSystemOverlayContentPresenting> *_viewController;	// 16 = 0x10
    long long _layoutLevel;	// 24 = 0x18
    id <PBSystemUIPresenting> _presentationDelegate;	// 32 = 0x20
    id _interruptionContext;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100101130
@property(readonly, nonatomic) id interruptionContext; // @synthesize interruptionContext=_interruptionContext;
@property(readonly, nonatomic) __weak id <PBSystemUIPresenting> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property(readonly, nonatomic) long long layoutLevel; // @synthesize layoutLevel=_layoutLevel;
@property(readonly, nonatomic) UIViewController<PBSystemOverlayContentPresenting> *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) PBSystemOverlayPresentationRequest *request; // @synthesize request=_request;
- (void)_begin;	// IMP=0x0000000100100bbc
- (void)interruptWithContext:(id)arg1;	// IMP=0x0000000100100b40
- (_Bool)_canBeInterrupted;	// IMP=0x0000000100100af0
- (id)initWithRequest:(id)arg1 viewController:(id)arg2 layoutLevel:(long long)arg3 presentationDelegate:(id)arg4;	// IMP=0x0000000100100904
- (id)init;	// IMP=0x00000001001008c0

@end
