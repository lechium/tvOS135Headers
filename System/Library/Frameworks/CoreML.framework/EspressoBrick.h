/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EspressoBrick <NSObject>
@optional
-(BOOL)hasDynamicOutputShape:(unsigned long long)arg1;
-(id)computeDynamicOutputShape:(id)arg1;
-(void)setMappedWeights:(void*)arg1 sizeInBytes:(unsigned long long)arg2;
-(void)encodeToMetalCommandBuffer:(id)arg1 inputTensors:(id)arg2 outputTensors:(id)arg3;
-(void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2;

@required
-(id)initWithParameters:(id)arg1;
-(id)setupForInputShapes:(id)arg1 withParameters:(id)arg2;
-(BOOL)hasGPUSupport;

@end
