/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLVertexBufferLayoutDescriptor.h>

@interface MTLVertexBufferLayoutDescriptorInternal : MTLVertexBufferLayoutDescriptor {

	unsigned long long _stride;
	unsigned long long _stepFunction;
	unsigned long long _instanceStepRate;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(unsigned long long)stride;
-(unsigned long long)stepFunction;
-(unsigned long long)stepRate;
-(void)setStride:(unsigned long long)arg1 ;
-(void)setStepFunction:(unsigned long long)arg1 ;
-(void)setStepRate:(unsigned long long)arg1 ;
@end
