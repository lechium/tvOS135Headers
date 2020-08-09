//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface TVMusicSocialBadge : UIView
{
    NSMutableArray *_unloadedImageViews;	// 8 = 0x8
    NSArray *_imageViews;	// 16 = 0x10
    double _minimumInteritemSpacing;	// 24 = 0x18
}

+ (id)socialBadgeFromElement:(id)arg1 existingView:(id)arg2;	// IMP=0x00000001000a8d8c
- (void).cxx_destruct;	// IMP=0x00000001000aa324
@property(nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(copy, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
- (void)_checkReadyToDisplay;	// IMP=0x00000001000aa1c0
- (void)_didLoadImageForImageView:(id)arg1;	// IMP=0x00000001000aa108
- (void)layoutSubviews;	// IMP=0x00000001000a9dd0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000a9bd0
- (void)dealloc;	// IMP=0x00000001000a9848
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000a97ec

@end
