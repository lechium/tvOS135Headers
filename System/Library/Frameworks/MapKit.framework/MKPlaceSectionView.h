/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/_MKStackView.h>

@protocol MKPlaceSectionViewDelegate;
@class MKViewWithHairline, MKPlaceSectionItemView, NSArray;

@interface MKPlaceSectionView : _MKStackView {

	unsigned long long _trackingSelectForRow;
	MKViewWithHairline* _hairLineView;
	BOOL _highlightsTouches;
	BOOL _showsBottomHairline;
	id<MKPlaceSectionViewDelegate> _delegate;
	MKPlaceSectionItemView* _headerView;
	NSArray* _rowViews;
	MKPlaceSectionItemView* _footerView;

}

@property (assign,nonatomic,__weak) id<MKPlaceSectionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MKPlaceSectionItemView * headerView;                         //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,copy) NSArray * rowViews;                                            //@synthesize rowViews=_rowViews - In the implementation block
@property (nonatomic,retain) MKPlaceSectionItemView * footerView;                         //@synthesize footerView=_footerView - In the implementation block
@property (assign,nonatomic) BOOL highlightsTouches;                                      //@synthesize highlightsTouches=_highlightsTouches - In the implementation block
@property (assign,nonatomic) BOOL showsBottomHairline;                                    //@synthesize showsBottomHairline=_showsBottomHairline - In the implementation block
-(id<MKPlaceSectionViewDelegate>)delegate;
-(void)setDelegate:(id<MKPlaceSectionViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(MKPlaceSectionItemView *)headerView;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)layoutMarginsDidChange;
-(void)setHeaderView:(MKPlaceSectionItemView *)arg1 ;
-(void)infoCardThemeChanged;
-(void)setShowsBottomHairline:(BOOL)arg1 ;
-(void)setRowViews:(NSArray *)arg1 ;
-(NSArray *)rowViews;
-(void)setRowViews:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateHairlineInsets;
-(unsigned long long)indexOfRowAt:(CGPoint)arg1 ;
-(BOOL)highlightsTouches;
-(void)_touchesBeganForRow:(id)arg1 at:(unsigned long long)arg2 ;
-(void)_touchesCancelledForRow:(id)arg1 at:(unsigned long long)arg2 ;
-(void)_tappedRow:(id)arg1 at:(unsigned long long)arg2 ;
-(void)setHeaderView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateViewsAnimated:(BOOL)arg1 ;
-(void)setFooterView:(id)arg1 animated:(BOOL)arg2 ;
-(id)rowAt:(CGPoint)arg1 ;
-(void)setFooterView:(MKPlaceSectionItemView *)arg1 ;
-(void)setHighlightsTouches:(BOOL)arg1 ;
-(MKPlaceSectionItemView *)footerView;
-(BOOL)showsBottomHairline;
@end

