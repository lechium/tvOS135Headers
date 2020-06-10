/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PXCMMProgressBannerViewLayoutDelegate;
@class PXMomentShareStatusPresentation, UIVisualEffectView, UILabel, UIProgressView, NSString;

@interface PXCMMProgressBannerView : UIView <PXChangeObserver> {

	PXMomentShareStatusPresentation* _momentShareStatusPresentation;
	UIVisualEffectView* _visualEffectView;
	UILabel* _activityLabel;
	UILabel* _pauseLabel;
	UIProgressView* _progressView;
	double _layoutHeight;
	id<PXCMMProgressBannerViewLayoutDelegate> _layoutDelegate;

}

@property (assign,nonatomic,__weak) id<PXCMMProgressBannerViewLayoutDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
@property (nonatomic,readonly) double layoutHeight;                                                        //@synthesize layoutHeight=_layoutHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)_updateProgress;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_updateFonts;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(BOOL)arg2 ;
-(id)initWithMomentShareStatusPresentation:(id)arg1 ;
-(void)_updateActivityTitle;
-(void)_updatePauseTitle;
-(id<PXCMMProgressBannerViewLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<PXCMMProgressBannerViewLayoutDelegate>)arg1 ;
-(double)layoutHeight;
@end
