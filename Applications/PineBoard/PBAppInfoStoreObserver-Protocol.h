//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMapTable, NSSet, PBAppInfoStore;

@protocol PBAppInfoStoreObserver <NSObject>
- (void)appInfoStore:(PBAppInfoStore *)arg1 didAddInfos:(NSSet *)arg2 removeInfos:(NSSet *)arg3 updateInfos:(NSMapTable *)arg4 updatedConfiguration:(NSMapTable *)arg5;
@end

