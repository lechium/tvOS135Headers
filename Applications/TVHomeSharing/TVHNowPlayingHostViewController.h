//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class TVPPlaybackViewController;
@protocol TVPPlayback;

@interface TVHNowPlayingHostViewController : UIViewController
{
    TVPPlaybackViewController *_playbackViewController;	// 8 = 0x8
    id <TVPPlayback> _player;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100009ab4
@property(retain, nonatomic) id <TVPPlayback> player; // @synthesize player=_player;
@property(retain, nonatomic) TVPPlaybackViewController *playbackViewController; // @synthesize playbackViewController=_playbackViewController;
- (_Bool)_tvTabBarShouldAutohide;	// IMP=0x0000000100009a10
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010000995c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000097f8
- (id)initWithPlayer:(id)arg1;	// IMP=0x0000000100009770

@end
