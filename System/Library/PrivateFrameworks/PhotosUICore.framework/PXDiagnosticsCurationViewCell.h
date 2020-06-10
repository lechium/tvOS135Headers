/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, PXStateBadgeView, PXDedupingBadgeView, PXTextSymbolView, PXScoreView, PXSymbolBadgeView, PXIndexView, UIImage, NSString, NSDictionary, NSNumber;

@interface PXDiagnosticsCurationViewCell : UICollectionViewCell {

	UIImageView* _imageView;
	PXStateBadgeView* _clusterStateBadgeView;
	PXStateBadgeView* _stateBadgeView;
	PXStateBadgeView* _alternateStateBadgeView;
	PXDedupingBadgeView* _dedupingBadgeView;
	PXTextSymbolView* _sdofOrHDRBadgeView;
	PXTextSymbolView* _favoriteBadgeView;
	PXTextSymbolView* _utilityBadgeView;
	PXTextSymbolView* _blurryBadgeView;
	PXScoreView* _aestheticScoreView;
	PXScoreView* _contentScoreView;
	PXScoreView* _criteriaScoreView;
	PXSymbolBadgeView* _symbolBadgeView;
	PXSymbolBadgeView* _dedupedSymbolBadgeView;
	PXIndexView* _indexView;
	BOOL _isFavorite;
	BOOL _isUtility;
	BOOL _isBlurry;
	BOOL _isSDOFOrHDR;
	UIImage* _thumbnailImage;
	NSString* _representedAssetIdentifier;
	NSDictionary* _debugInfo;
	NSString* _state;
	NSString* _alternateState;
	NSString* _clusterState;
	double _aestheticScore;
	double _contentScore;
	double _criteriaScore;
	NSNumber* _symbolIndex;
	NSString* _dedupingType;
	NSNumber* _dedupedSymbolIndex;
	unsigned long long _index;

}

@property (nonatomic,retain) UIImage * thumbnailImage;                                            //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (nonatomic,retain) NSString * representedAssetIdentifier;                               //@synthesize representedAssetIdentifier=_representedAssetIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * debugInfo;                                            //@synthesize debugInfo=_debugInfo - In the implementation block
@property (nonatomic,retain) NSString * state;                                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * alternateState;                                           //@synthesize alternateState=_alternateState - In the implementation block
@property (nonatomic,retain) NSString * clusterState;                                             //@synthesize clusterState=_clusterState - In the implementation block
@property (assign,getter=isFavorite,nonatomic) BOOL favorite;                                     //@synthesize isFavorite=_isFavorite - In the implementation block
@property (assign,getter=isUtility,nonatomic) BOOL utility;                                       //@synthesize isUtility=_isUtility - In the implementation block
@property (assign,getter=isBlurry,nonatomic) BOOL blurry;                                         //@synthesize isBlurry=_isBlurry - In the implementation block
@property (assign,setter=setSDOFOrHDR:,getter=isSDOFOrHDR,nonatomic) BOOL sdofOrHDR;              //@synthesize isSDOFOrHDR=_isSDOFOrHDR - In the implementation block
@property (assign,nonatomic) double aestheticScore;                                               //@synthesize aestheticScore=_aestheticScore - In the implementation block
@property (assign,nonatomic) double contentScore;                                                 //@synthesize contentScore=_contentScore - In the implementation block
@property (assign,nonatomic) double criteriaScore;                                                //@synthesize criteriaScore=_criteriaScore - In the implementation block
@property (nonatomic,retain) NSNumber * symbolIndex;                                              //@synthesize symbolIndex=_symbolIndex - In the implementation block
@property (nonatomic,retain) NSString * dedupingType;                                             //@synthesize dedupingType=_dedupingType - In the implementation block
@property (nonatomic,retain) NSNumber * dedupedSymbolIndex;                                       //@synthesize dedupedSymbolIndex=_dedupedSymbolIndex - In the implementation block
@property (assign,nonatomic) unsigned long long index;                                            //@synthesize index=_index - In the implementation block
+(double)cellHeightWithCellWidth:(double)arg1 ;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isFavorite;
-(void)setUtility:(BOOL)arg1 ;
-(void)setDebugInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)debugInfo;
-(void)layoutSubviews;
-(void)setFavorite:(BOOL)arg1 ;
-(double)aestheticScore;
-(NSString *)clusterState;
-(void)setClusterState:(NSString *)arg1 ;
-(UIImage *)thumbnailImage;
-(void)setThumbnailImage:(UIImage *)arg1 ;
-(void)setAlternateState:(NSString *)arg1 ;
-(void)setDedupingType:(NSString *)arg1 ;
-(void)setSDOFOrHDR:(BOOL)arg1 ;
-(void)setBlurry:(BOOL)arg1 ;
-(void)setAestheticScore:(double)arg1 ;
-(void)setContentScore:(double)arg1 ;
-(void)setCriteriaScore:(double)arg1 ;
-(void)setSymbolIndex:(NSNumber *)arg1 ;
-(void)setDedupedSymbolIndex:(NSNumber *)arg1 ;
-(void)setClusterParity:(unsigned long long)arg1 ;
-(void)setComparisonMatch:(BOOL)arg1 ;
-(BOOL)isUtility;
-(BOOL)isBlurry;
-(BOOL)isSDOFOrHDR;
-(NSString *)representedAssetIdentifier;
-(void)setRepresentedAssetIdentifier:(NSString *)arg1 ;
-(NSString *)alternateState;
-(double)contentScore;
-(double)criteriaScore;
-(NSNumber *)symbolIndex;
-(NSString *)dedupingType;
-(NSNumber *)dedupedSymbolIndex;
@end

