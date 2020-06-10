//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface OctagonStateTransitionPathStep : NSObject
{
    _Bool _successState;	// 8 = 0x8
    NSDictionary *_followStates;	// 16 = 0x10
}

+ (id)pathFromDictionary:(id)arg1;	// IMP=0x000000010009d460
+ (id)success;	// IMP=0x000000010009d438
- (void).cxx_destruct;	// IMP=0x000000010009d42c
@property(readonly) NSDictionary *followStates; // @synthesize followStates=_followStates;
@property _Bool successState; // @synthesize successState=_successState;
- (id)description;	// IMP=0x000000010009d370
- (id)nextStep:(id)arg1;	// IMP=0x000000010009d2f0
- (id)initWithPath:(id)arg1;	// IMP=0x000000010009d274
- (id)initAsSuccess;	// IMP=0x000000010009d210

@end

