//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SYObject-Protocol.h"

@class NSDictionary, NSString;

@interface SYDictionaryObject : NSObject <SYObject>
{
    NSDictionary *_properties;	// 8 = 0x8
    NSString *_syncId;	// 16 = 0x10
}

@property(copy, nonatomic) NSString *syncId; // @synthesize syncId=_syncId;
@property(retain, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
- (id)initWithProperties:(id)arg1;	// IMP=0x00000001004727ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

