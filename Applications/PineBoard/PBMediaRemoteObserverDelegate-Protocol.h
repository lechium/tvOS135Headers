//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, PBMediaRemoteObserver;

@protocol PBMediaRemoteObserverDelegate <NSObject>
- (void)mediaRemoteObserverNowPlayingInfoDidChange:(PBMediaRemoteObserver *)arg1 nowPlayingInfo:(NSDictionary *)arg2;
- (void)mediaRemoteObserverNowPlayingAppDidChange:(PBMediaRemoteObserver *)arg1;
- (void)mediaRemoteObserverIsPlayingDidChange:(PBMediaRemoteObserver *)arg1;
- (_Bool)mediaRemoteObserverShouldShowTrackChangeBulletin:(PBMediaRemoteObserver *)arg1;
@end

