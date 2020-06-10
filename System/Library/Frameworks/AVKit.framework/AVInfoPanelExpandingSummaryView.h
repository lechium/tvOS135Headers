/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_UIFloatingContentViewDelegate.h>

@class UITextView, _UIFloatingContentView, UIVisualEffectView, UILabel, NSLayoutConstraint, NSString;

@interface AVInfoPanelExpandingSummaryView : UIView <_UIFloatingContentViewDelegate> {

	UITextView* _summaryTextView;
	_UIFloatingContentView* _floatingView;
	UIVisualEffectView* _backgroundView;
	UILabel* _moreLabel;
	NSLayoutConstraint* _horizontalConstraintOfMoreButton;
	BOOL _isTextTruncating;
	BOOL _highLighted;

}

@property (assign,getter=isHighlighted,nonatomic) BOOL highLighted;              //@synthesize highLighted=_highLighted - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) unsigned long long maxNumberOfLines; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_updateAppearance;
-(BOOL)_isTextTruncating;
-(void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(unsigned long long)maxNumberOfLines;
-(void)setMaxNumberOfLines:(unsigned long long)arg1 ;
-(void)_createViews;
-(id)_moreLabelExclusionPath;
-(void)setHighLighted:(BOOL)arg1 ;
@end
