//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVPImageRepresentation.h"

@class TVImageProxy;

@interface _TVImageProxyRepresentation : TVPImageRepresentation
{
    TVImageProxy *_imageProxy;	// 80 = 0x50
    struct CGImage *_originalImage;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000100010de4
- (id)_originalImageCacheKey;	// IMP=0x0000000100010d68
- (struct CGImage *)_originalImage;	// IMP=0x0000000100010b44
- (void)loadImageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100010864
- (void)dealloc;	// IMP=0x00000001000107f8
- (id)initWithImageProxy:(id)arg1;	// IMP=0x0000000100010760

@end
