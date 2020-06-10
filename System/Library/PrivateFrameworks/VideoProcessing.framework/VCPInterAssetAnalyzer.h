/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPInterAssetAnalyzer : NSObject
+(CGSize)thumbnailSizeForAsset:(id)arg1 withResources:(id)arg2 ;
+(BOOL)canUseLastFrameOfAsset:(id)arg1 withResources:(id)arg2 ;
-(id)init;
-(int)_generateLastFrameDistanceDescriptor:(id*)arg1 withDescriptorClass:(Class)arg2 forAsset:(id)arg3 ;
-(CVBufferRef)_getThumbnailForAsset:(id)arg1 withResouces:(id)arg2 andPixelFormat:(int)arg3 ;
-(int)computeDistance:(float*)arg1 fromArray:(id)arg2 toArray:(id)arg3 ;
-(int)computeDistance:(float*)arg1 withDescriptorClass:(id)arg2 fromAsset:(id)arg3 toAsset:(id)arg4 ;
-(int)generateDistanceDescriptor:(id*)arg1 withDescriptorClass:(Class)arg2 forAsset:(id)arg3 withResources:(id)arg4 lastFrame:(BOOL)arg5 ;
@end

