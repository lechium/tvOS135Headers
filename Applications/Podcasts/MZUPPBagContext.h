//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class IMURLBag, NSString, NSURL;

@interface MZUPPBagContext : NSObject <NSCopying>
{
    _Bool _UPPDisabled;	// 8 = 0x8
    IMURLBag *_bag;	// 16 = 0x10
    NSURL *_baseURLForGETAll;	// 24 = 0x18
    NSURL *_baseURLForPUTAll;	// 32 = 0x20
    double _pollingInterval;	// 40 = 0x28
}

+ (void)loadBagContextFromIMURLBag:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100054c90
+ (double)defaultPollingInterval;	// IMP=0x0000000100054b64
- (void).cxx_destruct;	// IMP=0x0000000100055868
@property(nonatomic) double pollingInterval; // @synthesize pollingInterval=_pollingInterval;
@property(readonly, nonatomic) _Bool UPPDisabled; // @synthesize UPPDisabled=_UPPDisabled;
@property(copy, nonatomic) NSURL *baseURLForPUTAll; // @synthesize baseURLForPUTAll=_baseURLForPUTAll;
@property(copy, nonatomic) NSURL *baseURLForGETAll; // @synthesize baseURLForGETAll=_baseURLForGETAll;
@property(retain, nonatomic) IMURLBag *bag; // @synthesize bag=_bag;
@property(readonly, copy, nonatomic) NSString *domain;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100054b70

@end

