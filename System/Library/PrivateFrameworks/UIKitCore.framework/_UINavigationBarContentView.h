/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIBarContentView.h>
#import <UIKitCore/_UIBarButtonItemViewOwner.h>
#import <UIKitCore/_UINavigationBarTitleViewDataSource.h>
#import <UIKitCore/_UINavigationBarTransitionContextParticipant.h>
#import <UIKitCore/_UIButtonBarButtonChangeObserver.h>

@protocol _UINavigationBarContentViewDelegate;
@class _UINavigationBarTransitionContext, UIImage, NSMutableArray, NSDictionary, UIBarButtonItem, NSArray, NSString, UIView, UIColor, _UINavigationBarContentViewLayout, _UIBarButtonItemData;

@interface _UINavigationBarContentView : _UIBarContentView <_UIBarButtonItemViewOwner, _UINavigationBarTitleViewDataSource, _UINavigationBarTransitionContextParticipant, _UIButtonBarButtonChangeObserver> {

	_UINavigationBarTransitionContext* _transitionContext;
	BOOL _deferResolvedSizeChange;
	BOOL _outstandingDeferredResolvedSizeChange;
	UIImage* _backIndicatorImage;
	BOOL _needsBackButtonUpdate;
	double _backButtonMargin;
	double _backButtonMaximumWidth;
	BOOL _isHidingBackButton;
	BOOL _isShowingBackButton;
	BOOL _isHidingLeadingBar;
	NSMutableArray* _currentAnimations;
	NSMutableArray* _currentCompletions;
	BOOL _backButtonHidden;
	BOOL _leadingItemsSupplementBackItem;
	NSDictionary* _effectiveTitleAttributes;
	id<_UINavigationBarContentViewDelegate> _delegate;
	UIBarButtonItem* _backButtonItem;
	NSArray* _leadingBarButtonItems;
	NSArray* _trailingBarButtonItems;
	NSString* _title;
	UIView* _titleView;
	double _inlineTitleViewAlpha;
	NSDictionary* _titleAttributes;
	UIColor* _textColor;
	double _overrideSize;
	long long _requestedContentSize;
	long long _barMetrics;
	_UINavigationBarContentViewLayout* _layout;
	UIOffset _titlePositionAdjustment;

}

@property (nonatomic,readonly) NSDictionary * effectiveTitleAttributes;                                     //@synthesize effectiveTitleAttributes=_effectiveTitleAttributes - In the implementation block
@property (assign,nonatomic,__weak) id<_UINavigationBarContentViewDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * backButtonItem;                                              //@synthesize backButtonItem=_backButtonItem - In the implementation block
@property (assign,nonatomic) BOOL backButtonHidden;                                                         //@synthesize backButtonHidden=_backButtonHidden - In the implementation block
@property (assign,nonatomic) double backButtonMargin; 
@property (nonatomic,copy) NSArray * leadingBarButtonItems;                                                 //@synthesize leadingBarButtonItems=_leadingBarButtonItems - In the implementation block
@property (assign,nonatomic) BOOL leadingItemsSupplementBackItem;                                           //@synthesize leadingItemsSupplementBackItem=_leadingItemsSupplementBackItem - In the implementation block
@property (nonatomic,copy) NSArray * trailingBarButtonItems;                                                //@synthesize trailingBarButtonItems=_trailingBarButtonItems - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIView * titleView;                                                            //@synthesize titleView=_titleView - In the implementation block
@property (assign,nonatomic) double inlineTitleViewAlpha;                                                   //@synthesize inlineTitleViewAlpha=_inlineTitleViewAlpha - In the implementation block
@property (nonatomic,copy) NSDictionary * titleAttributes;                                                  //@synthesize titleAttributes=_titleAttributes - In the implementation block
@property (assign,nonatomic) UIOffset titlePositionAdjustment;                                              //@synthesize titlePositionAdjustment=_titlePositionAdjustment - In the implementation block
@property (nonatomic,copy) UIColor * textColor;                                                             //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) double overrideSize;                                                           //@synthesize overrideSize=_overrideSize - In the implementation block
@property (nonatomic,copy) _UIBarButtonItemData * plainItemAppearance; 
@property (nonatomic,copy) _UIBarButtonItemData * doneItemAppearance; 
@property (nonatomic,copy) _UIBarButtonItemData * backButtonAppearance; 
@property (nonatomic,readonly) UIView * accessibilityTitleView; 
@property (nonatomic,readonly) UIView * accessibilityBackButtonView; 
@property (assign,nonatomic) long long requestedContentSize;                                                //@synthesize requestedContentSize=_requestedContentSize - In the implementation block
@property (nonatomic,readonly) long long currentContentSize; 
@property (nonatomic,readonly) double currentHeight; 
@property (assign,nonatomic) long long barMetrics;                                                          //@synthesize barMetrics=_barMetrics - In the implementation block
@property (assign,setter=_setBackButtonMaximumWidth:,nonatomic) double backButtonMaximumWidth; 
@property (nonatomic,readonly) _UINavigationBarContentViewLayout * layout;                                  //@synthesize layout=_layout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id<_UINavigationBarContentViewDelegate>)delegate;
-(void)setDelegate:(id<_UINavigationBarContentViewDelegate>)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(_UINavigationBarContentViewLayout *)layout;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)textColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isRTL;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)tintColorDidChange;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)layoutMarginsDidChange;
-(void)updateContent;
-(void)safeAreaInsetsDidChange;
-(double)currentHeight;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(UIView *)titleView;
-(void)setTitleView:(UIView *)arg1 ;
-(void)setTitleAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)titleAttributes;
-(double)_intrinsicHeight;
-(void)setDirectionalLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(void)_setupTitleViewAnimated:(BOOL)arg1 ;
-(void)_itemDidChangeSelectionState:(id)arg1 ;
-(void)_itemDidChangeEnabledState:(id)arg1 ;
-(void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2 ;
-(void)_itemStandardViewNeedsUpdate:(id)arg1 ;
-(void)_itemDidChangeWidth:(id)arg1 ;
-(void)_itemDidChangeHiddenState:(id)arg1 ;
-(long long)_currentContentSize;
-(void)_appearanceChanged;
-(void)setPlainItemAppearance:(_UIBarButtonItemData *)arg1 ;
-(void)setDoneItemAppearance:(_UIBarButtonItemData *)arg1 ;
-(void)_itemDidChangeSecondaryActions:(id)arg1 ;
-(void)_itemDidChangeSecondaryActionState:(id)arg1 ;
-(_UIBarButtonItemData *)plainItemAppearance;
-(_UIBarButtonItemData *)doneItemAppearance;
-(id)backIndicatorImage;
-(unsigned long long)edgesPaddingBarButtonItem:(id)arg1 ;
-(BOOL)compactMetrics;
-(long long)barType;
-(double)backButtonMargin;
-(double)defaultEdgeSpacing;
-(double)backButtonMaximumWidth;
-(void)backButtonTitleDidChange;
-(_UIBarButtonItemData *)backButtonAppearance;
-(void)setBackIndicatorImage:(id)arg1 ;
-(long long)barMetrics;
-(long long)currentContentSize;
-(id)_accessibility_HUDItemForPoint:(CGPoint)arg1 ;
-(id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(CGPoint)arg1 ;
-(void)setRequestedContentSize:(long long)arg1 ;
-(long long)requestedContentSize;
-(void)titleViewChangedLayout:(id)arg1 ;
-(void)titleViewChangedUnderlayContent:(id)arg1 ;
-(void)titleViewChangedHeight:(id)arg1 ;
-(void)titleViewChangedMaximumBackButtonWidth:(id)arg1 ;
-(void)titleViewChangedStandardDisplayItems:(id)arg1 ;
-(void)titleViewChangedDisplayItemAlpha:(id)arg1 ;
-(void)titleView:(id)arg1 needsUpdatedContentOverlayRects:(id)arg2 ;
-(double)titleViewLargeTitleHeight:(id)arg1 ;
-(CGSize)titleViewLargeTitleHeightRange:(id)arg1 ;
-(double)titleViewContentBaselineOffsetFromTop:(id)arg1 ;
-(double)titleViewContentBaseHeight:(id)arg1 ;
-(void)titleViewChangedPreferredDisplaySize:(id)arg1 ;
-(void)_updateLayoutMarginsForLayout:(id)arg1 ;
-(id)_newLayout;
-(void)_addCoordinatedAnimation:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)__backButtonAction:(id)arg1 ;
-(void)setNeedsBackButtonUpdate;
-(void)_clearAllAnimations;
-(NSDictionary *)effectiveTitleAttributes;
-(void)_applyTitleAttributesToLabel:(id)arg1 withString:(id)arg2 ;
-(void)setInlineTitleViewAlpha:(double)arg1 ;
-(void)_setBackButtonMaximumWidth:(double)arg1 ;
-(void)setTitlePositionAdjustment:(UIOffset)arg1 ;
-(void)setOverrideSize:(double)arg1 ;
-(void)_setupBackButtonAnimated:(BOOL)arg1 ;
-(void)_setupLeadingButtonBarAnimated:(BOOL)arg1 ;
-(void)_setupTrailingButtonBarAnimated:(BOOL)arg1 ;
-(void)_runAllScheduledAnimations:(BOOL)arg1 ;
-(void)_setAssistants;
-(void)updateContentAnimated:(BOOL)arg1 ;
-(void)_clearAssistants;
-(void)setBackButtonAppearance:(_UIBarButtonItemData *)arg1 ;
-(id)_layoutForAugmentedTitleView:(id)arg1 ;
-(CGRect)_overlayRectForView:(id)arg1 inTargetView:(id)arg2 ;
-(id)_accessibility_barButtonItemAtPoint:(CGPoint)arg1 ;
-(void)recordFromStateForTransition:(id)arg1 ;
-(void)prepareToRecordToState:(id)arg1 ;
-(void)recordToStateForTransition:(id)arg1 ;
-(void)ensureBackButtonTruncationOccursWithContext:(id)arg1 ;
-(void)finalizeStateFromTransition:(id)arg1 ;
-(void)setBarMetrics:(long long)arg1 ;
-(void)setBackButtonItem:(UIBarButtonItem *)arg1 ;
-(void)resolvedSizeDidChange;
-(void)_setDirectionalLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(UIView *)accessibilityTitleView;
-(UIView *)accessibilityBackButtonView;
-(void)clearTransitionContext;
-(void)adoptLayout:(id)arg1 ;
-(void)adoptNewLayout;
-(void)updateAugmentedTitleViewNavigationBarTraitsTo:(id)arg1 from:(id)arg2 ;
-(void)setBackButtonMargin:(double)arg1 ;
-(UIBarButtonItem *)backButtonItem;
-(BOOL)backButtonHidden;
-(void)setBackButtonHidden:(BOOL)arg1 ;
-(NSArray *)leadingBarButtonItems;
-(void)setLeadingBarButtonItems:(NSArray *)arg1 ;
-(BOOL)leadingItemsSupplementBackItem;
-(void)setLeadingItemsSupplementBackItem:(BOOL)arg1 ;
-(NSArray *)trailingBarButtonItems;
-(void)setTrailingBarButtonItems:(NSArray *)arg1 ;
-(double)inlineTitleViewAlpha;
-(UIOffset)titlePositionAdjustment;
-(double)overrideSize;
@end
