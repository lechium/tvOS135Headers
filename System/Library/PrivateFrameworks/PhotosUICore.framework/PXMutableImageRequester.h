/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXMutableImageRequester <NSObject>
@property (nonatomic,retain) id<PXUIImageProvider> mediaProvider; 
@property (nonatomic,retain) id<PXDisplayAsset> asset; 
@property (assign,nonatomic) CGSize contentSize; 
@property (assign,nonatomic) CGRect cropRect; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) CGSize maximumRequestSize; 
@property (assign,nonatomic) CGRect desiredContentsRect; 
@property (assign,nonatomic) CGSize viewportSize; 
@required
-(double)scale;
-(void)setScale:(double)arg1;
-(CGSize)contentSize;
-(id<PXDisplayAsset>)asset;
-(void)setCropRect:(CGRect)arg1;
-(CGRect)cropRect;
-(void)setAsset:(id)arg1;
-(void)setContentSize:(CGSize)arg1;
-(id<PXUIImageProvider>)mediaProvider;
-(CGRect)desiredContentsRect;
-(void)setDesiredContentsRect:(CGRect)arg1;
-(void)setMediaProvider:(id)arg1;
-(void)handlePreloadedImage:(id)arg1;
-(void)handlePreloadedImageRequester:(id)arg1;
-(CGSize)maximumRequestSize;
-(void)setMaximumRequestSize:(CGSize)arg1;
-(CGSize)viewportSize;
-(void)setViewportSize:(CGSize)arg1;

@end

