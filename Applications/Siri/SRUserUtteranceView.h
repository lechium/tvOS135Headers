//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SRTapToEditView, SUICStreamingTextView;

@interface SRUserUtteranceView : UIView
{
    struct NSDirectionalEdgeInsets _edgeInsets;	// 8 = 0x8
    SUICStreamingTextView *_clonedStreamingTextView;	// 40 = 0x28
    SUICStreamingTextView *_streamingTextView;	// 48 = 0x30
    _Bool _blendEffectEnabled;	// 56 = 0x38
    SRTapToEditView *_tapToEditView;	// 64 = 0x40
    _Bool _chevronHasBeenShown;	// 72 = 0x48
    _Bool _editable;	// 73 = 0x49
}

+ (double)insertionAnimatedZPosition;	// IMP=0x0000000100061ef0
- (void).cxx_destruct;	// IMP=0x0000000100062f34
@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
- (double)_scaledSiriTapToEditViewLeading;	// IMP=0x0000000100062eb4
- (double)_indentWidth;	// IMP=0x0000000100062e80
- (double)_streamingTextMaxYToTapToEditOriginDistance;	// IMP=0x0000000100062d9c
- (void)layoutSubviews;	// IMP=0x0000000100062b34
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100062a48
@property(nonatomic, getter=isBlendEffectEnabled) _Bool blendEffectEnabled;
@property(copy, nonatomic) NSString *text;
- (double)baselineOffsetFromBottom;	// IMP=0x0000000100061f58
- (double)firstLineBaselineOffsetFromTop;	// IMP=0x0000000100061efc
- (void)setChevronHidden:(_Bool)arg1;	// IMP=0x0000000100061e94
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100061cbc

@end
