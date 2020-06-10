/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface _TtCC8VideosUI18DecoratedShelfView11ContentView : UIView {

	 debugUIEnabled;
	 shelfMode;
	 hostMediaController;
	 didHostMediaController;
	 backgroundMediaController;
	 shelfView;
	 shelfRowMetrics;
	 focusEnvironments;
	 backgroundViewModel;
	 viewModel;
	 verticalStackView;
	 $__lazy_storage_$_logoGradientView;
	 channelLogoView;
	 logoImageView;
	 platterView;
	 gradientLayer;
	 opacityMaskLayer;

}

@property (readonly,nonatomic) NSArray * preferredFocusEnvironments; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSArray *)preferredFocusEnvironments;
@end
