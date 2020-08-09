//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSIndexPath, NSString, UIColor, UIImage, UIRefreshControl, UIView;
@protocol MTTableViewDataSource;

@interface MTTableView : UITableView <UIGestureRecognizerDelegate>
{
    NSIndexPath *_presentationPath;	// 8 = 0x8
    UIView *_bottomFillView;	// 16 = 0x10
    UIImage *_emptyCircleImage;	// 24 = 0x18
    UIRefreshControl *_refreshControl;	// 32 = 0x20
    _Bool _sectionFooterFloatingDisabled;	// 40 = 0x28
    _Bool _adjustContentOffsetForRefreshControlAsNeeded;	// 41 = 0x29
    _Bool _disableRefreshControlWhileEditing;	// 42 = 0x2a
    UIColor *_bottomFillColor;	// 48 = 0x30
    UIView *_hiddenHeaderView;	// 56 = 0x38
    UIView *_hiddenFooterView;	// 64 = 0x40
    UIView *_overlayView;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000001000441e8
@property(nonatomic) _Bool disableRefreshControlWhileEditing; // @synthesize disableRefreshControlWhileEditing=_disableRefreshControlWhileEditing;
@property(nonatomic) _Bool adjustContentOffsetForRefreshControlAsNeeded; // @synthesize adjustContentOffsetForRefreshControlAsNeeded=_adjustContentOffsetForRefreshControlAsNeeded;
@property(nonatomic) _Bool sectionFooterFloatingDisabled; // @synthesize sectionFooterFloatingDisabled=_sectionFooterFloatingDisabled;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UIView *hiddenFooterView; // @synthesize hiddenFooterView=_hiddenFooterView;
@property(retain, nonatomic) UIView *hiddenHeaderView; // @synthesize hiddenHeaderView=_hiddenHeaderView;
@property(retain, nonatomic) UIColor *bottomFillColor; // @synthesize bottomFillColor=_bottomFillColor;
- (_Bool)allowsFooterViewsToFloat;	// IMP=0x0000000100044110
- (id)preferredFocusEnvironments;	// IMP=0x0000000100043ff8
- (void)decodeRestorableStateWithCoder:(id)arg1;	// IMP=0x0000000100043fc4
- (void)encodeRestorableStateWithCoder:(id)arg1;	// IMP=0x0000000100043f90
- (void)setContentSize:(struct CGSize)arg1;	// IMP=0x0000000100043f5c
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x0000000100043f28
- (void)setContentOffset:(struct CGPoint)arg1;	// IMP=0x0000000100043ef4
- (struct UIEdgeInsets)insetsFromRefreshControl;	// IMP=0x0000000100043e20
- (void)setRefreshControl:(id)arg1;	// IMP=0x0000000100043da0
- (void)enablePullToRefresh;	// IMP=0x0000000100043d00
- (void)disablePullToRefresh;	// IMP=0x0000000100043cc8
- (void)updateRefreshControlEnabledState;	// IMP=0x0000000100043c34
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100043bbc
- (void)setTableFooterView:(id)arg1;	// IMP=0x00000001000438ec
- (void)layoutSubviews;	// IMP=0x0000000100043514

// Remaining properties
@property(nonatomic) __weak id <MTTableViewDataSource> dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
