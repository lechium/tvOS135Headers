//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface TVMusicTimestampLabel : UIView
{
    UILabel *_label;	// 8 = 0x8
    UIView *_imageView;	// 16 = 0x10
    UIView *_contentView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000c7d28
- (void)layoutSubviews;	// IMP=0x00000001000c7b78
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000c7b38
@property(retain, nonatomic) NSString *text;
- (id)init;	// IMP=0x00000001000c751c

@end
