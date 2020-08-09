//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class PBPIPControlButton, UIStackView;
@protocol PBPIPControlsDelegate;

@interface PBPIPControlsViewController : UIViewController
{
    id <PBPIPControlsDelegate> _delegate;	// 8 = 0x8
    UIStackView *_stackView;	// 16 = 0x10
    PBPIPControlButton *_stopPictureInPictureButton;	// 24 = 0x18
    PBPIPControlButton *_movePictureInPictureButton;	// 32 = 0x20
    PBPIPControlButton *_cancelPictureInPictureButton;	// 40 = 0x28
    long long _currentQuadrant;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100144638
@property(nonatomic) long long currentQuadrant; // @synthesize currentQuadrant=_currentQuadrant;
@property(retain, nonatomic) PBPIPControlButton *cancelPictureInPictureButton; // @synthesize cancelPictureInPictureButton=_cancelPictureInPictureButton;
@property(retain, nonatomic) PBPIPControlButton *movePictureInPictureButton; // @synthesize movePictureInPictureButton=_movePictureInPictureButton;
@property(retain, nonatomic) PBPIPControlButton *stopPictureInPictureButton; // @synthesize stopPictureInPictureButton=_stopPictureInPictureButton;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) __weak id <PBPIPControlsDelegate> delegate; // @synthesize delegate=_delegate;
- (void)playPausePressed:(id)arg1;	// IMP=0x000000010014433c
- (void)menuPressed:(id)arg1;	// IMP=0x00000001001442b4
- (void)cancelPictureInPictureButtonPressed:(id)arg1;	// IMP=0x000000010014422c
- (void)movePictureInPictureButtonPressed:(id)arg1;	// IMP=0x0000000100144178
- (void)expandPictureInPictureButtonPressed:(id)arg1;	// IMP=0x00000001001440f0
- (void)hideControlsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100143aa0
- (void)showControlsAnimated:(_Bool)arg1;	// IMP=0x000000010014357c
- (id)preferredFocusEnvironments;	// IMP=0x0000000100143434
- (void)viewDidLoad;	// IMP=0x0000000100142734
- (id)initWithQuadrant:(long long)arg1;	// IMP=0x000000010014248c

@end

