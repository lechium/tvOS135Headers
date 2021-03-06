/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXFeatureSpec.h>

@interface PXCuratedLibraryInlineHeadersLayoutSpec : PXFeatureSpec {

	unsigned long long _style;
	double _headerOffsetY;
	UIEdgeInsets _headerFloatMargins;
	UIEdgeInsets _headerContentMargins;

}

@property (nonatomic,readonly) unsigned long long style;                       //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets headerFloatMargins;                //@synthesize headerFloatMargins=_headerFloatMargins - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets headerContentMargins;              //@synthesize headerContentMargins=_headerContentMargins - In the implementation block
@property (nonatomic,readonly) double headerOffsetY;                           //@synthesize headerOffsetY=_headerOffsetY - In the implementation block
-(unsigned long long)style;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(UIEdgeInsets)headerFloatMargins;
-(UIEdgeInsets)headerContentMargins;
-(double)headerOffsetY;
@end

