/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXGReusableView.h>
#import <libobjc.A.dylib/PXAccessibilityView.h>

@class PXCuratedLibraryInlineHeaderViewConfiguration, UIVisualEffectView, UIView, UILabel, NSString;

@interface PXCuratedLibraryInlineHeaderView : UIView <PXGReusableView, PXAccessibilityView> {

	PXCuratedLibraryInlineHeaderViewConfiguration* _configuration;
	UIVisualEffectView* _effectView;
	UIView* _tintView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	PXCuratedLibraryInlineHeaderViewConfiguration* _userData;
	CGRect _clippingRect;

}

@property (nonatomic,copy) PXCuratedLibraryInlineHeaderViewConfiguration * userData;              //@synthesize userData=_userData - In the implementation block
@property (assign,nonatomic) CGRect clippingRect;                                                 //@synthesize clippingRect=_clippingRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isAccessible; 
@property (nonatomic,readonly) BOOL isContainedInAsset; 
@property (nonatomic,copy,readonly) NSString * accessibilityLabel; 
+(double)_heightForStyle:(unsigned long long)arg1 ;
+(id)_subtitleFontForStyle:(unsigned long long)arg1 ;
+(id)_titleFontForStyle:(unsigned long long)arg1 ;
+(CGSize)sizeWithConfiguration:(id)arg1 ;
+(double)_titleBaselineDistanceForFont:(id)arg1 ;
-(void)prepareForReuse;
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)accessibilityLabel;
-(void)setUserData:(PXCuratedLibraryInlineHeaderViewConfiguration *)arg1 ;
-(PXCuratedLibraryInlineHeaderViewConfiguration *)userData;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_configureViews;
-(void)becomeReusable;
-(CGRect)clippingRect;
-(void)setClippingRect:(CGRect)arg1 ;
-(BOOL)isAccessible;
-(BOOL)isContainedInAsset;
-(void)_updateConfiguration;
-(void)_setupViews;
-(void)_updateButtonWithConfiguration:(id)arg1 ;
-(void)_setupBackgroundView;
-(void)_setEffectViewCornerRadius:(double)arg1 ;
-(id)_tintViewBackgroundColor;
-(void)_platformSpecificViewSetup;
@end

