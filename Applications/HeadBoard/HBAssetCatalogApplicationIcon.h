//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUINamedLayerStack, NSArray, PBSAppInfo, UIImage, _UIAssetManager;

@interface HBAssetCatalogApplicationIcon : NSObject
{
    PBSAppInfo *_application;	// 8 = 0x8
    _UIAssetManager *_assetManager;	// 16 = 0x10
    UIImage *_layeredImage;	// 24 = 0x18
    CUINamedLayerStack *_layerStack;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010003d1d4
@property(readonly, nonatomic, getter=_layerStack) CUINamedLayerStack *layerStack; // @synthesize layerStack=_layerStack;
@property(readonly, nonatomic, getter=_layeredImage) UIImage *layeredImage; // @synthesize layeredImage=_layeredImage;
@property(readonly, nonatomic, getter=_assetManager) _UIAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property(readonly, nonatomic, getter=_application) PBSAppInfo *application; // @synthesize application=_application;
@property(readonly, nonatomic) NSArray *layers;
- (id)copyFlattenedImage;	// IMP=0x000000010003d010
- (id)flattenedImage;	// IMP=0x000000010003cfcc
- (id)copyRadiosityImage;	// IMP=0x000000010003ce7c
- (id)radiosityImage;	// IMP=0x000000010003ce38
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) struct CGSize size;
- (id)initWithApplication:(id)arg1;	// IMP=0x000000010003cb7c

@end
