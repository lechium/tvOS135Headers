//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBSDisplayConfiguration, FBSDisplayIdentity, FBSDisplayMonitor;

@protocol FBSDisplayObserving <NSObject>

@optional
- (void)displayMonitor:(FBSDisplayMonitor *)arg1 willDisconnectIdentity:(FBSDisplayIdentity *)arg2;
- (void)displayMonitor:(FBSDisplayMonitor *)arg1 didUpdateIdentity:(FBSDisplayIdentity *)arg2 withConfiguration:(FBSDisplayConfiguration *)arg3;
- (void)displayMonitor:(FBSDisplayMonitor *)arg1 didConnectIdentity:(FBSDisplayIdentity *)arg2 withConfiguration:(FBSDisplayConfiguration *)arg3;
@end

