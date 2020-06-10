/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, UIImageView, UIColor, TVImageProxy;

@interface TVPImageView : UIView {

	BOOL _rendersImageAsTemplates;
	UIImage* _image;
	UIImageView* _imageView;
	UIColor* __focusedColor;
	long long _imageContentMode;
	UIImage* _flatImage;
	UIImage* _flatHighlightImage;
	BOOL _selected;
	BOOL _imageLoaded;
	BOOL __enableEdgeAntialiasingOnSelected;
	BOOL __edgeAntialiasingOnSelectedRestrictedToLeftRightEdge;
	UIImage* _placeholderImage;
	TVImageProxy* _imageProxy;
	/*^block*/id _completion;
	UIColor* __tintColor;

}

@property (nonatomic,copy) id completion;                                                                                                                            //@synthesize completion=_completion - In the implementation block
@property (assign,getter=isImageLoaded,nonatomic) BOOL imageLoaded;                                                                                                  //@synthesize imageLoaded=_imageLoaded - In the implementation block
@property (setter=_setTintColor:,nonatomic,retain) UIColor * _tintColor;                                                                                             //@synthesize _tintColor=__tintColor - In the implementation block
@property (setter=_setFocusedColor:,nonatomic,retain) UIColor * _focusedColor;                                                                                       //@synthesize _focusedColor=__focusedColor - In the implementation block
@property (assign,setter=_setEnableEdgeAntialiasingOnSelected:,nonatomic) BOOL _enableEdgeAntialiasingOnSelected;                                                    //@synthesize _enableEdgeAntialiasingOnSelected=__enableEdgeAntialiasingOnSelected - In the implementation block
@property (assign,setter=_setEdgeAntialiasingOnSelectedRestrictedToLeftRightEdge:,nonatomic) BOOL _edgeAntialiasingOnSelectedRestrictedToLeftRightEdge;              //@synthesize _edgeAntialiasingOnSelectedRestrictedToLeftRightEdge=__edgeAntialiasingOnSelectedRestrictedToLeftRightEdge - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImage * placeholderImage;                                                                                                             //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign,nonatomic) double cornerRadius; 
@property (nonatomic,retain) TVImageProxy * imageProxy;                                                                                                              //@synthesize imageProxy=_imageProxy - In the implementation block
-(void)dealloc;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)_setImage:(id)arg1 ;
-(UIColor *)_tintColor;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setContentMode:(long long)arg1 ;
-(BOOL)isImageLoaded;
-(long long)contentMode;
-(id)_imageView;
-(void)willMoveToWindow:(id)arg1 ;
-(TVImageProxy *)imageProxy;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(void)_setTintColor:(id)arg1 ;
-(void)_setFocusedColor:(id)arg1 ;
-(void)_loadImage;
-(void)setImageLoaded:(BOOL)arg1 ;
-(void)setImageProxy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_enableEdgeAntialiasingOnSelected;
-(UIColor *)_focusedColor;
-(void)_setEnableEdgeAntialiasingOnSelected:(BOOL)arg1 ;
-(void)_setEdgeAntialiasingOnSelectedRestrictedToLeftRightEdge:(BOOL)arg1 ;
-(void)_updateImageViewWithPlaceholderImageIfNeeded;
-(BOOL)_edgeAntialiasingOnSelectedRestrictedToLeftRightEdge;
@end

