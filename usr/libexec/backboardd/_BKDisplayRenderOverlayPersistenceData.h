//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class BKSDisplayRenderOverlayDescriptor, NSData;

@interface _BKDisplayRenderOverlayPersistenceData : NSObject <NSSecureCoding>
{
    float _level;	// 8 = 0x8
    long long _overlayType;	// 16 = 0x10
    BKSDisplayRenderOverlayDescriptor *_descriptor;	// 24 = 0x18
    struct CGImage *_image;	// 32 = 0x20
    NSData *_imageData;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000280e0
+ (id)classesRequiredToDecode;	// IMP=0x0000000100028054
- (void).cxx_destruct;	// IMP=0x0000000100027f14
@property(nonatomic) float level; // @synthesize level=_level;
@property(nonatomic) struct CGImage *image; // @synthesize image=_image;
@property(retain, nonatomic) BKSDisplayRenderOverlayDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(nonatomic) long long overlayType; // @synthesize overlayType=_overlayType;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100027d94
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100027cbc
- (void)dealloc;	// IMP=0x0000000100027c20
- (id)_initWithDescriptor:(id)arg1 overlayType:(long long)arg2 imageData:(id)arg3 level:(float)arg4;	// IMP=0x0000000100027b50

@end

