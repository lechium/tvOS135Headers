/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIBackdropView, UIActivityIndicatorView, UILabel, UIImageView;

@interface PLProgressHUD : UIView {

	_UIBackdropView* _backdropView;
	UIActivityIndicatorView* _activityIndicatorView;
	UILabel* _label;
	UIImageView* _checkmarkView;
	BOOL _isShowing;

}
-(void)dealloc;
-(void)setText:(id)arg1 ;
-(void)done;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)hide;
-(void)showInView:(id)arg1 ;
@end

