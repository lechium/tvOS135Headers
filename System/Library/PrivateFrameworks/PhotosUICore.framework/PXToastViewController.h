/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol PXToastViewControllerDelegate;
@class NSString, UIImage, PXToastPresentationWindow, UILabel, UIImageView, UIVisualEffectView, CAShapeLayer;

@interface PXToastViewController : UIViewController {

	BOOL _shouldUseAnimatedCheckmark;
	id<PXToastViewControllerDelegate> _delegate;
	NSString* _message;
	UIImage* _image;
	PXToastPresentationWindow* _presentationWindow;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UIImageView* _imageView;
	UIVisualEffectView* _toastView;
	CAShapeLayer* _checkLayer;

}

@property (nonatomic,retain) PXToastPresentationWindow * presentationWindow;                 //@synthesize presentationWindow=_presentationWindow - In the implementation block
@property (nonatomic,retain) UILabel * primaryLabel;                                         //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,retain) UILabel * secondaryLabel;                                       //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                        //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) BOOL shouldUseAnimatedCheckmark;                                //@synthesize shouldUseAnimatedCheckmark=_shouldUseAnimatedCheckmark - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * toastView;                                 //@synthesize toastView=_toastView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * checkLayer;                                      //@synthesize checkLayer=_checkLayer - In the implementation block
@property (assign,nonatomic,__weak) id<PXToastViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * message;                                               //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                //@synthesize image=_image - In the implementation block
+(id)_secondaryLabelFont;
+(id)_primaryLabelFont;
+(id)toastWithTitle:(id)arg1 message:(id)arg2 image:(id)arg3 ;
+(id)checkmarkToastWithTitle:(id)arg1 message:(id)arg2 ;
+(id)_fontWithSize:(double)arg1 textStyleAttribute:(CFStringRef)arg2 ;
-(id<PXToastViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PXToastViewControllerDelegate>)arg1 ;
-(void)present;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(UIImageView *)imageView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(UILabel *)primaryLabel;
-(UILabel *)secondaryLabel;
-(void)setPrimaryLabel:(UILabel *)arg1 ;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 image:(id)arg3 ;
-(id)initCheckmarkToastWithTitle:(id)arg1 message:(id)arg2 ;
-(void)_dismissAfterDelay:(double)arg1 ;
-(void)_animateCheckMark;
-(PXToastPresentationWindow *)presentationWindow;
-(void)setPresentationWindow:(PXToastPresentationWindow *)arg1 ;
-(BOOL)shouldUseAnimatedCheckmark;
-(void)setShouldUseAnimatedCheckmark:(BOOL)arg1 ;
-(UIVisualEffectView *)toastView;
-(void)setToastView:(UIVisualEffectView *)arg1 ;
-(CAShapeLayer *)checkLayer;
-(void)setCheckLayer:(CAShapeLayer *)arg1 ;
@end
