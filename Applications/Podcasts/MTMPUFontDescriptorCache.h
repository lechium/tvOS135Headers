//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTMPUMutableFontDescriptor, NSMutableArray;

@interface MTMPUFontDescriptorCache : NSObject
{
    MTMPUMutableFontDescriptor *_reusableMutableFontDescriptor;	// 8 = 0x8
    unsigned long long _maximumCapacity;	// 16 = 0x10
    NSMutableArray *_orderedCachedFontDescriptors;	// 24 = 0x18
}

+ (id)sharedFontDescriptorCache;	// IMP=0x00000001001fc97c
- (void).cxx_destruct;	// IMP=0x00000001001fcde0
- (id)_cachedImmutableFontDescriptorMatchingMutableFontDescriptor:(id)arg1;	// IMP=0x00000001001fcce8
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;	// IMP=0x00000001001fcc08
- (id)cachedImmutableFontDescriptorMatchingMutableFontDescriptor:(id)arg1;	// IMP=0x00000001001fcbd8
- (id)cachedImmutableFontDescriptorForConfigurationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001fcb2c
- (void)dealloc;	// IMP=0x00000001001fcaa4
- (id)init;	// IMP=0x00000001001fc9e8

@end

