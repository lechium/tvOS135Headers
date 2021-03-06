//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SRUtteranceCorrectionTextViewDelegate-Protocol.h"

@class NSString, SRSpeechRecognizedCorrectionTextView, UIVisualEffectView;
@protocol SREditableTextViewDelegate;

@interface SREditableTextView : UIView <SRUtteranceCorrectionTextViewDelegate>
{
    struct NSDirectionalEdgeInsets _edgeInsets;	// 8 = 0x8
    SRSpeechRecognizedCorrectionTextView *_textView;	// 40 = 0x28
    UIVisualEffectView *_blurView;	// 48 = 0x30
    double _topOffsetForTextView;	// 56 = 0x38
    double _heightOffsetForTextView;	// 64 = 0x40
    _Bool _editable;	// 72 = 0x48
    _Bool _didCorrect;	// 73 = 0x49
    id <SREditableTextViewDelegate> _delegate;	// 80 = 0x50
    long long _textAlignment;	// 88 = 0x58
}

+ (double)insertionAnimatedZPosition;	// IMP=0x0000000100025e3c
- (void).cxx_destruct;	// IMP=0x0000000100026964
@property(nonatomic) _Bool didCorrect; // @synthesize didCorrect=_didCorrect;
@property(nonatomic) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) __weak id <SREditableTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)utteranceTextDidReceiveReturnKey:(id)arg1;	// IMP=0x0000000100026818
- (void)utteranceTextDidResignFirstResponder:(id)arg1;	// IMP=0x00000001000267c0
- (void)utteranceTextDidBecomeFirstResponder:(id)arg1;	// IMP=0x00000001000267b4
- (double)_indentWidth;	// IMP=0x0000000100026780
- (void)textViewDidChange:(id)arg1;	// IMP=0x00000001000266e4
- (void)textViewDidEndEditing:(id)arg1;	// IMP=0x00000001000266bc
- (_Bool)textViewShouldBeginEditing:(id)arg1;	// IMP=0x0000000100026618
- (void)setDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;	// IMP=0x00000001000265a0
- (void)_adjustLineSpacing;	// IMP=0x0000000100026488
- (void)endEditingAndCorrect:(_Bool)arg1;	// IMP=0x00000001000263c0
- (void)beginEditing;	// IMP=0x00000001000263b4
- (void)_requestKeyboardFocusAndBecomeFirstResponder;	// IMP=0x000000010002628c
- (void)_handleTap:(id)arg1;	// IMP=0x0000000100026240
- (_Bool)isFirstResponder;	// IMP=0x0000000100026228
- (_Bool)resignFirstResponder;	// IMP=0x00000001000261d0
- (_Bool)canResignFirstResponder;	// IMP=0x00000001000261b8
- (void)layoutSubviews;	// IMP=0x000000010002607c
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000100026048
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100025fe0
@property(copy, nonatomic) NSString *text;
- (double)baselineOffsetFromBottom;	// IMP=0x0000000100025ea4
- (double)firstLineBaselineOffsetFromTop;	// IMP=0x0000000100025e48
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000259b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

