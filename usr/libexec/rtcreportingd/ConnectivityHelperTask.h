//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData, NSString;

@interface ConnectivityHelperTask : NSObject
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSString *_taskDescription;	// 16 = 0x10
    NSMutableData *_receivedData;	// 24 = 0x18
}

@property(readonly) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)dealloc;	// IMP=0x000000010001ddb4
- (id)initWithTaskDescription:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001dcb0

@end

