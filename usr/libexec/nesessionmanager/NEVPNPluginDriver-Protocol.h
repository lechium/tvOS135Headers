//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NEPluginDriver-Protocol.h"

@class NSDictionary, NSString;

@protocol NEVPNPluginDriver <NEPluginDriver>
- (void)attachIPCWithCompletionHandler:(void (^)(NSXPCListenerEndpoint *))arg1;
- (void)disconnectWithReason:(int)arg1;
- (void)connectWithParameters:(NSDictionary *)arg1;

@optional
- (void)transportAvailableWithName:(NSString *)arg1;
- (void)transportUnavailableWithName:(NSString *)arg1;
@end

