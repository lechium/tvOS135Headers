//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SecEventMetric : NSObject <NSSecureCoding>
{
    NSString *_eventName;	// 8 = 0x8
    NSMutableDictionary *_attributes;	// 16 = 0x10
}

+ (id)supportedAttributeClasses;	// IMP=0x0000000100173740
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100173738
- (void).cxx_destruct;	// IMP=0x0000000100173480
@property(retain) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain) NSString *eventName; // @synthesize eventName=_eventName;
- (id)generateError:(id)arg1;	// IMP=0x0000000100173288
- (id)genericEvent;	// IMP=0x000000010017313c
- (unsigned long long)convertTimeIntervalToServerTime:(double)arg1;	// IMP=0x000000010017311c
- (void)setMetricValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001001730cc
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x0000000100172e80
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100172dc8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100172c58
- (id)initWithEventName:(id)arg1;	// IMP=0x0000000100172b90

@end

