//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NEIKEv2ChildSAConfiguration, NEIKEv2Listener, NEIKEv2Session, NEIKEv2SessionConfiguration;

@protocol NEIKEv2ListenerDelegate <NSObject>
- (void)requestConfigurationForListener:(NEIKEv2Listener *)arg1 session:(NEIKEv2Session *)arg2 sessionConfig:(NEIKEv2SessionConfiguration *)arg3 childConfig:(NEIKEv2ChildSAConfiguration *)arg4 validateAuthBlock:(_Bool (^)(NEIKEv2SessionConfiguration *))arg5 responseBlock:(void (^)(NEIKEv2SessionConfiguration *, NEIKEv2ChildSAConfiguration *, struct NEVirtualInterface_s *))arg6;

@optional
- (void)listener:(NEIKEv2Listener *)arg1 receivedNewSession:(NEIKEv2Session *)arg2;
@end

