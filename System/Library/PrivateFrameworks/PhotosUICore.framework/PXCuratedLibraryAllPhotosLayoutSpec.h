/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXFeatureSpec.h>

@class NSArray, PXCuratedLibraryInlineHeadersLayoutSpec;

@interface PXCuratedLibraryAllPhotosLayoutSpec : PXFeatureSpec {

	BOOL _preferAspectFitContentMode;
	BOOL _useSaliency;
	BOOL _allowsAspectFit;
	long long _defaultNumberOfColumns;
	long long _initialNumberOfColumns;
	long long _maxColumnsForIndividualItems;
	double _interitemSpacing;
	double _aspectFitInteritemSpacing;
	long long _maxColumnsForSaliency;
	NSArray* _supportedColumns;
	PXCuratedLibraryInlineHeadersLayoutSpec* _inlineHeadersSpec;
	UIEdgeInsets _aspectFitEdgeMargins;
	UIEdgeInsets _squareEdgeMargins;

}

@property (nonatomic,readonly) long long defaultNumberOfColumns;                                         //@synthesize defaultNumberOfColumns=_defaultNumberOfColumns - In the implementation block
@property (nonatomic,readonly) long long initialNumberOfColumns;                                         //@synthesize initialNumberOfColumns=_initialNumberOfColumns - In the implementation block
@property (nonatomic,readonly) long long maxColumnsForIndividualItems;                                   //@synthesize maxColumnsForIndividualItems=_maxColumnsForIndividualItems - In the implementation block
@property (nonatomic,readonly) double interitemSpacing;                                                  //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (nonatomic,readonly) BOOL preferAspectFitContentMode;                                          //@synthesize preferAspectFitContentMode=_preferAspectFitContentMode - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets aspectFitEdgeMargins;                                        //@synthesize aspectFitEdgeMargins=_aspectFitEdgeMargins - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets squareEdgeMargins;                                           //@synthesize squareEdgeMargins=_squareEdgeMargins - In the implementation block
@property (nonatomic,readonly) double aspectFitInteritemSpacing;                                         //@synthesize aspectFitInteritemSpacing=_aspectFitInteritemSpacing - In the implementation block
@property (nonatomic,readonly) BOOL useSaliency;                                                         //@synthesize useSaliency=_useSaliency - In the implementation block
@property (nonatomic,readonly) long long maxColumnsForSaliency;                                          //@synthesize maxColumnsForSaliency=_maxColumnsForSaliency - In the implementation block
@property (nonatomic,readonly) BOOL allowsAspectFit;                                                     //@synthesize allowsAspectFit=_allowsAspectFit - In the implementation block
@property (nonatomic,readonly) NSArray * supportedColumns;                                               //@synthesize supportedColumns=_supportedColumns - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryInlineHeadersLayoutSpec * inlineHeadersSpec;              //@synthesize inlineHeadersSpec=_inlineHeadersSpec - In the implementation block
-(double)interitemSpacing;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)useSaliency;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 availableThumbnailSizes:(id)arg3 ;
-(long long)defaultNumberOfColumns;
-(long long)initialNumberOfColumns;
-(long long)maxColumnsForIndividualItems;
-(BOOL)preferAspectFitContentMode;
-(UIEdgeInsets)aspectFitEdgeMargins;
-(UIEdgeInsets)squareEdgeMargins;
-(double)aspectFitInteritemSpacing;
-(long long)maxColumnsForSaliency;
-(BOOL)allowsAspectFit;
-(NSArray *)supportedColumns;
-(PXCuratedLibraryInlineHeadersLayoutSpec *)inlineHeadersSpec;
@end

