//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

@interface _HBMultiSizedImageView : UIView
{
    UIImage *_image;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    UIImageView *_shadowImageView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010005773c
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000100057558
- (id)_shadowImage;	// IMP=0x0000000100057328
- (id)_shadowPath;	// IMP=0x000000010005724c
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2;	// IMP=0x0000000100056fd4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100056fb4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100056fa4

@end

