//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKDisplayAnnotationController, BKDisplayAnnotationLocation, BKDisplayAnnotationRenderer, BKDisplayAnnotationStyleSheet, BKNamespaceNode, NSString;
@protocol BKDisplayAnnotationContent;

@interface BKDisplayAnnotation : NSObject
{
    BKDisplayAnnotationLocation *_location;	// 8 = 0x8
    BKDisplayAnnotationRenderer *_renderer;	// 16 = 0x10
    NSString *_section;	// 24 = 0x18
    long long _subnodeScreenEdgeTreatment;	// 32 = 0x20
    id <BKDisplayAnnotationContent> _content;	// 40 = 0x28
    BKDisplayAnnotationController *_annotationController;	// 48 = 0x30
    BKDisplayAnnotationStyleSheet *_styleSheet;	// 56 = 0x38
    BKNamespaceNode *_namespaceNode;	// 64 = 0x40
}

+ (id)new;	// IMP=0x0000000100067060
+ (id)annotationWithRectangleSize:(struct CGSize)arg1;	// IMP=0x0000000100066f64
+ (id)annotationWithEllipseSize:(struct CGSize)arg1;	// IMP=0x0000000100066e68
+ (id)subannotationWithString:(id)arg1;	// IMP=0x0000000100066e08
+ (id)annotationWithString:(id)arg1;	// IMP=0x0000000100066d04
- (void).cxx_destruct;	// IMP=0x0000000100066ca0
@property(nonatomic) __weak BKNamespaceNode *namespaceNode; // @synthesize namespaceNode=_namespaceNode;
@property(retain, nonatomic) BKDisplayAnnotationStyleSheet *styleSheet; // @synthesize styleSheet=_styleSheet;
@property(nonatomic) __weak BKDisplayAnnotationController *annotationController; // @synthesize annotationController=_annotationController;
@property(retain, nonatomic) id <BKDisplayAnnotationContent> content; // @synthesize content=_content;
@property(nonatomic) long long subnodeScreenEdgeTreatment; // @synthesize subnodeScreenEdgeTreatment=_subnodeScreenEdgeTreatment;
@property(copy, nonatomic) NSString *section; // @synthesize section=_section;
@property(retain, nonatomic) BKDisplayAnnotationRenderer *renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) BKDisplayAnnotationLocation *location; // @synthesize location=_location;
- (void)setStyleModifier:(id)arg1;	// IMP=0x0000000100066bd0
- (void)modifyStyleSheet:(CDUnknownBlockType)arg1;	// IMP=0x0000000100066b98
- (void)setShapeSize:(struct CGSize)arg1;	// IMP=0x0000000100066b44
- (void)setString:(id)arg1;	// IMP=0x0000000100066a8c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000667d8
- (id)description;	// IMP=0x00000001000667c8
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000100066748
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000001000666f4
- (id)succinctDescriptionBuilder;	// IMP=0x00000001000666dc
- (id)succinctDescription;	// IMP=0x0000000100066688
- (id)_init;	// IMP=0x00000001000665e4
- (id)init;	// IMP=0x0000000100066514

@end
