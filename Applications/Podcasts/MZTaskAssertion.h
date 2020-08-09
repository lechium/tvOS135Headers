//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MZProcessAssertion, NSString;

@interface MZTaskAssertion : NSObject
{
    CDUnknownBlockType _expireHandler;	// 8 = 0x8
    NSString *_debugInfo;	// 16 = 0x10
    MZProcessAssertion *_processAssertion;	// 24 = 0x18
}

+ (id)newBackgroundTaskWithExpirationHandler:(CDUnknownBlockType)arg1 debugInfo:(id)arg2;	// IMP=0x000000010007ec28
- (void).cxx_destruct;	// IMP=0x000000010007ee80
- (id)description;	// IMP=0x000000010007eddc
- (void)invalidate;	// IMP=0x000000010007ed88
- (void)performExpirationHandler;	// IMP=0x000000010007ecec
- (void)dealloc;	// IMP=0x000000010007eca0
- (id)initWithExpirationHandler:(CDUnknownBlockType)arg1 debugInfo:(id)arg2;	// IMP=0x000000010007eac4

@end

