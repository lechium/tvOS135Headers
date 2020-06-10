//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLLocationProviderAdapter.h"

#import "CLAccessoryLocationProviderProtocol-Protocol.h"

@class NSString;

@interface CLAccessoryLocationProviderAdapter : CLLocationProviderAdapter <CLAccessoryLocationProviderProtocol>
{
}

+ (id)getSilo;	// IMP=0x000000010020748c
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0000000100207468
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x000000010087c858
+ (_Bool)isSupported;	// IMP=0x000000010020775c
- (void)fetchIsAccessoryConnectedWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100207728
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001002076ec
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001002076a8
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100207674
- (struct CLAccessoryLocationProvider *)adaptee;	// IMP=0x0000000100207638
- (void)endService;	// IMP=0x0000000100207614
- (void)beginService;	// IMP=0x0000000100207548
- (id)init;	// IMP=0x0000000100207504

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
