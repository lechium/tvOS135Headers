//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface TVPSharedPSAlbumCreatorCell : UIView
{
    NSString *_creatorName;	// 8 = 0x8
    NSString *_dateCreated;	// 16 = 0x10
    UILabel *_creatorNameLabel;	// 24 = 0x18
    UILabel *_dateCreatedLabel;	// 32 = 0x20
    UIView *_lineDivider;	// 40 = 0x28
}

+ (double)maxCellHeightWithTitle:(id)arg1 subtitle:(id)arg2 maxWidth:(double)arg3;	// IMP=0x0000000100023fdc
- (void).cxx_destruct;	// IMP=0x000000010002475c
@property(retain, nonatomic) UIView *lineDivider; // @synthesize lineDivider=_lineDivider;
@property(retain, nonatomic) UILabel *dateCreatedLabel; // @synthesize dateCreatedLabel=_dateCreatedLabel;
@property(retain, nonatomic) UILabel *creatorNameLabel; // @synthesize creatorNameLabel=_creatorNameLabel;
@property(copy, nonatomic) NSString *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(copy, nonatomic) NSString *creatorName; // @synthesize creatorName=_creatorName;
- (void)layoutSubviews;	// IMP=0x0000000100024468

@end

