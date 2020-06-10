//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSDPlatform : NSObject
{
    _Bool __watchOS;	// 8 = 0x8
    _Bool __tvOS;	// 9 = 0x9
    _Bool __iOS;	// 10 = 0xa
}

+ (_Bool)iOSHub;	// IMP=0x0000000100005ce4
+ (id)sharedInstance;	// IMP=0x00000001000055cc
@property _Bool _iOS; // @synthesize _iOS=__iOS;
@property _Bool _tvOS; // @synthesize _tvOS=__tvOS;
@property _Bool _watchOS; // @synthesize _watchOS=__watchOS;
- (_Bool)iOS;	// IMP=0x0000000100005cd8
- (_Bool)tvOS;	// IMP=0x0000000100005ccc
- (_Bool)watchOS;	// IMP=0x0000000100005cc0
- (void)raiseInvalidProductListExceptionWithReason:(id)arg1;	// IMP=0x0000000100005bb4
- (_Bool)isValidProductList:(id)arg1;	// IMP=0x0000000100005954
- (void)setPlatformWithManifestProductList:(id)arg1;	// IMP=0x000000010000572c
- (id)init;	// IMP=0x0000000100005638

@end
