//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPageViewController.h>

#import "UIPageViewControllerDataSource-Protocol.h"

@class MISSING_TYPE;

@interface _TtC8AppStore32ScreenshotsGalleryViewController : UIPageViewController <UIPageViewControllerDataSource>
{
    MISSING_TYPE *screenshots;	// 8 = 0x8
    MISSING_TYPE *placeholderImages;	// 16 = 0x10
    MISSING_TYPE *fullScreenshotFetcher;	// 24 = 0x18
    MISSING_TYPE *artworkLoader;	// 32 = 0x20
    MISSING_TYPE *galleryViewControllers;	// 40 = 0x28
    MISSING_TYPE *initialSelectedIndex;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000a8728
- (id)initWithTransitionStyle:(long long)arg1 navigationOrientation:(long long)arg2 options:(id)arg3;	// IMP=0x00000001000a8790
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;	// IMP=0x00000001000a8668
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;	// IMP=0x00000001000a865c
- (long long)presentationIndexForPageViewController:(id)arg1;	// IMP=0x00000001000a864c
- (long long)presentationCountForPageViewController:(id)arg1;	// IMP=0x00000001000a85b4
- (void)viewDidLoad;	// IMP=0x00000001000a8588
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000a8184

@end

