/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIBaseTemplateView.h>

@protocol SiriUILabelStackTemplateViewDelegate;
@class UIView, NSLayoutConstraint, UIStackView, NSMutableDictionary, UILayoutGuide, NSDictionary;

@interface SiriUILabelStackTemplateView : SiriUIBaseTemplateView {

	BOOL _constraintsUpdated;
	id<SiriUILabelStackTemplateViewDelegate> _delegate;
	long long _defaultTextAlignment;
	UIView* _topView;
	UIView* _bottomView;
	NSLayoutConstraint* _topViewConstraint;
	NSLayoutConstraint* _bottomViewConstraint;
	UIStackView* _trailingViews;
	UIStackView* _leadingViews;
	NSMutableDictionary* _componentsForViews;
	UILayoutGuide* _contentBoundsGuide;
	NSDictionary* _contentBoundsGuideConstraints;
	UILayoutGuide* _stackedComponentsBoundsGuide;
	NSMutableDictionary* _stackedComponentsGuideConstraints;

}

@property (nonatomic,retain) UIView * topView;                                                      //@synthesize topView=_topView - In the implementation block
@property (nonatomic,retain) UIView * bottomView;                                                   //@synthesize bottomView=_bottomView - In the implementation block
@property (assign,nonatomic) BOOL constraintsUpdated;                                               //@synthesize constraintsUpdated=_constraintsUpdated - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * topViewConstraint;                         //@synthesize topViewConstraint=_topViewConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * bottomViewConstraint;                      //@synthesize bottomViewConstraint=_bottomViewConstraint - In the implementation block
@property (nonatomic,retain) UIStackView * trailingViews;                                           //@synthesize trailingViews=_trailingViews - In the implementation block
@property (nonatomic,retain) UIStackView * leadingViews;                                            //@synthesize leadingViews=_leadingViews - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * componentsForViews;                              //@synthesize componentsForViews=_componentsForViews - In the implementation block
@property (nonatomic,retain) UILayoutGuide * contentBoundsGuide;                                    //@synthesize contentBoundsGuide=_contentBoundsGuide - In the implementation block
@property (nonatomic,retain) NSDictionary * contentBoundsGuideConstraints;                          //@synthesize contentBoundsGuideConstraints=_contentBoundsGuideConstraints - In the implementation block
@property (nonatomic,retain) UILayoutGuide * stackedComponentsBoundsGuide;                          //@synthesize stackedComponentsBoundsGuide=_stackedComponentsBoundsGuide - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stackedComponentsGuideConstraints;               //@synthesize stackedComponentsGuideConstraints=_stackedComponentsGuideConstraints - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUILabelStackTemplateViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long defaultTextAlignment;                                        //@synthesize defaultTextAlignment=_defaultTextAlignment - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUILabelStackTemplateModel> dataSource; 
-(id<SiriUILabelStackTemplateViewDelegate>)delegate;
-(void)setDelegate:(id<SiriUILabelStackTemplateViewDelegate>)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(void)setDataSource:(id<SiriUILabelStackTemplateModel>)arg1 ;
-(void)reloadData;
-(long long)layoutStyle;
-(void)updateConstraints;
-(void)setBottomView:(UIView *)arg1 ;
-(void)setTopView:(UIView *)arg1 ;
-(UIView *)topView;
-(UIView *)bottomView;
-(double)desiredHeight;
-(void)removeFromTemplatedSuperview;
-(void)setTemplatedSuperview:(id)arg1 ;
-(void)insertTrailingView:(id)arg1 withMargins:(UIEdgeInsets)arg2 ;
-(void)setDefaultTextAlignment:(long long)arg1 ;
-(void)_createContentLayoutGuides;
-(UILayoutGuide *)stackedComponentsBoundsGuide;
-(NSMutableDictionary *)componentsForViews;
-(UILayoutGuide *)contentBoundsGuide;
-(void)_updateTopAndBottomViewConstraints;
-(long long)defaultTextAlignment;
-(void)populateStack;
-(void)insertLeadingView:(id)arg1 withMargins:(UIEdgeInsets)arg2 ;
-(void)insertTopView:(id)arg1 ;
-(BOOL)constraintsUpdated;
-(void)setConstraintsUpdated:(BOOL)arg1 ;
-(NSLayoutConstraint *)topViewConstraint;
-(void)setTopViewConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)bottomViewConstraint;
-(void)setBottomViewConstraint:(NSLayoutConstraint *)arg1 ;
-(UIStackView *)trailingViews;
-(void)setTrailingViews:(UIStackView *)arg1 ;
-(UIStackView *)leadingViews;
-(void)setLeadingViews:(UIStackView *)arg1 ;
-(void)setComponentsForViews:(NSMutableDictionary *)arg1 ;
-(void)setContentBoundsGuide:(UILayoutGuide *)arg1 ;
-(NSDictionary *)contentBoundsGuideConstraints;
-(void)setContentBoundsGuideConstraints:(NSDictionary *)arg1 ;
-(void)setStackedComponentsBoundsGuide:(UILayoutGuide *)arg1 ;
-(NSMutableDictionary *)stackedComponentsGuideConstraints;
-(void)setStackedComponentsGuideConstraints:(NSMutableDictionary *)arg1 ;
@end

