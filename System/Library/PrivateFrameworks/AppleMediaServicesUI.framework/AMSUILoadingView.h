/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIActivityIndicatorView, UILabel;

@interface AMSUILoadingView : UIView {

	UIActivityIndicatorView* _activityIndicator;
	UILabel* _label;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) UILabel * label;                                          //@synthesize label=_label - In the implementation block
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)startAnimating;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setLoadingText:(id)arg1 ;
-(void)layoutSubviews;
-(void)stopAnimating;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
@end

