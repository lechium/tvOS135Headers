//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"

@class NSDate, NSString, NSURL, NSURLSession;

@interface SubmissionScheduler : NSObject <NSURLSessionDelegate>
{
    NSURLSession *_session;	// 8 = 0x8
    CDUnknownBlockType _eventBlock;	// 16 = 0x10
    NSURL *_reachabilityURL;	// 24 = 0x18
    double _lastPredictedDelay;	// 32 = 0x20
    _Bool _disabled;	// 40 = 0x28
    NSDate *_lastScheduled;	// 48 = 0x30
    NSDate *_nextScheduled;	// 56 = 0x38
}

+ (unsigned char)fuzz;	// IMP=0x0000000100005a34
- (void).cxx_destruct;	// IMP=0x0000000100005d7c
@property(readonly) NSDate *nextScheduled; // @synthesize nextScheduled=_nextScheduled;
@property(readonly) NSDate *lastScheduled; // @synthesize lastScheduled=_lastScheduled;
@property(readonly) _Bool disabled; // @synthesize disabled=_disabled;
- (void)scheduleIn:(CDStruct_2815125f)arg1;	// IMP=0x0000000100005a68
- (_Bool)checkScheduleWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005678
- (_Bool)hasSchedule;	// IMP=0x00000001000055c8
- (void)updateWindow:(CDStruct_2815125f)arg1;	// IMP=0x0000000100005350
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100005268
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100005264
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x0000000100005260
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000100005158
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;	// IMP=0x0000000100005154
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x00000001000050a4
- (id)initWithURL:(id)arg1 eventBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004c68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
