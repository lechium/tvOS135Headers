//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface TVIMetrics : NSObject
{
    NSObject<OS_dispatch_queue> *_workQ;	// 8 = 0x8
    double _displayOutputStartTime;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000010001ea7c
- (void).cxx_destruct;	// IMP=0x000000010001ed7c
@property(nonatomic) double displayOutputStartTime; // @synthesize displayOutputStartTime=_displayOutputStartTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQ; // @synthesize workQ=_workQ;
- (void)displayOutputStopped;	// IMP=0x000000010001ec60
- (void)displayOutputStarted;	// IMP=0x000000010001ebbc
- (id)init;	// IMP=0x000000010001eb30

@end

