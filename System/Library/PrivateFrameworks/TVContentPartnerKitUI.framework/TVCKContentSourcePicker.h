/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/TVContentPartnerKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol TVCKContentSourcePickerDelegate;
@class UIView, NSArray, TVCKContentSource, TVCKTertiaryView, NSString;

@interface TVCKContentSourcePicker : UIView {

	unsigned long long _style;
	id<TVCKContentSourcePickerDelegate> _delegate;
	UIView* _titleView;
	NSArray* _sources;
	TVCKContentSource* _selectedSource;
	TVCKTertiaryView* _tertiaryView;
	id _moreSourcesSource;
	NSArray* _presentationSources;

}

@property (nonatomic,retain) TVCKTertiaryView * tertiaryView;                                  //@synthesize tertiaryView=_tertiaryView - In the implementation block
@property (nonatomic,retain) id moreSourcesSource;                                             //@synthesize moreSourcesSource=_moreSourcesSource - In the implementation block
@property (nonatomic,copy) NSArray * presentationSources;                                      //@synthesize presentationSources=_presentationSources - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                         //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<TVCKContentSourcePickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * titleView;                                               //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,copy) NSArray * sources;                                                  //@synthesize sources=_sources - In the implementation block
@property (nonatomic,retain) TVCKContentSource * selectedSource;                               //@synthesize selectedSource=_selectedSource - In the implementation block
@property (nonatomic,copy,readonly) NSString * moreSourcesTitle; 
-(id)initWithCoder:(id)arg1 ;
-(id<TVCKContentSourcePickerDelegate>)delegate;
-(void)setDelegate:(id<TVCKContentSourcePickerDelegate>)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(NSArray *)sources;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSources:(NSArray *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusedView;
-(UIView *)titleView;
-(void)setTitleView:(UIView *)arg1 ;
-(unsigned long long)_maxNumberOfButtons;
-(id)moreSourcesSource;
-(void)_didPressMoreSourcesButton:(id)arg1 ;
-(NSString *)moreSourcesTitle;
-(unsigned long long)_buttonStyleForPickerStyle:(unsigned long long)arg1 ;
-(void)_configureButton:(id)arg1 withSource:(id)arg2 selectedSource:(id)arg3 ;
-(id)_existingButtons;
-(id)_visibleSources;
-(void)_didSelectMoreSources:(id)arg1 ;
-(TVCKTertiaryView *)tertiaryView;
-(id)_tertiaryViewsWithTitleView:(id)arg1 buttons:(id)arg2 ;
-(void)_setSelectedSource:(id)arg1 ;
-(id)_presentationSourcesForSources:(id)arg1 withSelectedSource:(id)arg2 ;
-(void)setPresentationSources:(NSArray *)arg1 ;
-(id)_constructButtonsForPresentationSources:(id)arg1 withSelectedSource:(id)arg2 ;
-(NSArray *)presentationSources;
-(TVCKContentSource *)selectedSource;
-(id)_existingButtonForSource:(id)arg1 ;
-(void)setSelectedSource:(TVCKContentSource *)arg1 ;
-(void)_didSelectSource:(id)arg1 ;
-(void)setTertiaryView:(TVCKTertiaryView *)arg1 ;
-(void)setMoreSourcesSource:(id)arg1 ;
@end

