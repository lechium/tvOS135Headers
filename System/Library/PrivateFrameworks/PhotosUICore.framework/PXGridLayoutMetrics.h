/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutMetrics.h>

@interface PXGridLayoutMetrics : PXLayoutMetrics {

	BOOL _displaysHeaderTile;
	long long _axis;
	unsigned long long _additionalTileCount;
	CGSize _itemSize;
	CGSize _interItemSpacing;
	CGSize _headerSize;
	CGSize _headerSpacing;
	CGSize _footerSize;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) long long axis;                                      //@synthesize axis=_axis - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                                     //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) CGSize interItemSpacing;                             //@synthesize interItemSpacing=_interItemSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                          //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) BOOL displaysHeaderTile;                             //@synthesize displaysHeaderTile=_displaysHeaderTile - In the implementation block
@property (assign,nonatomic) CGSize headerSize;                                   //@synthesize headerSize=_headerSize - In the implementation block
@property (assign,nonatomic) CGSize headerSpacing;                                //@synthesize headerSpacing=_headerSpacing - In the implementation block
@property (assign,nonatomic) CGSize footerSize;                                   //@synthesize footerSize=_footerSize - In the implementation block
@property (assign,nonatomic) unsigned long long additionalTileCount;              //@synthesize additionalTileCount=_additionalTileCount - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)headerSize;
-(UIEdgeInsets)contentInsets;
-(long long)axis;
-(void)setAxis:(long long)arg1 ;
-(void)setItemSize:(CGSize)arg1 ;
-(CGSize)itemSize;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setInterItemSpacing:(CGSize)arg1 ;
-(CGSize)interItemSpacing;
-(BOOL)displaysHeaderTile;
-(void)setDisplaysHeaderTile:(BOOL)arg1 ;
-(void)setHeaderSize:(CGSize)arg1 ;
-(CGSize)headerSpacing;
-(void)setHeaderSpacing:(CGSize)arg1 ;
-(CGSize)footerSize;
-(void)setFooterSize:(CGSize)arg1 ;
-(unsigned long long)additionalTileCount;
-(void)setAdditionalTileCount:(unsigned long long)arg1 ;
@end

