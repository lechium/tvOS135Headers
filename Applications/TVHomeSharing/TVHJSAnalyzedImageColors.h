//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import "TVHJSAnalyzedImageColors-Protocol.h"

@class TVHAnalyzedImageColors;

@interface TVHJSAnalyzedImageColors : IKJSObject <TVHJSAnalyzedImageColors>
{
    TVHAnalyzedImageColors *_wrappedAnalyzedImageColors;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100030360
@property(retain, nonatomic) TVHAnalyzedImageColors *wrappedAnalyzedImageColors; // @synthesize wrappedAnalyzedImageColors=_wrappedAnalyzedImageColors;
@property(readonly, nonatomic) _Bool isBackgroundLight;
- (id)initWithAnalyzedImageColors:(id)arg1 appContext:(id)arg2;	// IMP=0x0000000100030268
- (id)initWithAppContext:(id)arg1;	// IMP=0x00000001000301e0

@end

