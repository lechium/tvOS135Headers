//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLCellTilesManagerProtocol-Protocol.h"

@class NSString;

@interface CLCellTilesManagerAdapter : CLNotifierServiceAdapter <CLCellTilesManagerProtocol>
{
}

+ (_Bool)isSupported;	// IMP=0x0000000100657c08
+ (id)getSilo;	// IMP=0x000000010065796c
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0000000100657948
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000001008a1144
- (void)requestCellTileDownloadByType:(int)arg1 lat:(double)arg2 lon:(double)arg3 seckey:(unsigned long long)arg4;	// IMP=0x0000000100657cdc
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100657bcc
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100657b88
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100657b54
- (struct CLCellTilesManager *)adaptee;	// IMP=0x0000000100657b18
- (void)endService;	// IMP=0x0000000100657af4
- (void)beginService;	// IMP=0x0000000100657a28
- (id)init;	// IMP=0x00000001006579e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
