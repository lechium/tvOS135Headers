//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVImageScaleDecorator.h>

@class UIImage;

@interface TVMusicBlurDecorator : TVImageScaleDecorator
{
    UIImage *_overlayImage;	// 8 = 0x8
}

+ (id)blurDecoratorForDataIsPrivate;	// IMP=0x000000010004edc4
- (void).cxx_destruct;	// IMP=0x000000010004f354
@property(readonly, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
- (id)decoratorIdentifier;	// IMP=0x000000010004f22c
- (id)decorate:(id)arg1 scaledWithSize:(struct CGSize)arg2 croppedToFit:(_Bool)arg3;	// IMP=0x000000010004eeb0
- (id)initWithOverlayImage:(id)arg1;	// IMP=0x000000010004ee30

@end
