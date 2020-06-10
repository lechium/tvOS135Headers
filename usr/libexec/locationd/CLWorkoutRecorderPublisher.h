//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSString;

@interface CLWorkoutRecorderPublisher : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
}

- (void)requestConfiguration;	// IMP=0x0000000100860e0c
- (void)reregisterDevice;	// IMP=0x0000000100860e08
@property(readonly, nonatomic) _Bool canPublish;
- (void)publishDataFiles:(id)arg1 metadata:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;	// IMP=0x0000000100860dfc
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000100860df4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

