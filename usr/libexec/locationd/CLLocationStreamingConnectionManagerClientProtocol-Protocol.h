//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLIntersiloClientProtocol-Protocol.h"

@class CLLocationStreamingMessage, NSDictionary, NSError, NSString;

@protocol CLLocationStreamingConnectionManagerClientProtocol <CLIntersiloClientProtocol>
- (void)pairedDeviceIsNearby:(_Bool)arg1;
- (void)successfullySentMessage:(CLLocationStreamingMessage *)arg1;
- (void)failedToSendMessage:(CLLocationStreamingMessage *)arg1 withError:(NSError *)arg2 isFatal:(_Bool)arg3;
- (void)receivedMessageOfType:(NSString *)arg1 withPayload:(NSDictionary *)arg2;
@end
