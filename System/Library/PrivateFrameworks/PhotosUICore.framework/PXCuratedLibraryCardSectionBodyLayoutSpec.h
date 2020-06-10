/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXFeatureSpec.h>

@class PXGGradient;

@interface PXCuratedLibraryCardSectionBodyLayoutSpec : PXFeatureSpec {

	double _aspectRatio;
	double _horizontalMargin;
	PXGGradient* _skimmingHintGradient;
	double _distanceToNextLayout;
	SCD_Struct_PX75 _cornerRadius;
	UIEdgeInsets _padding;

}

@property (assign,nonatomic) double aspectRatio;                                //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX76 cornerRadius;                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                              //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) double horizontalMargin;                           //@synthesize horizontalMargin=_horizontalMargin - In the implementation block
@property (assign,nonatomic) double distanceToNextLayout;                       //@synthesize distanceToNextLayout=_distanceToNextLayout - In the implementation block
@property (nonatomic,readonly) PXGGradient * skimmingHintGradient;              //@synthesize skimmingHintGradient=_skimmingHintGradient - In the implementation block
-(SCD_Struct_PX76)cornerRadius;
-(void)setCornerRadius:(SCD_Struct_PX76)arg1 ;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(double)aspectRatio;
-(void)setAspectRatio:(double)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(double)horizontalMargin;
-(void)setHorizontalMargin:(double)arg1 ;
-(PXGGradient *)skimmingHintGradient;
-(double)distanceToNextLayout;
-(void)setDistanceToNextLayout:(double)arg1 ;
@end
