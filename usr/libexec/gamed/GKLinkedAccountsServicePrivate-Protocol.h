//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKLinkedAccountsService-Protocol.h"

@protocol GKLinkedAccountsServicePrivate <GKLinkedAccountsService>
- (oneway void)notifyAvailableExternalServicesWithHandler:(void (^)(_Bool, NSError *))arg1;
- (oneway void)getAuthTokenForExternalService:(BOOL)arg1 handler:(void (^)(NSString *, NSError *))arg2;
- (oneway void)availableExternalServicesWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)disconnectExternalService:(BOOL)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)connectExternalService:(BOOL)arg1 handler:(void (^)(NSError *))arg2;
@end

