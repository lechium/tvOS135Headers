//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDTaskOperation.h"

@interface DMDUpdateDeclarationsOperation : DMDTaskOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100070e70
+ (id)requiredEntitlements;	// IMP=0x0000000100070cd4
+ (id)whitelistedClassesForRequest;	// IMP=0x0000000100070c98
- (void)runWithRequest:(id)arg1;	// IMP=0x0000000100070d50
- (_Bool)runOnMainThread;	// IMP=0x0000000100070d48
- (unsigned long long)queueGroup;	// IMP=0x0000000100070d40

@end

