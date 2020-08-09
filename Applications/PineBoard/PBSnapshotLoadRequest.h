//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface PBSnapshotLoadRequest : NSObject <NSCopying>
{
    _Bool _preferLaunchImage;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    double _preferredScaleFactor;	// 24 = 0x18
    NSString *_variant;	// 32 = 0x20
}

+ (id)requestWithBundleIdentifier:(id)arg1;	// IMP=0x00000001000520d8
- (void).cxx_destruct;	// IMP=0x0000000100052838
@property(copy, nonatomic) NSString *variant; // @synthesize variant=_variant;
@property(nonatomic) double preferredScaleFactor; // @synthesize preferredScaleFactor=_preferredScaleFactor;
@property(nonatomic) _Bool preferLaunchImage; // @synthesize preferLaunchImage=_preferLaunchImage;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (unsigned long long)hash;	// IMP=0x00000001000525e4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100052294
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100052190

@end

