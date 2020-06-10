/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeadBoardUI/HeadBoardUI-Structs.h>
#import <TVUIKit/TVCollectionViewFullScreenLayout.h>

@interface HBUITopShelfParadeCollectionViewLayout : TVCollectionViewFullScreenLayout {

	BOOL _promotionSectionContentViewsHidden;
	BOOL _contentSectionContentViewsHidden;

}

@property (assign,nonatomic) BOOL promotionSectionContentViewsHidden;              //@synthesize promotionSectionContentViewsHidden=_promotionSectionContentViewsHidden - In the implementation block
@property (assign,nonatomic) BOOL contentSectionContentViewsHidden;                //@synthesize contentSectionContentViewsHidden=_contentSectionContentViewsHidden - In the implementation block
+(Class)layoutAttributesClass;
-(id)debugDescription;
-(id)init;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(BOOL)promotionSectionContentViewsHidden;
-(BOOL)contentSectionContentViewsHidden;
-(void)_invalidateItemsInSection:(long long)arg1 ;
-(void)setPromotionSectionContentViewsHidden:(BOOL)arg1 ;
-(void)setContentSectionContentViewsHidden:(BOOL)arg1 ;
@end

