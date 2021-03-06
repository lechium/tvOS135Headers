//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class TVSMButtonGridCollectionViewController, TVSMClockViewController, UIVisualEffectView;

@interface TVSMButtonGridContainerViewController : UIViewController
{
    TVSMButtonGridCollectionViewController *_collectionViewController;	// 8 = 0x8
    TVSMClockViewController *_clockViewController;	// 16 = 0x10
    UIVisualEffectView *_effectView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100007e18
@property(readonly, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(readonly, nonatomic) TVSMClockViewController *clockViewController; // @synthesize clockViewController=_clockViewController;
@property(readonly, nonatomic) TVSMButtonGridCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
- (id)preferredFocusEnvironments;	// IMP=0x0000000100007d78
- (_Bool)definesPresentationContext;	// IMP=0x0000000100007d70
- (void)viewDidLoad;	// IMP=0x00000001000075cc
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100007510

@end

