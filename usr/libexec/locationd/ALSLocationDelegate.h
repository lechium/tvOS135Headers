//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBSessionRequesterDelegate-Protocol.h"

@class NSMutableSet, NSString;

@interface ALSLocationDelegate : NSObject <PBSessionRequesterDelegate>
{
    NSMutableSet *fRequestersWithOutstandingRequests;	// 8 = 0x8
    struct CLNetworkLocationRequesterALS *fRequester;	// 16 = 0x10
}

- (void)addRequesterWithOutstandingRequest:(id)arg1;	// IMP=0x000000010018ff64
- (void)processWireless:(id)arg1 inRange:(struct _NSRange)arg2 timeReceived:(double)arg3 requestType:(int)arg4 tag:(int)arg5;	// IMP=0x000000010018f1f8
- (void)processScdmaCells:(id)arg1 inRange:(struct _NSRange)arg2 timeReceived:(double)arg3 requestType:(int)arg4 tag:(int)arg5;	// IMP=0x000000010018e8f8
- (void)processCells:(id)arg1 inRange:(struct _NSRange)arg2 timeReceived:(double)arg3 requestType:(int)arg4 tag:(int)arg5;	// IMP=0x000000010018de00
- (void)finished:(id)arg1;	// IMP=0x000000010018dbf4
- (void)requester:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000010018d568
- (void)requesterDidFinish:(id)arg1;	// IMP=0x000000010018d270
- (void)requester:(id)arg1 didReceiveResponse:(id)arg2 forRequest:(id)arg3;	// IMP=0x000000010018b118
- (void)dealloc;	// IMP=0x000000010018afe4
- (id)initWithRequester:(struct CLNetworkLocationRequesterALS *)arg1;	// IMP=0x000000010018af88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
