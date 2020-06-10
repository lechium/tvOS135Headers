//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface MIFreeProfileValidatedAppTracker : NSObject
{
    NSMutableSet *_refs;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_q;	// 16 = 0x10
}

+ (id)sharedTracker;	// IMP=0x00000001000541c8
- (void).cxx_destruct;	// IMP=0x000000010005564c
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *q; // @synthesize q=_q;
@property(retain, nonatomic) NSMutableSet *refs; // @synthesize refs=_refs;
- (_Bool)removeReferenceForBundle:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100055430
- (_Bool)_onQueue_removeReferenceForBundle:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000550b4
- (_Bool)addReferenceForApplicationIdentifier:(id)arg1 bundle:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100054de0
- (_Bool)_onQueue_addReferenceForApplicationIdentifier:(id)arg1 bundle:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100054990
- (_Bool)_onQueue_discoverReferencesWithError:(id *)arg1;	// IMP=0x00000001000547ec
- (_Bool)_onQueue_addAppIdentifierIfCachedOnContainer:(struct container_object *)arg1 error:(id *)arg2;	// IMP=0x00000001000543ec
- (void)invalidateCache;	// IMP=0x000000010005435c
- (id)init;	// IMP=0x000000010005427c

@end

