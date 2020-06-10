/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/VUISBIconProgressViewDelegate.h>

@class UIImageView, UIView, VUISBIconProgressView, UIImage, NSString;

@interface VUIAppInstallView : UIView <VUISBIconProgressViewDelegate> {

	UIImageView* _appIconImageView;
	UIView* _backgroundKnockoutView;
	/*^block*/id _completion;
	VUISBIconProgressView* _progressView;
	UIImage* _appIcon;
	double _installProgress;

}

@property (nonatomic,retain) UIImage * appIcon;                     //@synthesize appIcon=_appIcon - In the implementation block
@property (assign,nonatomic) double installProgress;                //@synthesize installProgress=_installProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_progressMaskImage;
+(CGSize)_appIconSize;
+(double)_appIconRadius;
-(void)dealloc;
-(double)installProgress;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIImage *)appIcon;
-(void)setAppIcon:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(void)setInstallProgress:(double)arg1 ;
-(void)finishInstallationWithCompletion:(/*^block*/id)arg1 ;
-(void)setWaiting;
-(void)progressViewCanBeRemoved:(id)arg1 ;
@end
