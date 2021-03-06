//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface BKDisplayAnnotationLocation : NSObject <NSCopying>
{
    _Bool _inhibitRotation;	// 8 = 0x8
    _Bool _shouldAutoposition;	// 9 = 0x9
    struct CGPoint _superBias;	// 16 = 0x10
    struct CGPoint _point;	// 32 = 0x20
}

+ (id)relativeToBottomMiddleOfSuper:(struct CGPoint)arg1;	// IMP=0x0000000100065680
+ (id)relativeToBottomLeftOfSuper:(struct CGPoint)arg1;	// IMP=0x00000001000655fc
+ (id)relativeToTopLeftOfSuper:(struct CGPoint)arg1;	// IMP=0x0000000100065578
+ (id)centerAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000100065508
+ (id)controlledBySupernode;	// IMP=0x00000001000654c8
@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
@property(nonatomic) struct CGPoint superBias; // @synthesize superBias=_superBias;
@property(nonatomic) _Bool shouldAutoposition; // @synthesize shouldAutoposition=_shouldAutoposition;
@property(nonatomic) _Bool inhibitRotation; // @synthesize inhibitRotation=_inhibitRotation;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000653a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100065358

@end

