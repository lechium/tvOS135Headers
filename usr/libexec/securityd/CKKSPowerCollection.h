//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKKSPowerCollection : NSOperation
{
    NSMutableDictionary *_store;	// 8 = 0x8
    NSMutableDictionary *_delete;	// 16 = 0x10
}

+ (void)OTPowerEvent:(id)arg1;	// IMP=0x0000000100043c60
+ (void)CKKSPowerEvent:(id)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000100043b58
+ (void)CKKSPowerEvent:(id)arg1 zone:(id)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000100043a24
+ (void)CKKSPowerEvent:(id)arg1 zone:(id)arg2;	// IMP=0x0000000100043938
- (void).cxx_destruct;	// IMP=0x00000001000438f8
@property(retain) NSMutableDictionary *delete; // @synthesize delete=_delete;
@property(retain) NSMutableDictionary *store; // @synthesize store=_store;
- (void)commit;	// IMP=0x0000000100043864
- (void)summary:(id)arg1 stats:(id)arg2;	// IMP=0x0000000100043694
- (void)deletedOQE:(id)arg1;	// IMP=0x000000010004362c
- (void)storedOQE:(id)arg1;	// IMP=0x00000001000435c4
- (void)addToStatsDictionary:(id)arg1 key:(id)arg2;	// IMP=0x00000001000434ec
- (id)init;	// IMP=0x0000000100043438

@end

