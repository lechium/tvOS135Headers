/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class _TVImageView, UIView;

@interface VUICollectionViewFeaturedView : UIView {

	_TVImageView* _imageView;
	UIView* _overlayView;

}

@property (nonatomic,retain) _TVImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                  //@synthesize overlayView=_overlayView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(_TVImageView *)imageView;
-(void)layoutSubviews;
-(void)setImageView:(_TVImageView *)arg1 ;
-(UIView *)overlayView;
-(void)setOverlayView:(UIView *)arg1 ;
@end
