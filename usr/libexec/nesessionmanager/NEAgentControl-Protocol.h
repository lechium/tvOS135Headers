//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSString;

@protocol NEAgentControl
- (void)disposeWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)setupWithPluginType:(NSString *)arg1 pluginVersion:(long long)arg2 pluginClass:(long long)arg3 pluginInfo:(NSDictionary *)arg4 completionHandler:(void (^)(NSError *, NSXPCListenerEndpoint *, NSArray *))arg5;
@end

