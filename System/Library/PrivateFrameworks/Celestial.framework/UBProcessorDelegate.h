/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UBProcessorDelegate <NSObject>
@optional
-(void)processor:(id)arg1 outputReadyWithFrameType:(int)arg2 outputPixelBuffer:(CVBufferRef)arg3 outputMetadata:(id)arg4 error:(int)arg5;
-(id)processorGetInferenceResults:(id)arg1;
-(void)processor:(id)arg1 didSelectFusionMode:(int)arg2;

@end

