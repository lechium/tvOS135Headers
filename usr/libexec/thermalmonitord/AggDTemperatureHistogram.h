//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AggDTemperatureHistogram : NSObject
{
    unsigned long long _bins[32];	// 8 = 0x8
    unsigned long long _sampleCount;	// 264 = 0x108
    int _idx;	// 272 = 0x110
    const int *_binBoundaries;	// 280 = 0x118
    int _mostRecentBin;	// 288 = 0x120
}

- (void)uploadToAggD;	// IMP=0x0000000100017bd8
- (void)incrementMostRecentBin:(unsigned int)arg1;	// IMP=0x0000000100017bb4
- (void)incrementBinForTemperature:(int)arg1 count:(unsigned int)arg2;	// IMP=0x0000000100017b60
- (void)incrementBinForTemperature:(int)arg1;	// IMP=0x0000000100017b50
- (int)temperatureToHistogramBinIndex:(int)arg1;	// IMP=0x0000000100017b24
- (id)initWithIndex:(int)arg1 histogramType:(int)arg2;	// IMP=0x0000000100017a7c

@end

