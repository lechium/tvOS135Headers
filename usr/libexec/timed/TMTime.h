//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface TMTime : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _synthesized;	// 8 = 0x8
    _Bool _reliability;	// 9 = 0x9
    long long _rtc_ns;	// 16 = 0x10
    long long _utc_ns;	// 24 = 0x18
    double _utcUnc_s;	// 32 = 0x20
    double _sf;	// 40 = 0x28
    double _sfUnc;	// 48 = 0x30
    NSString *_source;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100012700
+ (id)timeWithUtc_s:(double)arg1 utcUnc_s:(double)arg2 rtc_s:(double)arg3 sf:(double)arg4 source:(id)arg5;	// IMP=0x0000000100012478
+ (id)timeWithDictionary:(id)arg1;	// IMP=0x0000000100012b6c
@property(nonatomic) _Bool reliability; // @synthesize reliability=_reliability;
@property(nonatomic, getter=isSynthesized) _Bool synthesized; // @synthesize synthesized=_synthesized;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) double sfUnc; // @synthesize sfUnc=_sfUnc;
@property(nonatomic) double sf; // @synthesize sf=_sf;
@property(nonatomic) double utcUnc_s; // @synthesize utcUnc_s=_utcUnc_s;
@property(nonatomic) long long utc_ns; // @synthesize utc_ns=_utc_ns;
@property(nonatomic) long long rtc_ns; // @synthesize rtc_ns=_rtc_ns;
- (_Bool)isEquivalent:(id)arg1;	// IMP=0x00000001000129f8
- (id)description;	// IMP=0x000000010001294c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100012808
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100012708
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000126a8
- (void)dealloc;	// IMP=0x0000000100012430
- (id)initWithUtc_ns:(long long)arg1 utcUnc_s:(double)arg2 rtc_ns:(long long)arg3 sf:(double)arg4 sfUnc:(double)arg5 source:(id)arg6;	// IMP=0x000000010001238c
- (id)init;	// IMP=0x0000000100012368
- (id)dictionary;	// IMP=0x0000000100012ca4
@property(nonatomic) double utc_s;
@property(nonatomic) double rtc_s;

@end

