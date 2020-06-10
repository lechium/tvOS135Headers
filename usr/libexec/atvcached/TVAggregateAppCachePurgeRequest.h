//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"
#import "TVCacheDeletePurging-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, NSURL;

@interface TVAggregateAppCachePurgeRequest : NSObject <NSSecureCoding, NSCopying, TVCacheDeletePurging>
{
    NSURL *_cacheURL;	// 8 = 0x8
    NSMutableDictionary *_mutableRequests;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100006d64
- (void).cxx_destruct;	// IMP=0x000000010000857c
@property(retain, nonatomic) NSMutableDictionary *mutableRequests; // @synthesize mutableRequests=_mutableRequests;
@property(retain, nonatomic) NSURL *cacheURL; // @synthesize cacheURL=_cacheURL;
@property(readonly, copy) NSString *description;
- (long long)purgeAmount:(long long)arg1 withUrgency:(long long)arg2;	// IMP=0x0000000100007f8c
- (long long)purgeableAmountWithUrgency:(long long)arg1;	// IMP=0x0000000100007c58
- (_Bool)performBlockInTerminationAssertionForRequiredApplications:(CDUnknownBlockType)arg1;	// IMP=0x00000001000076ec
- (void)setPurgeRequest:(id)arg1 forApplication:(id)arg2;	// IMP=0x0000000100007534
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100007470
- (id)initWithPropertyListRepresentation:(id)arg1;	// IMP=0x00000001000071c4
- (id)propertyListRepresentation;	// IMP=0x0000000100006f9c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100006e3c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100006d6c
@property(readonly, copy, nonatomic) NSArray *applicationsRequiringTermination;
@property(readonly, copy, nonatomic) NSArray *applications;
@property(readonly, nonatomic) long long urgency;
- (id)initWithCacheURL:(id)arg1;	// IMP=0x00000001000069f8
- (id)init;	// IMP=0x00000001000069e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

