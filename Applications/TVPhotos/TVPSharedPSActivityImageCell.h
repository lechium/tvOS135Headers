//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVPPhotoCell.h"

@class NSString, TVPImageView, UILabel;

@interface TVPSharedPSActivityImageCell : TVPPhotoCell
{
    _Bool _isVideo;	// 8 = 0x8
    NSString *_assetLocalIdentifier;	// 16 = 0x10
    TVPImageView *_bubbleImageView;	// 24 = 0x18
    TVPImageView *_videoView;	// 32 = 0x20
    UILabel *_commentsLabel;	// 40 = 0x28
    unsigned long long _totalComments;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000813a0
@property(nonatomic) unsigned long long totalComments; // @synthesize totalComments=_totalComments;
@property(retain, nonatomic) UILabel *commentsLabel; // @synthesize commentsLabel=_commentsLabel;
@property(retain, nonatomic) TVPImageView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) TVPImageView *bubbleImageView; // @synthesize bubbleImageView=_bubbleImageView;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(copy, nonatomic) NSString *assetLocalIdentifier; // @synthesize assetLocalIdentifier=_assetLocalIdentifier;
- (void)layoutSubviews;	// IMP=0x0000000100080ecc
- (void)setTotalComments:(unsigned long long)arg1 commentBadge:(id)arg2;	// IMP=0x0000000100080ba4
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100080af0
- (void)_updatePlaceholderImage;	// IMP=0x00000001000809e8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100080990

@end

