//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVMusicLyricsLineLabel.h"

@class NSArray;

@interface TVMusicPlaceholderCountdownLabel : TVMusicLyricsLineLabel
{
    NSArray *_labels;	// 8 = 0x8
    double _progress;	// 16 = 0x10
    double _progressAlpha;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000c8778
@property(nonatomic) double progressAlpha; // @synthesize progressAlpha=_progressAlpha;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)layoutSubviews;	// IMP=0x00000001000c85a8
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000c8424
- (void)setTextColor:(id)arg1;	// IMP=0x00000001000c82d4
- (void)_setProgress:(double)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000c80e0
- (id)init;	// IMP=0x00000001000c7d7c

@end
