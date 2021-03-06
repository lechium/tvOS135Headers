//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDTaskOperation.h"

@class NSObject;
@protocol OS_os_transaction;

@interface DMDActivityTransactionOperation : DMDTaskOperation
{
    NSObject<OS_os_transaction> *_transaction;	// 8 = 0x8
}

+ (id)requiredEntitlements;	// IMP=0x00000001000132a0
+ (id)whitelistedClassesForRequest;	// IMP=0x0000000100013264
+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000010001312c
- (void).cxx_destruct;	// IMP=0x0000000100013458
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
- (void)runWithRequest:(id)arg1;	// IMP=0x00000001000133bc
- (void)endOperationIfNeeded;	// IMP=0x0000000100013374
- (void)cancel;	// IMP=0x0000000100013314
- (_Bool)runOnMainThread;	// IMP=0x000000010001330c
- (_Bool)runConcurrently;	// IMP=0x0000000100013124

@end

