/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, UIImageView;

@interface TVMusicNowPlayingBackgroundView : UIView {

	UIImage* _artworkImage;
	UIImageView* _animatedView1;
	UIImageView* _animatedView2;

}
-(id)initWithImage:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)_setupAnimatedViews;
-(void)_setupAnimations;
-(void)_setupAnimationForView:(id)arg1 duration:(double)arg2 ;
-(id)_blurredImageWithImage:(id)arg1 targetSize:(CGSize)arg2 ;
-(id)_resizeImage:(CGImageRef)arg1 targetSize:(CGSize)arg2 shouldDither:(BOOL)arg3 ;
@end

