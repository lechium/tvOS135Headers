//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HBAppInfo;

@protocol HBAppInfoObserver <NSObject>

@optional
- (void)appInfoCacheDeletingDidChange:(HBAppInfo *)arg1;
- (void)appInfoDotStyleDidChange:(HBAppInfo *)arg1;
- (void)appInfoInstallStateDidChange:(HBAppInfo *)arg1;
- (void)appInfoIconDidChange:(HBAppInfo *)arg1;
- (void)appInfoBadgeValueDidChange:(HBAppInfo *)arg1;
- (void)appInfoDisplayNameDidChange:(HBAppInfo *)arg1;
@end

