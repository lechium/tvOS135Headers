//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MADownloadOptions.h"

@class NSString;

@interface MAMsuDownloadOptions : MADownloadOptions
{
    _Bool _supervised;	// 8 = 0x8
    _Bool _allowSameVersion;	// 9 = 0x9
    _Bool _prerequisiteReleaseTypeIsOverridden;	// 10 = 0xa
    NSString *_requestedProductVersion;	// 16 = 0x10
    long long _delayPeriod;	// 24 = 0x18
    NSString *_prerequisiteBuildVersion;	// 32 = 0x20
    NSString *_prerequisiteProductVersion;	// 40 = 0x28
    NSString *_prerequisiteReleaseType;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010000addc
@property(nonatomic) _Bool prerequisiteReleaseTypeIsOverridden; // @synthesize prerequisiteReleaseTypeIsOverridden=_prerequisiteReleaseTypeIsOverridden;
@property(retain, nonatomic) NSString *prerequisiteReleaseType; // @synthesize prerequisiteReleaseType=_prerequisiteReleaseType;
@property(retain, nonatomic) NSString *prerequisiteProductVersion; // @synthesize prerequisiteProductVersion=_prerequisiteProductVersion;
@property(retain, nonatomic) NSString *prerequisiteBuildVersion; // @synthesize prerequisiteBuildVersion=_prerequisiteBuildVersion;
@property(nonatomic) _Bool allowSameVersion; // @synthesize allowSameVersion=_allowSameVersion;
@property(nonatomic) _Bool supervised; // @synthesize supervised=_supervised;
@property(nonatomic) long long delayPeriod; // @synthesize delayPeriod=_delayPeriod;
@property(retain, nonatomic) NSString *requestedProductVersion; // @synthesize requestedProductVersion=_requestedProductVersion;
- (void)logOptions;	// IMP=0x000000010000b330
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010000b114
- (void)dealloc;	// IMP=0x000000010000b094
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010000ae7c
- (id)init;	// IMP=0x000000010000ade4

@end

