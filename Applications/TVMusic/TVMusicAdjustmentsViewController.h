//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, UIScrollView;

@interface TVMusicAdjustmentsViewController : UIViewController
{
    UIScrollView *_scrollView;	// 8 = 0x8
    NSArray *_adjusters;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000271ac
@property(retain, nonatomic) NSArray *adjusters; // @synthesize adjusters=_adjusters;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x0000000100027180
- (id)preferredFocusEnvironments;	// IMP=0x00000001000270c4
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100027074
- (void)_updateAdjusterData;	// IMP=0x0000000100026f14
- (void)viewDidLoad;	// IMP=0x0000000100026514
- (id)initWithAdjusters:(id)arg1;	// IMP=0x000000010002648c

@end

