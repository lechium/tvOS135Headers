//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHAppContextValueTransformer.h"

@class NSString;

@interface TVHGroupsToJSGroupsValueTransformer : TVHAppContextValueTransformer
{
    NSString *_unknownGroupTitle;	// 8 = 0x8
}

+ (_Bool)allowsReverseTransformation;	// IMP=0x000000010002b1cc
+ (Class)transformedValueClass;	// IMP=0x000000010002b1c0
- (void).cxx_destruct;	// IMP=0x000000010002b4b0
@property(copy, nonatomic) NSString *unknownGroupTitle; // @synthesize unknownGroupTitle=_unknownGroupTitle;
- (id)transformedValue:(id)arg1;	// IMP=0x000000010002b1d4
- (id)initWithAppContext:(id)arg1 unknownGroupTitle:(id)arg2;	// IMP=0x000000010002b114
- (id)initWithAppContext:(id)arg1;	// IMP=0x000000010002b08c

@end

