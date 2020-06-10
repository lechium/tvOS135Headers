//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSFileHandle, SDCompanionStream, SFCompanionService;

@protocol SDCompanionStreamDelegate <NSObject>

@optional
- (void)companionStreamClosedStreams:(SDCompanionStream *)arg1;
- (void)continuationStream:(SDCompanionStream *)arg1 connectedToService:(SFCompanionService *)arg2 withFileHandle:(NSFileHandle *)arg3 acceptHandler:(void (^)(_Bool))arg4;
@end
