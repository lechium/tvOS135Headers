/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol NUIWidgetGridViewDataSource, NUIWidgetGridViewDelegate;
@class NUIContainerGridView, NSArray;

@interface NUIWidgetGridView : UIView {

	NUIContainerGridView* _gridView;
	NSArray* _itemViews;
	CGSize _labelSizes[8];
	unsigned long long _currentLayout;
	id<NUIWidgetGridViewDataSource> _dataSource;
	id<NUIWidgetGridViewDelegate> _delegate;
	long long _imageStyle;
	long long _titleStyle;
	long long _subtitleStyle;
	double _centerAdjustmentAllowed;
	double _currentLabelOutset;

}

@property (nonatomic,readonly) double currentLabelOutset;                                    //@synthesize currentLabelOutset=_currentLabelOutset - In the implementation block
@property (assign,nonatomic,__weak) id<NUIWidgetGridViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<NUIWidgetGridViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long imageStyle;                                           //@synthesize imageStyle=_imageStyle - In the implementation block
@property (assign,nonatomic) long long titleStyle;                                           //@synthesize titleStyle=_titleStyle - In the implementation block
@property (assign,nonatomic) long long subtitleStyle;                                        //@synthesize subtitleStyle=_subtitleStyle - In the implementation block
@property (assign,nonatomic) double centerAdjustmentAllowed;                                 //@synthesize centerAdjustmentAllowed=_centerAdjustmentAllowed - In the implementation block
+(double)itemWidth;
+(unsigned long long)maxNumberOfItems;
-(id<NUIWidgetGridViewDelegate>)delegate;
-(void)setDelegate:(id<NUIWidgetGridViewDelegate>)arg1 ;
-(long long)currentLayout;
-(unsigned long long)itemsPerRow;
-(id<NUIWidgetGridViewDataSource>)dataSource;
-(void)setDataSource:(id<NUIWidgetGridViewDataSource>)arg1 ;
-(void)reloadData;
-(long long)imageStyle;
-(void)setImageStyle:(long long)arg1 ;
-(void)layoutSubviews;
-(void)contentSizeDidChange;
-(double)horizontalMargin;
-(id)initWithDataSource:(id)arg1 delegate:(id)arg2 ;
-(long long)titleStyle;
-(long long)subtitleStyle;
-(CGSize)entitledExtraSpaceForCellAtIndex:(unsigned long long)arg1 ;
-(id)cellForGridViewItemAtIndex:(long long)arg1 ;
-(CGSize)borrowableSpaceForCellAtIndex:(unsigned long long)arg1 ;
-(double)centerAdjustmentAllowed;
-(unsigned long long)maxNumberOfItems;
-(double)labelMinSpacing;
-(void)generateItems;
-(double)labelOutset;
-(void)_createGridViewIfNeeded;
-(void)setTitleStyle:(long long)arg1 ;
-(void)setSubtitleStyle:(long long)arg1 ;
-(void)setCenterAdjustmentAllowed:(double)arg1 ;
-(double)currentLabelOutset;
@end

