//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface SRError : NSError
{
}

+ (id)errorWithCode:(long long)arg1;	// IMP=0x00000001000784d8
+ (id)errorWithCode:(long long)arg1 localizedFailureReason:(id)arg2;	// IMP=0x0000000100078478
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0000000100078418
- (id)initWithCode:(long long)arg1;	// IMP=0x00000001000785e8
- (id)initWithCode:(long long)arg1 localizedFailureReason:(id)arg2;	// IMP=0x0000000100078504
- (id)initWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x00000001000784e8

@end
