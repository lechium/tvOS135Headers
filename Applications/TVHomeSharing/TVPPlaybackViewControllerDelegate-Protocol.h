//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, TVPPlaybackViewController, UIViewController;
@protocol TVPMediaItem;

@protocol TVPPlaybackViewControllerDelegate <NSObject>

@optional
- (_Bool)playbackViewController:(UIViewController *)arg1 handleControlGesture:(long long)arg2;
- (void)userDidFinishInteractionAfterErrorWasPresented:(TVPPlaybackViewController *)arg1;
- (long long)currentEndpointDeviceTypeForPlaybackViewController:(UIViewController *)arg1;
- (void)playbackViewControllerUserWillInitiatePlayback:(UIViewController *)arg1;
- (void)playbackViewController:(UIViewController *)arg1 willShowIdleViewController:(UIViewController *)arg2 forMediaItem:(id <TVPMediaItem>)arg3 targetCoverFrame:(inout struct CGRect *)arg4;
- (void)playbackViewController:(UIViewController *)arg1 wantsIdleViewControllerForMediaItem:(id <TVPMediaItem>)arg2 withCompletion:(void (^)(UIViewController *))arg3;
- (_Bool)playbackViewController:(UIViewController *)arg1 shouldShowIdleViewControllerForMediaItem:(id <TVPMediaItem>)arg2;
- (void)playbackViewController:(UIViewController *)arg1 controlsForMediaItem:(id <TVPMediaItem>)arg2 completionHandler:(void (^)(NSArray *))arg3;
- (_Bool)playbackViewControllerProvidesCustomControls:(UIViewController *)arg1;
- (void)playMediaItemAtIndex:(long long)arg1;
- (void)playbackViewController:(TVPPlaybackViewController *)arg1 loadRelatedContentForMediaItem:(NSObject<TVPMediaItem> *)arg2 withCompletionHandler:(void (^)(TVPRelatedContent *))arg3;
- (void)contextMenuForMediaItem:(id <TVPMediaItem>)arg1 completionHandler:(void (^)(TVPMusicContextMenuData *))arg2;
@end

