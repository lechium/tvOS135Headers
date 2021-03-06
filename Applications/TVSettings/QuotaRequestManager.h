//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue, QuotaInfoResponse;
@protocol OS_dispatch_queue;

@interface QuotaRequestManager : NSObject
{
    NSOperationQueue *_requestQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_quota_info_queue;	// 16 = 0x10
    QuotaInfoResponse *_quotaInfo;	// 24 = 0x18
    NSMutableDictionary *_appDetailsCache;	// 32 = 0x20
}

+ (id)noAccountError;	// IMP=0x0000000100061b68
+ (id)sharedManager;	// IMP=0x0000000100061afc
- (void).cxx_destruct;	// IMP=0x0000000100062a90
- (void)getAppDetailsForBundleIDs:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000628b0
- (id)appDetailsForBundleIDs:(id)arg1 error:(id *)arg2;	// IMP=0x000000010006243c
- (void)clearCachedAppDetails;	// IMP=0x00000001000623dc
- (void)getQuotaInfoForHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100062230
- (id)quotaInfoError:(id *)arg1;	// IMP=0x0000000100061f30
- (id)_sendSynchronousAARequest:(id)arg1;	// IMP=0x0000000100061d5c
- (void)noteQuotaInfoChanged;	// IMP=0x0000000100061cfc
- (void)clearCachedQuotaInfo;	// IMP=0x0000000100061c94
- (id)init;	// IMP=0x0000000100061bf4

@end

