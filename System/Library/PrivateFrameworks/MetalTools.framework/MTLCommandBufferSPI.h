/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary, NSMutableDictionary;


@protocol MTLCommandBufferSPI <MTLCommandBuffer>
@property (assign,getter=getListIndex,nonatomic) unsigned long long listIndex; 
@property (getter=isProfilingEnabled) BOOL profilingEnabled; 
@property (readonly) NSDictionary * profilingResults; 
@property (nonatomic,readonly) NSMutableDictionary * userDictionary; 
@property (readonly) unsigned long long globalTraceObjectID; 
@optional
-(unsigned long long)protectionOptions;
-(unsigned long long)globalTraceObjectID;
-(void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 timeout:(unsigned)arg3;
-(void)setProtectionOptions:(unsigned long long)arg1;
-(void)addPurgedResource:(id)arg1;
-(void)addPurgedHeap:(id)arg1;
-(id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3;
-(unsigned long long)getListIndex;
-(void)commitAndHold;
-(BOOL)commitAndWaitUntilSubmitted;
-(void*)debugBufferContentsWithLength:(unsigned long long*)arg1;
-(void)setListIndex:(unsigned long long)arg1;
-(id)sampledComputeCommandEncoderWithProgramInfoBuffer:(/*function pointer*/void**)arg1 capacity:(unsigned long long)arg2;
-(id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3;
-(id)debugCommandEncoder;
-(id)fragmentRenderCommandEncoderWithDescriptor:(id)arg1;
-(id)sampledFragmentRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3;

@required
-(BOOL)isProfilingEnabled;
-(NSMutableDictionary *)userDictionary;
-(void)setProfilingEnabled:(BOOL)arg1;
-(NSDictionary *)profilingResults;

@end

