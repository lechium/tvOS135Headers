//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TVAppCachePurgeTask;

@protocol TVAppCachePurgeTaskDelegate <NSObject>

@optional
- (void)appCachePurgeTask:(TVAppCachePurgeTask *)arg1 didPurgeAmount:(long long)arg2 atUrgency:(long long)arg3;
@end
