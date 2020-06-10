/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutMetrics.h>

@interface PXMonthsLayoutMetrics : PXLayoutMetrics {

	long long _sizeClass;
	long long _orientation;
	double _interitemSpacing;
	double _defaultSectionAspectRatio;
	double _chapterHeaderHeight;
	UIEdgeInsets _padding;
	UIEdgeInsets _chapterHeaderPadding;

}

@property (assign,nonatomic) long long sizeClass;                            //@synthesize sizeClass=_sizeClass - In the implementation block
@property (assign,nonatomic) long long orientation;                          //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double interitemSpacing;                        //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) double defaultSectionAspectRatio;               //@synthesize defaultSectionAspectRatio=_defaultSectionAspectRatio - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                           //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) double chapterHeaderHeight;                     //@synthesize chapterHeaderHeight=_chapterHeaderHeight - In the implementation block
@property (assign,nonatomic) UIEdgeInsets chapterHeaderPadding;              //@synthesize chapterHeaderPadding=_chapterHeaderPadding - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(double)interitemSpacing;
-(void)setInteritemSpacing:(double)arg1 ;
-(long long)sizeClass;
-(void)setSizeClass:(long long)arg1 ;
-(double)defaultSectionAspectRatio;
-(void)setDefaultSectionAspectRatio:(double)arg1 ;
-(double)chapterHeaderHeight;
-(void)setChapterHeaderHeight:(double)arg1 ;
-(UIEdgeInsets)chapterHeaderPadding;
-(void)setChapterHeaderPadding:(UIEdgeInsets)arg1 ;
@end

