//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSDate, NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKKSRateLimiter : NSObject <NSSecureCoding>
{
    NSDictionary *_config;	// 8 = 0x8
    NSMutableDictionary *_buckets;	// 16 = 0x10
    NSDate *_overloadUntil;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100030590
- (void).cxx_destruct;	// IMP=0x0000000100030480
@property(retain) NSDate *overloadUntil; // @synthesize overloadUntil=_overloadUntil;
@property(retain) NSMutableDictionary *buckets; // @synthesize buckets=_buckets;
@property(retain) NSDictionary *config; // @synthesize config=_config;
- (id)topOffendingAccessGroups:(unsigned long long)arg1;	// IMP=0x0000000100030174
- (id)diagnostics;	// IMP=0x000000010002fe5c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010002fde4
- (void)trim:(id)arg1;	// IMP=0x000000010002fa98
- (void)reset;	// IMP=0x000000010002fa40
- (unsigned long long)stateSize;	// IMP=0x000000010002f9f4
- (int)judge:(id)arg1 at:(id)arg2 limitTime:(id *)arg3;	// IMP=0x000000010002f450
- (id)consumeTokenFromBucket:(id)arg1 type:(int)arg2 at:(id)arg3;	// IMP=0x000000010002f248
- (int)capacity:(int)arg1;	// IMP=0x000000010002f164
- (int)rate:(int)arg1;	// IMP=0x000000010002f080
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010002ee58
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010002e97c
- (id)init;	// IMP=0x000000010002e96c

@end

