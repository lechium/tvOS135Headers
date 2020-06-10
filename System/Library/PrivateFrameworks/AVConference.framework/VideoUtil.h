/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VideoUtil : NSObject
+(unsigned)videoCodecForPayload:(int)arg1 ;
+(id)convertPixelBuffer:(CVBufferRef)arg1 toImageType:(int)arg2 withAssetIdentifier:(id)arg3 cameraStatusBits:(unsigned char)arg4 ;
+(int)setupBufferPool:(_CVPixelBufferPool*)arg1 width:(double)arg2 height:(double)arg3 ;
+(CGSize)sizeForVideoResolution:(long long)arg1 ;
+(CFStringRef)typeIdentifierForImageType:(int)arg1 ;
+(CGSize)getBestCaptureSizeForEncodingSize:(CGSize)arg1 ;
+(CGRect)adjustFaceBounds:(CGRect)arg1 fromOriginalBufferSize:(CGSize)arg2 toCroppedBufferSize:(CGSize)arg3 ;
+(long long)videoResolutionForWidth:(int)arg1 height:(int)arg2 ;
+(void)adjustFaceMetadataForPixelBuffer:(CVBufferRef)arg1 originalWidth:(unsigned long long)arg2 originalHeight:(unsigned long long)arg3 ;
+(long long)compareVideoAspectRatioSizeA:(CGSize)arg1 toSizeB:(CGSize)arg2 ;
@end

