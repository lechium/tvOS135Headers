//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PBSystemOverlayContentPresenting-Protocol.h"
#import "UIPresentationControllerDelegatePrivate-Protocol.h"

@class NSString;
@protocol PBSystemOverlayContentDelegate;

@interface PBContentPresentingViewController : UIViewController <UIPresentationControllerDelegatePrivate, PBSystemOverlayContentPresenting>
{
    _Bool _interruptible;	// 8 = 0x8
    _Bool _acceptsEventFocus;	// 9 = 0x9
    _Bool _dismissalTriggeredBySystem;	// 10 = 0xa
    id <PBSystemOverlayContentDelegate> _contentDelegate;	// 16 = 0x10
    UIViewController *_contentViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010010b8ec
@property(readonly, nonatomic) _Bool dismissalTriggeredBySystem; // @synthesize dismissalTriggeredBySystem=_dismissalTriggeredBySystem;
@property(readonly, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) _Bool acceptsEventFocus; // @synthesize acceptsEventFocus=_acceptsEventFocus;
@property(nonatomic) __weak id <PBSystemOverlayContentDelegate> contentDelegate; // @synthesize contentDelegate=_contentDelegate;
@property(readonly, nonatomic, getter=isInterruptible) _Bool interruptible; // @synthesize interruptible=_interruptible;
- (void)_didDismiss:(id)arg1;	// IMP=0x000000010010b6b4
- (void)_willDismiss:(id)arg1;	// IMP=0x000000010010b5f8
- (void)dismissContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010010b3c4
- (void)presentContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010010b0d4
@property(readonly, nonatomic) _Bool expectsEventForwarding;
- (_Bool)definesPresentationContext;	// IMP=0x000000010010b09c
- (void)dealloc;	// IMP=0x000000010010af58
- (id)initWithContentViewController:(id)arg1 supportsInterruption:(_Bool)arg2;	// IMP=0x000000010010ad10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

