//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, PBApplicationInfo, PBSBadgeValue;

@protocol PBAppInfoStoreDynamicStateDataSource
- (void)invalidateStateForApplicationWithBundleIdentifier:(NSString *)arg1;
- (void)setCacheDeleting:(_Bool)arg1 forApplicationWithBundleIdentifier:(NSString *)arg2;
- (void)setRecentlyUpdated:(_Bool)arg1 forApplicationWithBundleIdentifier:(NSString *)arg2;
- (void)setBadgeEnabled:(_Bool)arg1 forApplicationWithBundleIdentifier:(NSString *)arg2;
- (void)setBadgeValue:(PBSBadgeValue *)arg1 forApplicationWithBundleIdentifier:(NSString *)arg2;
- (_Bool)isApplicationCacheDeleting:(PBApplicationInfo *)arg1;
- (_Bool)isApplicationRecentlyUpdated:(PBApplicationInfo *)arg1;
- (_Bool)isBadgeEnabledForApplication:(PBApplicationInfo *)arg1;
- (PBSBadgeValue *)badgeValueForApplication:(PBApplicationInfo *)arg1;
@end

