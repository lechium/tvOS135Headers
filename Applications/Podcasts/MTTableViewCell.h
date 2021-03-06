//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIColor, UIView;

@interface MTTableViewCell : UITableViewCell
{
    _Bool _enabled;	// 8 = 0x8
    UIView *_separator;	// 16 = 0x10
    _Bool _showsSeparator;	// 24 = 0x18
    UIView *_leftAccessoryView;	// 32 = 0x20
    UIView *_leftEditingAccessoryView;	// 40 = 0x28
    CDUnknownBlockType _deleteButtonBlock;	// 48 = 0x30
    UIColor *_swipeToDeleteButtonColor;	// 56 = 0x38
}

+ (id)defaultCellBackgroundColor;	// IMP=0x000000010001f008
+ (id)detailTextColor;	// IMP=0x000000010001efec
+ (id)textColor;	// IMP=0x000000010001efd8
+ (id)detailFont;	// IMP=0x000000010001efc0
+ (id)titleFont;	// IMP=0x000000010001efa8
+ (double)rowHeight;	// IMP=0x000000010001ef9c
- (void).cxx_destruct;	// IMP=0x000000010001fdb8
@property(retain, nonatomic) UIColor *swipeToDeleteButtonColor; // @synthesize swipeToDeleteButtonColor=_swipeToDeleteButtonColor;
@property(copy, nonatomic) CDUnknownBlockType deleteButtonBlock; // @synthesize deleteButtonBlock=_deleteButtonBlock;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool showsSeparator; // @synthesize showsSeparator=_showsSeparator;
@property(retain, nonatomic) UIView *leftEditingAccessoryView; // @synthesize leftEditingAccessoryView=_leftEditingAccessoryView;
@property(retain, nonatomic) UIView *leftAccessoryView; // @synthesize leftAccessoryView=_leftAccessoryView;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
- (void)didTransitionToState:(unsigned long long)arg1;	// IMP=0x000000010001fc6c
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010001fb20
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010001fabc
- (void)updateCellShadows:(_Bool)arg1;	// IMP=0x000000010001fab8
- (void)updateCellShadows:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010001fa10
- (void)layoutSubviews;	// IMP=0x000000010001f478
- (void)_clearCellEmphasis;	// IMP=0x000000010001f474
- (void)createSeparator;	// IMP=0x000000010001f228
- (void)setupCell;	// IMP=0x000000010001f16c
- (void)prepareForReuse;	// IMP=0x000000010001f094
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010001f01c

@end

