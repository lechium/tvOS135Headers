//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, SRPagingScrollView;
@protocol SRPagerViewDataSource, SRPagerViewDelegate;

@interface SRPagerView : UIView <UIScrollViewDelegate>
{
    SRPagingScrollView *_scrollView;	// 8 = 0x8
    _Bool _scrollViewIsDragging;	// 16 = 0x10
    _Bool _scrollViewIsScrollingBetweenPages;	// 17 = 0x11
    UIView *_activePageView;	// 24 = 0x18
    unsigned long long _transitionState;	// 32 = 0x20
    id <SRPagerViewDataSource> _dataSource;	// 40 = 0x28
    id <SRPagerViewDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000778ac
@property(nonatomic, getter=_scrollViewIsScrollingBetweenPages, setter=_setScrollViewIsScrollingBetweenPages:) _Bool scrollViewIsScrollingBetweenPages; // @synthesize scrollViewIsScrollingBetweenPages=_scrollViewIsScrollingBetweenPages;
@property(nonatomic, getter=_scrollViewIsDragging, setter=_setScrollViewIsDragging:) _Bool scrollViewIsDragging; // @synthesize scrollViewIsDragging=_scrollViewIsDragging;
@property(nonatomic) __weak id <SRPagerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SRPagerViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) unsigned long long transitionState; // @synthesize transitionState=_transitionState;
@property(retain, nonatomic) UIView *activePageView; // @synthesize activePageView=_activePageView;
- (void)_scrollingDidEnd;	// IMP=0x00000001000777b4
- (id)_activePageViewBasedOnScrollViewPosition;	// IMP=0x0000000100077600
- (_Bool)_multiplePageViewsAreVisible;	// IMP=0x0000000100077464
- (_Bool)_containsPageView:(id)arg1;	// IMP=0x0000000100077414
- (id)_pageViews;	// IMP=0x00000001000773fc
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x00000001000773e8
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000001000773dc
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000001000773cc
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000100077394
- (void)_updateTransitionState;	// IMP=0x00000001000772d0
@property(nonatomic, getter=isPagingEnabled) _Bool pagingEnabled;
- (void)setActivePageView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100077188
- (void)removePageView:(id)arg1;	// IMP=0x0000000100076fd0
- (void)addPageView:(id)arg1;	// IMP=0x0000000100076f50
- (void)insertPageView:(id)arg1 atIndex:(long long)arg2;	// IMP=0x0000000100076df8
- (void)reloadData;	// IMP=0x0000000100076bf4
- (void)layoutSubviews;	// IMP=0x0000000100076a64
- (void)didMoveToWindow;	// IMP=0x0000000100076a14
- (id)initWithFrame:(struct CGRect)arg1 textInputEnabled:(_Bool)arg2;	// IMP=0x0000000100076938

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

