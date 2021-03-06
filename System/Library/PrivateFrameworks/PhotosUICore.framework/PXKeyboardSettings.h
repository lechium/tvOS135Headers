/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXSettings.h>

@interface PXKeyboardSettings : PXSettings {

	BOOL _enableSelectionShortcuts;
	BOOL _enableAssetSelectionShortcuts;
	BOOL _enableBackgroundDimming;
	BOOL _enableShadow;
	double _focusChangeAnimationDuration;
	double _dimmingFactor;
	double _shadowYOffset;
	double _shadowBlurRadius;
	double _shadowOpacity;
	double _detailsViewOverlayAlpha;

}

@property (assign,nonatomic) BOOL enableSelectionShortcuts;                    //@synthesize enableSelectionShortcuts=_enableSelectionShortcuts - In the implementation block
@property (assign,nonatomic) BOOL enableAssetSelectionShortcuts;               //@synthesize enableAssetSelectionShortcuts=_enableAssetSelectionShortcuts - In the implementation block
@property (assign,nonatomic) double focusChangeAnimationDuration;              //@synthesize focusChangeAnimationDuration=_focusChangeAnimationDuration - In the implementation block
@property (assign,nonatomic) BOOL enableBackgroundDimming;                     //@synthesize enableBackgroundDimming=_enableBackgroundDimming - In the implementation block
@property (assign,nonatomic) BOOL enableShadow;                                //@synthesize enableShadow=_enableShadow - In the implementation block
@property (assign,nonatomic) double dimmingFactor;                             //@synthesize dimmingFactor=_dimmingFactor - In the implementation block
@property (assign,nonatomic) double shadowYOffset;                             //@synthesize shadowYOffset=_shadowYOffset - In the implementation block
@property (assign,nonatomic) double shadowBlurRadius;                          //@synthesize shadowBlurRadius=_shadowBlurRadius - In the implementation block
@property (assign,nonatomic) double shadowOpacity;                             //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
@property (assign,nonatomic) double detailsViewOverlayAlpha;                   //@synthesize detailsViewOverlayAlpha=_detailsViewOverlayAlpha - In the implementation block
+(id)sharedInstance;
-(double)shadowOpacity;
-(void)setShadowOpacity:(double)arg1 ;
-(void)setShadowBlurRadius:(double)arg1 ;
-(double)shadowBlurRadius;
-(void)setDefaultValues;
-(void)applyArchiveValue:(id)arg1 forKey:(id)arg2 ;
-(id)archiveValueForKey:(id)arg1 ;
-(id)parentSettings;
-(id)globalFocusAnimationShadow;
-(BOOL)enableSelectionShortcuts;
-(void)setEnableSelectionShortcuts:(BOOL)arg1 ;
-(BOOL)enableAssetSelectionShortcuts;
-(void)setEnableAssetSelectionShortcuts:(BOOL)arg1 ;
-(double)focusChangeAnimationDuration;
-(void)setFocusChangeAnimationDuration:(double)arg1 ;
-(BOOL)enableBackgroundDimming;
-(void)setEnableBackgroundDimming:(BOOL)arg1 ;
-(BOOL)enableShadow;
-(void)setEnableShadow:(BOOL)arg1 ;
-(double)dimmingFactor;
-(void)setDimmingFactor:(double)arg1 ;
-(double)shadowYOffset;
-(void)setShadowYOffset:(double)arg1 ;
-(double)detailsViewOverlayAlpha;
-(void)setDetailsViewOverlayAlpha:(double)arg1 ;
@end

