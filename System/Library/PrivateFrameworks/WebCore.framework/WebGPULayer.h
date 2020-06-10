/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CAMetalLayer.h>

@interface WebGPULayer : CAMetalLayer {

	GPUSwapChain* _swapChain;
	float _deviceScaleFactor;

}

@property (assign,nonatomic) GPUSwapChain* swapChain;              //@synthesize swapChain=_swapChain - In the implementation block
-(id)init;
-(CGImageRef)copyImageSnapshotWithColorSpace:(CGColorSpaceRef)arg1 ;
-(GPUSwapChain*)swapChain;
-(void)setSwapChain:(GPUSwapChain*)arg1 ;
@end

