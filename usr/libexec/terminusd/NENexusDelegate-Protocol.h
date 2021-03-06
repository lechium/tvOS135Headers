//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NENexus, NENexusBrowse, NENexusFlow;

@protocol NENexusDelegate <NSObject>
- (void)handleRequestToActivateNexus:(NENexus *)arg1 fromFlow:(NENexusFlow *)arg2;
- (void)acceptNewFlow:(NENexusFlow *)arg1 fromNexus:(NENexus *)arg2 completionHandler:(void (^)(NENexusFlowAssignedProperties *))arg3;

@optional
- (void)stopBrowse:(NENexusBrowse *)arg1 fromNexus:(NENexus *)arg2;
- (void)startBrowse:(NENexusBrowse *)arg1 fromNexus:(NENexus *)arg2;
@end

