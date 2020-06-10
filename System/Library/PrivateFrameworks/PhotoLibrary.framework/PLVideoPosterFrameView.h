/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface PLVideoPosterFrameView : UIView {

	UIImageView* _imageView;
	long long _scaleMode;

}

@property (nonatomic,readonly) CGRect imageFrame; 
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)image;
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)imageView;
-(void)layoutSubviews;
-(void)setScaleMode:(long long)arg1 ;
-(CGRect)imageFrame;
@end

