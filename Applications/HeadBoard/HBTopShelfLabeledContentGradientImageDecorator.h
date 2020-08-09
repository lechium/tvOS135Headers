//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVImageDecorator.h>

@class NSNumber;

@interface HBTopShelfLabeledContentGradientImageDecorator : TVImageDecorator
{
    double _progress;	// 8 = 0x8
    NSNumber *_playbackPercentage;	// 16 = 0x10
    struct CGSize _scaleToSize;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010000cfd8
@property(nonatomic) struct CGSize scaleToSize; // @synthesize scaleToSize=_scaleToSize;
@property(retain, nonatomic) NSNumber *playbackPercentage; // @synthesize playbackPercentage=_playbackPercentage;
- (id)decoratorIdentifier;	// IMP=0x000000010000cf30
- (struct CGSize)expectedSize;	// IMP=0x000000010000cf24
- (id)decorate:(id)arg1 scaledWithSize:(struct CGSize)arg2 croppedToFit:(_Bool)arg3;	// IMP=0x000000010000ca04

@end

