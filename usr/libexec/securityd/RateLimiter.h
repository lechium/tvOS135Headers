//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface RateLimiter : NSObject <NSSecureCoding>
{
    NSDictionary *_config;	// 8 = 0x8
    NSString *_assetType;	// 16 = 0x10
    NSArray *_groups;	// 24 = 0x18
    NSDate *_lastJudgment;	// 32 = 0x20
    NSDate *_overloadUntil;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100074638
- (void).cxx_destruct;	// IMP=0x00000001000744d8
@property(retain, nonatomic) NSDate *overloadUntil; // @synthesize overloadUntil=_overloadUntil;
@property(retain, nonatomic) NSDate *lastJudgment; // @synthesize lastJudgment=_lastJudgment;
@property(retain, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
@property(retain, nonatomic) NSDictionary *config; // @synthesize config=_config;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000743bc
- (id)getPropertyValue:(id)arg1 object:(id)arg2;	// IMP=0x00000001000741d0
- (id)diagnostics;	// IMP=0x0000000100074058
@property(readonly, nonatomic) unsigned long long stateSize;
- (void)trim:(id)arg1;	// IMP=0x00000001000739a8
- (void)reset;	// IMP=0x00000001000737f8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100073448
- (id)consumeTokenFromBucket:(id)arg1 config:(id)arg2 name:(id)arg3 at:(id)arg4;	// IMP=0x0000000100073210
- (long long)judge:(id)arg1 at:(id)arg2 limitTime:(id *)arg3;	// IMP=0x00000001000729dc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100072728
- (id)initWithConfig:(id)arg1;	// IMP=0x0000000100072694

@end
