//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol DATestQueueDelegate;

@interface DATestQueue : NSObject
{
    _Bool _suspended;	// 8 = 0x8
    NSMutableArray *_testQueue;	// 16 = 0x10
    id <DATestQueueDelegate> _delegate;	// 24 = 0x18
}

+ (id)testQueueWithDelegate:(id)arg1;	// IMP=0x00000001000105f4
- (void).cxx_destruct;	// IMP=0x0000000100010ae0
@property(nonatomic) __weak id <DATestQueueDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *testQueue; // @synthesize testQueue=_testQueue;
@property(nonatomic) _Bool suspended; // @synthesize suspended=_suspended;
- (id)_dequeueTest;	// IMP=0x0000000100010980
- (void)_enqueueTestWithQueueEntry:(id)arg1;	// IMP=0x00000001000108c0
- (void)_tickleTestQueue;	// IMP=0x00000001000107a0
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000100010700
- (void)enqueueTestWithTestAttributes:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100010644

@end

