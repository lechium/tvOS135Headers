//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVPImageRepresentation.h"

@protocol UINamedLayerImage;

@interface _TVImageNamedLayerImageRepresentation : TVPImageRepresentation
{
    id <UINamedLayerImage> _namedLayerImage;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000100010f98
- (id)_originalImageCacheKey;	// IMP=0x0000000100010f50
- (struct CGImage *)_originalImage;	// IMP=0x0000000100010ea0
- (id)initWithNamedLayerImage:(id)arg1;	// IMP=0x0000000100010df8

@end
