//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

@interface TVHPlayedStateGroupTitleValueTransformer : NSValueTransformer
{
    unsigned long long _verbType;	// 8 = 0x8
}

+ (_Bool)allowsReverseTransformation;	// IMP=0x00000001000272dc
+ (Class)transformedValueClass;	// IMP=0x00000001000272d0
@property(nonatomic) unsigned long long verbType; // @synthesize verbType=_verbType;
- (id)transformedValue:(id)arg1;	// IMP=0x00000001000272e4
- (id)init;	// IMP=0x000000010002728c

@end

