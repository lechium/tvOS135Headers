//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BKEventSenderUsagePairDictionary : NSObject
{
    NSMutableDictionary *_usagePairsPerSenderID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010000d670
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000010000d664
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000010000d610
- (id)succinctDescriptionBuilder;	// IMP=0x000000010000d570
- (id)succinctDescription;	// IMP=0x000000010000d51c
- (id)description;	// IMP=0x000000010000d50c
- (id)popObjectForSenderID:(unsigned long long)arg1 page:(unsigned short)arg2 usage:(unsigned short)arg3;	// IMP=0x000000010000d420
- (void)enumerateAllObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010000d280
- (void)enumerateObjectsForSenderID:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000d190
- (void)removeAllObjectsForSenderID:(unsigned long long)arg1;	// IMP=0x000000010000d13c
- (void)removeObjectForSenderID:(unsigned long long)arg1 page:(unsigned short)arg2 usage:(unsigned short)arg3;	// IMP=0x000000010000d074
- (void)_removeObjectFromDictionary:(id)arg1 senderIDKey:(id)arg2 usagePairKey:(id)arg3;	// IMP=0x000000010000cfc8
- (void)setObject:(id)arg1 forSenderID:(unsigned long long)arg2 page:(unsigned short)arg3 usage:(unsigned short)arg4;	// IMP=0x000000010000ce90
- (id)objectForSenderID:(unsigned long long)arg1 page:(unsigned short)arg2 usage:(unsigned short)arg3;	// IMP=0x000000010000cdbc

@end

