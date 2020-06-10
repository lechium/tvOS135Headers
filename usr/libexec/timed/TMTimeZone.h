//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TMTimeZone : NSObject
{
    NSString *_source;	// 8 = 0x8
    NSString *_olsonName;	// 16 = 0x10
}

+ (id)timeZoneWithOlsonName:(id)arg1 fromSource:(id)arg2;	// IMP=0x000000010000f1e4
@property(copy) NSString *olsonName; // @synthesize olsonName=_olsonName;
@property(copy) NSString *source; // @synthesize source=_source;
- (id)description;	// IMP=0x000000010000f278
- (_Bool)hasSameOlsonNameAs:(id)arg1;	// IMP=0x000000010000f224
- (id)initWithOlsonName:(id)arg1 fromSource:(id)arg2;	// IMP=0x000000010000f17c
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000010000f0e0
- (void)dealloc;	// IMP=0x000000010000f090

@end

