/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIViewController.h>

@class NSString, VEKProduction, UIImage, UIImageView, PMTitleSubtitleView, PHAsset;

@interface PMPosterViewController : UIViewController {

	BOOL _preventRotation;
	BOOL _isRotating;
	NSString* _titleFontName;
	VEKProduction* _production;
	double _titleScale;
	UIImage* _image;
	UIImageView* _imageView;
	PMTitleSubtitleView* _titleSubtitleView;
	NSString* _titleText;
	NSString* _subtitleText;
	PHAsset* _asset;
	CGRect _landscapeFraming;
	CGRect _portraitFraming;

}

@property (nonatomic,retain) UIImage * image;                                      //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) PMTitleSubtitleView * titleSubtitleView;              //@synthesize titleSubtitleView=_titleSubtitleView - In the implementation block
@property (assign,nonatomic) CGRect landscapeFraming;                              //@synthesize landscapeFraming=_landscapeFraming - In the implementation block
@property (assign,nonatomic) CGRect portraitFraming;                               //@synthesize portraitFraming=_portraitFraming - In the implementation block
@property (assign,nonatomic) BOOL isRotating;                                      //@synthesize isRotating=_isRotating - In the implementation block
@property (nonatomic,retain) NSString * titleText;                                 //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) NSString * subtitleText;                              //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,retain) PHAsset * asset;                                      //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSString * titleFontName;                             //@synthesize titleFontName=_titleFontName - In the implementation block
@property (assign,nonatomic,__weak) VEKProduction * production;                    //@synthesize production=_production - In the implementation block
@property (assign,nonatomic) double titleScale;                                    //@synthesize titleScale=_titleScale - In the implementation block
@property (assign,nonatomic) BOOL preventRotation;                                 //@synthesize preventRotation=_preventRotation - In the implementation block
@property (assign,nonatomic) double titleSubtitleAlpha; 
+(double)biggestScreenPixelDimension;
-(id)init;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(PHAsset *)asset;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(id)processedImageFromImage:(id)arg1 ;
-(void)setAsset:(PHAsset *)arg1 ;
-(NSString *)subtitleText;
-(void)setSubtitleText:(NSString *)arg1 ;
-(UIImageView *)imageView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(NSString *)titleFontName;
-(void)setImageView:(UIImageView *)arg1 ;
-(BOOL)isRotating;
-(void)setTitleFontName:(NSString *)arg1 ;
-(VEKProduction *)production;
-(void)setProduction:(VEKProduction *)arg1 ;
-(double)titleScale;
-(void)setTitleScale:(double)arg1 ;
-(void)updateSubtitleTitleLabelForSize:(CGSize)arg1 ;
-(void)setTitleSubtitleAlpha:(double)arg1 ;
-(PMTitleSubtitleView *)titleSubtitleView;
-(void)assignImageFraming;
-(void)setLandscapeFraming:(CGRect)arg1 ;
-(void)setPortraitFraming:(CGRect)arg1 ;
-(void)fetchImageSomewhatAsynchronously;
-(CGRect)landscapeFraming;
-(CGRect)portraitFraming;
-(CGRect)frameForImage;
-(void)fetchImageAsynchronouslyWithCompletion:(/*^block*/id)arg1 ;
-(CGSize)sizeForImage;
-(BOOL)preventRotation;
-(void)setIsRotating:(BOOL)arg1 ;
-(void)setTitleSubtitleView:(PMTitleSubtitleView *)arg1 ;
-(void)prewarmFraming;
-(double)titleSubtitleAlpha;
-(id)renderToImage;
-(void)setPreventRotation:(BOOL)arg1 ;
@end
