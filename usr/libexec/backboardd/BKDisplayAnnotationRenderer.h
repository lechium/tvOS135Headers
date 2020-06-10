//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKDisplayAnnotation, CALayer;

@interface BKDisplayAnnotationRenderer : NSObject
{
    _Bool _shouldReapplyStyles;	// 8 = 0x8
    BKDisplayAnnotation *_annotation;	// 16 = 0x10
    CALayer *_layer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010003d478
@property(retain, nonatomic) CALayer *layer; // @synthesize layer=_layer;
@property(nonatomic) __weak BKDisplayAnnotation *annotation; // @synthesize annotation=_annotation;
- (void)regenerateLayerTree;	// IMP=0x000000010003d278
- (void)sizeLayerToFitAtScale:(double)arg1;	// IMP=0x000000010003d1e4
- (void)styleSheetDidChange;	// IMP=0x000000010003cf30
- (void)didRemoveSubannotations;	// IMP=0x000000010003cf24
- (void)didRemoveAnnotation;	// IMP=0x000000010003cee4
- (void)locationDidChange;	// IMP=0x000000010003cbe4
- (void)didAddAnnotation;	// IMP=0x000000010003cbd8
@property(readonly, nonatomic) _Bool shouldRenderWithSupernode;

@end

