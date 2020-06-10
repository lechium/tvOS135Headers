//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKActivity, GKThreadsafeDictionary, NSError, NSString;
@protocol OS_dispatch_group;

@interface GKDispatchGroup : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_group;	// 16 = 0x10
    GKThreadsafeDictionary *_values;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    id result;	// 40 = 0x28
    int _sequence;	// 48 = 0x30
    _Bool _loggingEnabled;	// 52 = 0x34
    id _result;	// 56 = 0x38
    GKActivity *_activity;	// 64 = 0x40
}

+ (id)mainQueue;	// IMP=0x000000010011dbfc
+ (id)backgroundConcurrentQueue;	// IMP=0x000000010011dbf0
+ (id)defaultConcurrentQueue;	// IMP=0x000000010011dbe4
+ (id)dispatchGroup;	// IMP=0x000000010011c154
+ (id)dispatchGroupWithName:(id)arg1;	// IMP=0x000000010011c124
+ (void)waitUntilDone:(CDUnknownBlockType)arg1;	// IMP=0x000000010011be2c
@property(retain) GKActivity *activity; // @synthesize activity=_activity;
@property(nonatomic, getter=isLoggingEnabled) _Bool loggingEnabled; // @synthesize loggingEnabled=_loggingEnabled;
@property(retain) id result; // @synthesize result=_result;
@property(retain) NSError *error; // @synthesize error=_error;
- (id)allValues;	// IMP=0x000000010011dd18
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000010011dd08
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x000000010011dcb0
- (id)_values;	// IMP=0x000000010011dc08
- (void)join:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000010011d94c
- (long long)_waitWithDispatchTimeout:(unsigned long long)arg1;	// IMP=0x000000010011d2e4
- (long long)waitWithTimeout:(double)arg1;	// IMP=0x000000010011d2a0
- (void)wait;	// IMP=0x000000010011d22c
- (void)notifyOnMainQueueWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010011d214
- (void)notifyOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000010011cae4
- (void)leave;	// IMP=0x000000010011cadc
- (void)enter;	// IMP=0x000000010011cad4
- (void)perform:(CDUnknownBlockType)arg1;	// IMP=0x000000010011c380
- (id)description;	// IMP=0x000000010011c2fc
- (void)dealloc;	// IMP=0x000000010011c0b0
- (id)initWithName:(id)arg1;	// IMP=0x000000010011c024
- (id)init;	// IMP=0x000000010011be7c

@end

