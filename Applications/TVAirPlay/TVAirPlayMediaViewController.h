//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class TVAirPlayAPRKVideoSession, TVAirPlayAPRKViewController, TVAirPlayInfoSession, TVAirPlayPINViewController, TVAirPlayPresentationSession, TVAirPlayPresentationViewController, TVAirPlayURLSession, UIAlertController, _TVAirPlayVideoPlayerViewController;
@protocol TVAirPlayMediaViewControllerDelegate, TVAirPlayPinSession;

@interface TVAirPlayMediaViewController : UIViewController
{
    _Bool _dismissing;	// 8 = 0x8
    id <TVAirPlayPinSession> _pinSession;	// 16 = 0x10
    TVAirPlayInfoSession *_dialogInfoSession;	// 24 = 0x18
    TVAirPlayPresentationSession *_presentationSession;	// 32 = 0x20
    TVAirPlayURLSession *_videoPlaybackSession;	// 40 = 0x28
    TVAirPlayAPRKVideoSession *_APRKVideoSession;	// 48 = 0x30
    id <TVAirPlayMediaViewControllerDelegate> _delegate;	// 56 = 0x38
    TVAirPlayPINViewController *_pinViewController;	// 64 = 0x40
    UIAlertController *_dialogViewController;	// 72 = 0x48
    _TVAirPlayVideoPlayerViewController *_videoPlayerViewController;	// 80 = 0x50
    TVAirPlayPresentationViewController *_presentationViewController;	// 88 = 0x58
    TVAirPlayAPRKViewController *_aprkViewController;	// 96 = 0x60
}

+ (id)_remoteViewControllerInterface;	// IMP=0x000000010001ae18
+ (id)_exportedInterface;	// IMP=0x000000010001ad18
- (void).cxx_destruct;	// IMP=0x000000010001b4ec
@property(retain, nonatomic) TVAirPlayAPRKViewController *aprkViewController; // @synthesize aprkViewController=_aprkViewController;
@property(retain, nonatomic) TVAirPlayPresentationViewController *presentationViewController; // @synthesize presentationViewController=_presentationViewController;
@property(retain, nonatomic) _TVAirPlayVideoPlayerViewController *videoPlayerViewController; // @synthesize videoPlayerViewController=_videoPlayerViewController;
@property(retain, nonatomic) UIAlertController *dialogViewController; // @synthesize dialogViewController=_dialogViewController;
@property(retain, nonatomic) TVAirPlayPINViewController *pinViewController; // @synthesize pinViewController=_pinViewController;
@property(nonatomic) _Bool dismissing; // @synthesize dismissing=_dismissing;
@property(nonatomic) __weak id <TVAirPlayMediaViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TVAirPlayAPRKVideoSession *APRKVideoSession; // @synthesize APRKVideoSession=_APRKVideoSession;
@property(retain, nonatomic) TVAirPlayURLSession *videoPlaybackSession; // @synthesize videoPlaybackSession=_videoPlaybackSession;
@property(retain, nonatomic) TVAirPlayPresentationSession *presentationSession; // @synthesize presentationSession=_presentationSession;
@property(retain, nonatomic) TVAirPlayInfoSession *dialogInfoSession; // @synthesize dialogInfoSession=_dialogInfoSession;
@property(retain, nonatomic) id <TVAirPlayPinSession> pinSession; // @synthesize pinSession=_pinSession;
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2;	// IMP=0x000000010001ae34
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001aa60
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x000000010001a928
- (void)dismiss;	// IMP=0x000000010001a85c
- (id)preferredFocusEnvironments;	// IMP=0x0000000100019e98

@end
