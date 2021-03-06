/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/MTLCommandBufferSPI.h>

@protocol MTLCommandBuffer;
@class NSDictionary, NSMutableDictionary, NSMutableString, CMMTLCommandQueue, NSString, NSError;

@interface CMMTLCommandBuffer : NSObject <MTLCommandBufferSPI> {

	NSMutableString* _cmLabel;
	CMMTLCommandQueue* _cmCommandQueue;
	id<MTLCommandBuffer> _commandBuffer;
	BOOL _unretained;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) id<MTLCommandQueue> commandQueue; 
@property (readonly) BOOL retainedReferences; 
@property (copy) NSString * label; 
@property (readonly) double kernelStartTime; 
@property (readonly) double kernelEndTime; 
@property (readonly) double GPUStartTime; 
@property (readonly) double GPUEndTime; 
@property (readonly) unsigned long long status; 
@property (readonly) NSError * error; 
@property (assign,getter=getListIndex,nonatomic) unsigned long long listIndex; 
@property (getter=isProfilingEnabled) BOOL profilingEnabled; 
@property (readonly) NSDictionary * profilingResults; 
@property (nonatomic,readonly) NSMutableDictionary * userDictionary; 
@property (readonly) unsigned long long globalTraceObjectID; 
-(void)forwardInvocation:(id)arg1 ;
-(id<MTLCommandQueue>)commandQueue;
-(void)commit;
-(void)waitUntilScheduled;
-(void)waitUntilCompleted;
-(id)renderCommandEncoderWithDescriptor:(id)arg1 ;
-(id)computeCommandEncoder;
-(id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1 ;
-(id)initWithCMMTLCommandQueue:(id)arg1 unretained:(BOOL)arg2 ;
@end

