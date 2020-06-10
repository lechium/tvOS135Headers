//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol SPBeaconManagerUserAgentDaemonInternalXPCProtocol <NSObject>
- (void)pushSubmissionConfigurationHostName:(NSString *)arg1 path:(NSString *)arg2 completion:(void (^)(_Bool))arg3;
- (void)containerWithName:(NSString *)arg1 completion:(void (^)(NSURL *, NSError *))arg2;
- (void)purgeLocalBeaconRecordWithCompletion:(void (^)(_Bool))arg1;
- (void)pushLocalBeaconRecord:(NSData *)arg1 completion:(void (^)(_Bool))arg2;
@end
