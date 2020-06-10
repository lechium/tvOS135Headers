//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary;

@protocol MobileActivationProtocol <NSObject>
- (void)updateBasebandTicket:(NSData *)arg1 baaCertData:(NSData *)arg2 options:(NSDictionary *)arg3 withCompletionBlock:(void (^)(NSDictionary *, NSError *))arg4;
- (void)isInFieldCollectedWithCompletionBlock:(void (^)(NSDictionary *, NSError *))arg1;
- (void)issueClientCertificateWithReferenceKey:(NSData *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)issueClientCertificateLegacy:(NSData *)arg1 WithCompletionBlock:(void (^)(NSDictionary *, NSError *))arg2;
- (void)handleActivationInfoWithSession:(NSData *)arg1 activationSignature:(NSData *)arg2 completionBlock:(void (^)(NSDictionary *, NSError *))arg3;
- (void)recertifyDeviceWithCompletionBlock:(void (^)(NSDictionary *, NSError *))arg1;
- (void)unbrickDeviceWithCompletionBlock:(void (^)(NSDictionary *, NSError *))arg1;
- (void)copyActivationRecordWithCompletionBlock:(void (^)(NSDictionary *, NSError *))arg1;
- (void)getActivationBuildWithCompletionBlock:(void (^)(NSDictionary *, NSError *))arg1;
- (void)requestDeviceReactivationWithCompletionBlock:(void (^)(NSDictionary *, NSError *))arg1;
- (void)deactivateDeviceWithCompletionBlock:(void (^)(NSDictionary *, NSError *))arg1;
- (void)isDeviceBrickedWithCompletionBlock:(void (^)(NSDictionary *, NSError *))arg1;
- (void)copyPCRTTokenWithCompletionBlock:(void (^)(NSDictionary *, NSError *))arg1;
- (void)copyUCRTWithCompletionBlock:(void (^)(NSDictionary *, NSError *))arg1;
- (void)handleActivationInfo:(NSDictionary *)arg1 withCompletionBlock:(void (^)(NSDictionary *, NSError *))arg2;
- (void)createActivationInfoWithCompletionBlock:(void (^)(NSDictionary *, NSError *))arg1;
- (void)createTunnel1SessionInfoWithCompletionBlock:(void (^)(NSDictionary *, NSError *))arg1;
- (void)createTunnel1ActivationInfo:(NSData *)arg1 options:(NSDictionary *)arg2 withCompletionBlock:(void (^)(NSDictionary *, NSError *))arg3;
- (void)getActivationStateWithCompletionBlock:(void (^)(NSDictionary *, NSError *))arg1;
@end

