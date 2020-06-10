/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <SiriTVUI/SiriTVUITemplateItem.h>

@class NSDictionary, NSString, NSArray;

@interface SiriTVUIImageViewTemplateItem : SiriTVUITemplateItem {

	NSDictionary* _images;
	double _alpha;
	unsigned long long _imageStyle;
	NSString* _monogramText;
	NSArray* _monogramNames;
	CGSize _pointSize;

}

@property (nonatomic,copy) NSDictionary * images;                        //@synthesize images=_images - In the implementation block
@property (assign,nonatomic) CGSize pointSize;                           //@synthesize pointSize=_pointSize - In the implementation block
@property (assign,nonatomic) double alpha;                               //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) unsigned long long imageStyle;              //@synthesize imageStyle=_imageStyle - In the implementation block
@property (nonatomic,copy) NSString * monogramText;                      //@synthesize monogramText=_monogramText - In the implementation block
@property (nonatomic,copy) NSArray * monogramNames;                      //@synthesize monogramNames=_monogramNames - In the implementation block
-(double)alpha;
-(void)setAlpha:(double)arg1 ;
-(NSDictionary *)images;
-(void)setImages:(NSDictionary *)arg1 ;
-(CGSize)pointSize;
-(void)setPointSize:(CGSize)arg1 ;
-(unsigned long long)imageStyle;
-(void)setImageStyle:(unsigned long long)arg1 ;
-(NSString *)monogramText;
-(NSArray *)monogramNames;
-(void)setMonogramText:(NSString *)arg1 ;
-(void)setMonogramNames:(NSArray *)arg1 ;
-(id)initWithImages:(id)arg1 pointSize:(CGSize)arg2 alpha:(double)arg3 monogramNames:(id)arg4 ;
-(id)initWithImages:(id)arg1 pointSize:(CGSize)arg2 alpha:(double)arg3 monogramText:(id)arg4 ;
-(id)initWithImages:(id)arg1 pointSize:(CGSize)arg2 alpha:(double)arg3 ;
-(id)initWithImages:(id)arg1 pointSize:(CGSize)arg2 ;
@end

