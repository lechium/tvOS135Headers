//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SRPagerView, UIView;

@protocol SRPagerViewDataSource <NSObject>
- (UIView *)pagerView:(SRPagerView *)arg1 pageViewAtIndex:(long long)arg2;
- (long long)numberOfPageViewsInPagerView:(SRPagerView *)arg1;
@end

