//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceProtocol-Protocol.h"

@protocol CLCompanionNotifierProtocol <CLNotifierServiceProtocol>
- (_Bool)syncgetDoSync:(void (^)(struct CLCompanionNotifier *))arg1;
- (void)doAsync:(void (^)(struct CLCompanionNotifier *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(struct CLCompanionNotifier *))arg1;
@end

