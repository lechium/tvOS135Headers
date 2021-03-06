//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BKDisplayAnnotationRenderer.h"

@class CALayer, NSArray, NSMutableDictionary;

@interface BKDisplayAnnotationContainedSubnodeRenderer : BKDisplayAnnotationRenderer
{
    CALayer *_backgroundLayer;	// 8 = 0x8
    NSMutableDictionary *_sectionTitleAnnotations;	// 16 = 0x10
    NSArray *_subannotations;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100051ce8
@property(retain, nonatomic) NSArray *subannotations; // @synthesize subannotations=_subannotations;
@property(retain, nonatomic) NSMutableDictionary *sectionTitleAnnotations; // @synthesize sectionTitleAnnotations=_sectionTitleAnnotations;
@property(retain, nonatomic) CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
- (void)layoutAnnotationStack:(id)arg1;	// IMP=0x00000001000511bc
- (struct CGSize)_getFrames:(struct CGRect *)arg1 ofAnnotations:(id)arg2 fixSuperlayer:(id)arg3 scale:(double)arg4;	// IMP=0x0000000100050f20
- (void)regenerateLayerTree;	// IMP=0x0000000100050df0
- (void)styleSheetDidChange;	// IMP=0x0000000100050b98
- (_Bool)shouldRenderWithSupernode;	// IMP=0x0000000100050b90

@end

