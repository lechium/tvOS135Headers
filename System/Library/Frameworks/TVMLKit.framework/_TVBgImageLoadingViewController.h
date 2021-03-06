/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <TVMLKit/TVAppTemplateController.h>

@class NSString;

@interface _TVBgImageLoadingViewController : UIViewController <TVAppTemplateController> {

	id _imageProxy;
	BOOL _loaded;
	SCD_Struct_TV20 _bgImageLoadingOptions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_backdropImageFromImage:(id)arg1 blurStyle:(long long)arg2 backgroundImageSize:(CGSize)arg3 targetSize:(CGSize)arg4 ;
+(id)_decorateImage:(id)arg1 decorator:(id)arg2 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)preferredStatusBarStyle;
-(long long)_blurEffectStyle;
-(void)loadFromViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateWithViewElement:(id)arg1 ;
-(CGSize)_backgroundImageProxySize;
-(id)_backgroundImageProxy;
-(BOOL)_backgroundImageRequiresBlur;
-(BOOL)_isBackdropNeeded;
-(BOOL)_shouldLoadBackgroundImageAsynchronously;
@end

