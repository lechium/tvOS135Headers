//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TVCKDataQuery;
@protocol OS_dispatch_queue;

@interface TVPDataQueryContext : NSObject
{
    TVCKDataQuery *_query;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000550a0
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, retain, nonatomic) TVCKDataQuery *query; // @synthesize query=_query;
- (id)subcontextWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100054fcc
- (void)performCompletion;	// IMP=0x0000000100054f64
- (_Bool)isQueryStillValid;	// IMP=0x0000000100054f14
- (id)initWithQuery:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100054e38

@end

