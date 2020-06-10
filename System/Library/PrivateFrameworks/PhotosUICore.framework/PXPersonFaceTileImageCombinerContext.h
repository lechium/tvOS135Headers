/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor;

@interface PXPersonFaceTileImageCombinerContext : NSObject {

	BOOL _isLTR;
	double _displayScale;
	double _imageSize;
	double _imageOffset;
	UIColor* _backgroundColor;
	UIColor* _borderColor;
	double _borderWidth;

}

@property (nonatomic,readonly) double displayScale;                    //@synthesize displayScale=_displayScale - In the implementation block
@property (nonatomic,readonly) BOOL isLTR;                             //@synthesize isLTR=_isLTR - In the implementation block
@property (nonatomic,readonly) double imageSize;                       //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,readonly) double imageOffset;                     //@synthesize imageOffset=_imageOffset - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * borderColor;                  //@synthesize borderColor=_borderColor - In the implementation block
@property (nonatomic,readonly) double borderWidth;                     //@synthesize borderWidth=_borderWidth - In the implementation block
-(UIColor *)backgroundColor;
-(UIColor *)borderColor;
-(double)borderWidth;
-(double)imageSize;
-(double)displayScale;
-(id)initWithDisplayScale:(double)arg1 isLTR:(BOOL)arg2 imageSize:(double)arg3 imageOffset:(double)arg4 backgroundColor:(id)arg5 borderColor:(id)arg6 borderWidth:(double)arg7 ;
-(BOOL)isLTR;
-(double)imageOffset;
@end

