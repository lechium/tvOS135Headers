//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NRDUpdateBrainClientInterface-Protocol.h"

@protocol NRDUpdateBrainInterface <NRDUpdateBrainClientInterface>
- (void)getListenerEndpoint:(void (^)(NSXPCListenerEndpoint *, NSError *))arg1;
- (void)run:(unsigned long long)arg1 callback:(void (^)(NSError *))arg2;
@end

