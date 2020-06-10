/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIImageProcessorKernel.h>

@interface CIDisparitySmoothingProcessor : CIImageProcessorKernel
+(int)outputFormat;
+(CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(CGRect)arg3 ;
+(BOOL)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id*)arg4 ;
+(BOOL)synchronizeInputs;
+(int)formatForInputAtIndex:(int)arg1 ;
+(BOOL)hasValidPipelines;
+(void)releasePipelines;
+(void)compilePipelines:(id)arg1 ;
+(void)compilePipelinesIfNeeded:(id)arg1 ;
+(BOOL)outputIsOpaque;
@end

