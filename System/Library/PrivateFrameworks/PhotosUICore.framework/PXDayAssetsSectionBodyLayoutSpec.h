/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXFeatureSpec.h>

@interface PXDayAssetsSectionBodyLayoutSpec : PXFeatureSpec {

	long long _numberOfColumns;
	double _interitemSpacing;
	SCD_Struct_PX75 _bodyCornerRadius;

}

@property (nonatomic,readonly) long long numberOfColumns;                     //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (nonatomic,readonly) double interitemSpacing;                       //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PX76 bodyCornerRadius;              //@synthesize bodyCornerRadius=_bodyCornerRadius - In the implementation block
-(long long)numberOfColumns;
-(double)interitemSpacing;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(SCD_Struct_PX76)bodyCornerRadius;
@end

