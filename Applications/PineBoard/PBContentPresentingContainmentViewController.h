//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PBSystemOverlayContentPresenting-Protocol.h"

@protocol PBSystemOverlayContentDelegate;

@interface PBContentPresentingContainmentViewController : UIViewController <PBSystemOverlayContentPresenting>
{
    _Bool _interruptible;	// 8 = 0x8
    _Bool _acceptsEventFocus;	// 9 = 0x9
    _Bool _expectsEventForwarding;	// 10 = 0xa
    _Bool _allowsInteraction;	// 11 = 0xb
    id <PBSystemOverlayContentDelegate> _contentDelegate;	// 16 = 0x10
    UIViewController *_childViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010014f2c8
@property(readonly, nonatomic) _Bool allowsInteraction; // @synthesize allowsInteraction=_allowsInteraction;
@property(readonly, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(nonatomic) _Bool acceptsEventFocus; // @synthesize acceptsEventFocus=_acceptsEventFocus;
@property(nonatomic) __weak id <PBSystemOverlayContentDelegate> contentDelegate; // @synthesize contentDelegate=_contentDelegate;
- (void)dismissContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010014f008
- (void)presentContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010014ed90
@property(readonly, nonatomic, getter=isInterruptible) _Bool interruptible; // @synthesize interruptible=_interruptible;
@property(readonly, nonatomic) _Bool expectsEventForwarding; // @synthesize expectsEventForwarding=_expectsEventForwarding;
- (id)initWithChildViewController:(id)arg1 allowsInteraction:(_Bool)arg2 expectsEventForwarding:(_Bool)arg3;	// IMP=0x000000010014ebfc

@end

