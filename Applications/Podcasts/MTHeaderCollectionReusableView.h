//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, UILabel, UIView;

@interface MTHeaderCollectionReusableView : UICollectionReusableView
{
    UILabel *_headerLabel;	// 8 = 0x8
}

+ (id)reuseIdentifier;	// IMP=0x00000001000fc610
+ (double)height;	// IMP=0x00000001000fc604
- (void).cxx_destruct;	// IMP=0x00000001000fca48
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
- (void)setupSubviews;	// IMP=0x00000001000fc9a8
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000fc928
- (void)prepareForReuse;	// IMP=0x00000001000fc8d4
- (void)layoutSubviews;	// IMP=0x00000001000fc824
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) UIView *titleView;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000fc624

@end

