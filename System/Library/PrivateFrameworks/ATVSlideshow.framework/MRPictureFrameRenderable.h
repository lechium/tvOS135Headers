/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MUPoolObject.h>

@class MRImage, NSString;

@interface MRPictureFrameRenderable : MUPoolObject {

	MRImage* image;
	CGRect rect;
	CGRect innerRect;
	CGRect outerRect;
	NSString* where;
	BOOL ignoreBlend;
	MRPictureFrameRenderable* next;

}

@property (nonatomic,retain) MRImage * image; 
@property (nonatomic,copy) NSString * where; 
+(SCD_Struct_MR15*)poolInfo;
-(void)dealloc;
-(void)purge;
-(MRImage *)image;
-(void)setImage:(MRImage *)arg1 ;
-(NSString *)where;
-(void)setWhere:(NSString *)arg1 ;
@end

