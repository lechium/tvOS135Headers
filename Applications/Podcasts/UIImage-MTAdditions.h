//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (MTAdditions)
+ (id)combineImages:(id)arg1 rowCount:(long long)arg2 size:(struct CGSize)arg3 border:(_Bool)arg4;	// IMP=0x000000010008bec4
+ (void)drawBorder:(struct CGRect)arg1 withContext:(struct CGContext *)arg2;	// IMP=0x000000010008bdb0
+ (id)defaultPodcastArtworkWithWidth:(double)arg1;	// IMP=0x000000010008bd5c
+ (id)defaultPodcastArtwork;	// IMP=0x000000010008bd40
+ (id)infoIcon;	// IMP=0x000000010008bc90
+ (id)multiUncheckIcon;	// IMP=0x000000010008bbe0
+ (id)multiCheckIcon;	// IMP=0x000000010008bb30
+ (id)playedIcon;	// IMP=0x000000010008bb28
+ (id)backCatalogPartiallyPlayedIconForTintColor:(id)arg1;	// IMP=0x000000010008b9c0
+ (id)backCatalogPartiallyPlayedIconForDarkBackground:(_Bool)arg1;	// IMP=0x000000010008b950
+ (id)backCatalogPartiallyPlayedIconForTheme:(id)arg1;	// IMP=0x000000010008b8e8
+ (id)backCatalogIconForTintColor:(id)arg1;	// IMP=0x000000010008b780
+ (id)backCatalogIconForDarkBackground:(_Bool)arg1;	// IMP=0x000000010008b710
+ (id)backCatalogIconForTheme:(id)arg1;	// IMP=0x000000010008b6a8
+ (id)halfPlayedIconForDarkBackground:(_Bool)arg1;	// IMP=0x000000010008b624
+ (id)halfPlayedIconForTheme:(id)arg1;	// IMP=0x000000010008b5e8
+ (id)halfPlayedIcon;	// IMP=0x000000010008b5d8
+ (id)unplayedIconForDarkBackground:(_Bool)arg1;	// IMP=0x000000010008b554
+ (id)unplayedIconForTheme:(id)arg1;	// IMP=0x000000010008b518
+ (id)unplayedIcon;	// IMP=0x000000010008b508
+ (id)nowPlayingIconPaused;	// IMP=0x000000010008b438
+ (id)nowPlayingIcon;	// IMP=0x000000010008b368
+ (id)roundedCornerRectangleWithColorNoTemplate:(id)arg1;	// IMP=0x00000001001d40c0
+ (id)roundedCornerRectangleWithColor:(id)arg1;	// IMP=0x00000001001d3fa0
+ (id)colorSliceImageWithColor:(id)arg1 height:(double)arg2;	// IMP=0x00000001001d3ecc
+ (id)scaledImageWithData:(id)arg1;	// IMP=0x00000001001d3dc8
+ (id)makeDottedLineImageinRect:(struct CGRect)arg1;	// IMP=0x00000001001d3af8
+ (id)uncachedImageNamed:(id)arg1;	// IMP=0x00000001001d39e8
+ (id)imageWithSolidColor:(id)arg1 atSize:(struct CGSize)arg2;	// IMP=0x00000001001d2cb4
+ (id)image:(id)arg1 inRect:(struct CGRect)arg2 withBacking:(id)arg3 opaque:(_Bool)arg4 scale:(double)arg5;	// IMP=0x00000001001d2ae0
+ (id)image:(id)arg1 inRect:(struct CGRect)arg2 withBacking:(id)arg3;	// IMP=0x00000001001d2914
- (id)scaleToSize:(struct CGSize)arg1 addBorder:(_Bool)arg2;	// IMP=0x000000010008c0e8
- (id)im_flatImageWithColor:(id)arg1;	// IMP=0x00000001001d3cd8
- (void)dumpAsPNGToCachesNamed:(id)arg1;	// IMP=0x00000001001d38cc
- (void)debugShowInKeyWindow;	// IMP=0x00000001001d37f0
- (unsigned long long)colorAtPixelX:(unsigned long long)arg1 y:(unsigned long long)arg2;	// IMP=0x00000001001d36e8
- (id)mirroredImage;	// IMP=0x00000001001d362c
- (id)stretchableMirroredImage;	// IMP=0x00000001001d35b8
- (id)imageByRemovingPath:(id)arg1;	// IMP=0x00000001001d33e0
- (id)imageWithComposite:(id)arg1 blendMode:(int)arg2 dstRect:(struct CGRect)arg3;	// IMP=0x00000001001d3224
- (id)imageWithComposite:(id)arg1 blendMode:(int)arg2;	// IMP=0x00000001001d3184
- (id)im_imageWithBackgroundColor:(id)arg1;	// IMP=0x00000001001d3094
- (id)imageWithGradientAngle:(double)arg1 startColor:(id)arg2 endColor:(id)arg3;	// IMP=0x00000001001d2d64
- (id)imageMaskWithColor:(id)arg1;	// IMP=0x00000001001d2798
- (id)imageWithTint:(id)arg1;	// IMP=0x00000001001d2660
- (id)squareImage;	// IMP=0x00000001001d24c0
- (id)imageWithCropRect:(struct CGRect)arg1;	// IMP=0x00000001001d23ac
- (id)imageWithWidth:(double)arg1 leftCapWidth:(long long)arg2 rightCapWidth:(long long)arg3;	// IMP=0x00000001001d2110
- (id)imageWithWidth:(double)arg1 leftCapWidth:(long long)arg2;	// IMP=0x00000001001d2100
- (id)imageWithMaxBounds:(struct CGSize)arg1;	// IMP=0x00000001001d20f0
- (id)imageWithSize:(struct CGSize)arg1 resizeOptions:(int)arg2;	// IMP=0x00000001001d1d9c
- (id)imageWithSize:(struct CGSize)arg1 preserveAspectRatio:(_Bool)arg2;	// IMP=0x00000001001d1d90
- (id)imageWithSize:(struct CGSize)arg1;	// IMP=0x00000001001d1d80
@end
