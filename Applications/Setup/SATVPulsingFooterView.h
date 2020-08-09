//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SATVFooterView.h"

#import "SATVPulsingView-Protocol.h"
#import "SATVPulsingViewImpl-Protocol.h"

@class NSString;
@protocol SATVPulsingAnimationDelegate;

@interface SATVPulsingFooterView : SATVFooterView <SATVPulsingViewImpl, SATVPulsingView>
{
    _Bool _opacityRunning;	// 8 = 0x8
    _Bool _scaleRunning;	// 9 = 0x9
    unsigned long long _mode;	// 16 = 0x10
    id <SATVPulsingAnimationDelegate> _animationDelegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000869a0
@property(nonatomic) _Bool scaleRunning; // @synthesize scaleRunning=_scaleRunning;
@property(nonatomic) _Bool opacityRunning; // @synthesize opacityRunning=_opacityRunning;
@property(nonatomic) __weak id <SATVPulsingAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x00000001000867bc
- (void)pulseAtBeginTime:(double)arg1;	// IMP=0x00000001000865b4
- (void)layoutSubviews;	// IMP=0x00000001000864ac
- (id)initWithMode:(unsigned long long)arg1;	// IMP=0x000000010008644c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
