//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface MTStoreIdentifier : NSObject
{
    NSNumber *_storeIdentifier;	// 8 = 0x8
    NSString *_feedUrl;	// 16 = 0x10
}

+ (_Bool)isNotEmptyNumber:(id)arg1;	// IMP=0x00000001000cb538
+ (_Bool)isNotEmpty:(long long)arg1;	// IMP=0x00000001000cb518
+ (_Bool)isEmptyNumber:(id)arg1;	// IMP=0x00000001000cb4dc
+ (_Bool)isEmpty:(long long)arg1;	// IMP=0x00000001000cb4b8
+ (id)serpentIdNumberFromStoreId:(long long)arg1;	// IMP=0x00000001000cb440
+ (long long)serpentIdFromAdamId:(long long)arg1;	// IMP=0x00000001000cb424
+ (id)serpentIdNumberFromAdamIdNumber:(id)arg1;	// IMP=0x00000001000cb3cc
+ (id)serpentIdListFromAdamIDList:(id)arg1;	// IMP=0x00000001000cb358
+ (id)adamIdNumberFromStoreId:(long long)arg1;	// IMP=0x00000001000cb2e0
+ (long long)adamIDFromSerpentId:(long long)arg1;	// IMP=0x00000001000cb2c4
+ (id)adamIdNumberFromSerpentIdNumber:(id)arg1;	// IMP=0x00000001000cb26c
+ (id)adamIDListFromSerpentIdList:(id)arg1;	// IMP=0x00000001000cb1f8
+ (id)episodePredicateForIdentifier:(id)arg1;	// IMP=0x00000001000cb11c
+ (id)podcastPredicateForIdentifer:(id)arg1;	// IMP=0x00000001000cafd8
+ (id)identifierWithFeedUrl:(id)arg1 storeIdentifier:(id)arg2;	// IMP=0x00000001000caf60
+ (id)identifierWithFeedUrl:(id)arg1;	// IMP=0x00000001000caf0c
- (void).cxx_destruct;	// IMP=0x00000001000cb580
@property(retain, nonatomic) NSString *feedUrl; // @synthesize feedUrl=_feedUrl;
@property(retain, nonatomic) NSNumber *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
- (id)initWithFeedUrl:(id)arg1 storeIdentifier:(id)arg2;	// IMP=0x00000001000cae64
- (id)initWithFeedUrl:(id)arg1;	// IMP=0x00000001000cae54

@end

