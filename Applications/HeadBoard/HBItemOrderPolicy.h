//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HBItemOrderVideoSubscriberApplicationConfiguration, NSArray, NSOrderedSet;

@interface HBItemOrderPolicy : NSObject
{
    NSArray *_orderingRules;	// 8 = 0x8
    NSOrderedSet *_provisionedBundleIdentifiers;	// 16 = 0x10
    HBItemOrderVideoSubscriberApplicationConfiguration *_videoSubscriberApplicationConfiguration;	// 24 = 0x18
}

+ (void)updateItemOrderIds:(id)arg1 atIndexes:(id)arg2 baseOrderId:(double)arg3;	// IMP=0x000000010005e30c
+ (void)updateItemOrderIds:(id)arg1 atIndexes:(id)arg2;	// IMP=0x000000010005e2b4
+ (id)insertIndexes:(id)arg1 intoIndexSet:(id)arg2;	// IMP=0x000000010005e184
+ (id)itemsByAddingApplications:(id)arg1 toItems:(id)arg2 provisionedBundleIdentifiers:(id)arg3 videoSubscriberApplicationBundleIdentifier:(id)arg4 videoSubscriberApplicationPosition:(unsigned long long)arg5 didAddVideoSubscriberApplication:(_Bool *)arg6;	// IMP=0x000000010005dad8
- (void).cxx_destruct;	// IMP=0x000000010005ec9c
@property(readonly, nonatomic) HBItemOrderVideoSubscriberApplicationConfiguration *videoSubscriberApplicationConfiguration; // @synthesize videoSubscriberApplicationConfiguration=_videoSubscriberApplicationConfiguration;
@property(readonly, nonatomic) NSOrderedSet *provisionedBundleIdentifiers; // @synthesize provisionedBundleIdentifiers=_provisionedBundleIdentifiers;
- (id)applicationsGroupedByOrderingRules:(id)arg1 defaultRule:(id)arg2;	// IMP=0x000000010005e8f8
@property(readonly, nonatomic) NSArray *orderingRules; // @synthesize orderingRules=_orderingRules;
- (id)updatedItemOrderingByAddingApplications:(id)arg1 toItems:(id)arg2 didAddVideoSubscriberApplication:(_Bool *)arg3;	// IMP=0x000000010005dcb8
- (id)initWithProvisionedBundleIdentifiers:(id)arg1 videoSubscriberApplicationConfiguration:(id)arg2;	// IMP=0x000000010005dc14

@end
