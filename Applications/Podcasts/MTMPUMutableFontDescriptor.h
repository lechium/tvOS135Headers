//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTMPUFontDescriptor.h"

@interface MTMPUMutableFontDescriptor : MTMPUFontDescriptor
{
}

- (void)_resetToDefaultValues;	// IMP=0x00000001001e183c
- (id)_copyAllowingGlobalCacheLookup:(_Bool)arg1;	// IMP=0x00000001001e1720
@property(nonatomic) _Bool wantsMonospaceNumbers; // @dynamic wantsMonospaceNumbers;
@property(nonatomic) _Bool usesCondensedMetrics; // @dynamic usesCondensedMetrics;
@property(nonatomic) _Bool usesItalic; // @dynamic usesItalic;
@property(nonatomic) long long weight; // @dynamic weight;
@property(nonatomic) long long textStyle; // @dynamic textStyle;
@property(nonatomic) double systemFontSize; // @dynamic systemFontSize;
@property(nonatomic) long long leadingAdjustment; // @dynamic leadingAdjustment;
@property(nonatomic) double defaultPointSizeAdjustment; // @dynamic defaultPointSizeAdjustment;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001e15a0

@end

