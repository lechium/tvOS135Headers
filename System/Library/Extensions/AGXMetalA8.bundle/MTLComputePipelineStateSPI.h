/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Extensions/AGXMetalA8.bundle/AGXMetalA8
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MTLDebugInstrumentationData;


@protocol MTLComputePipelineStateSPI <MTLComputePipelineState>
@property (readonly) unsigned long long staticThreadgroupMemoryLength; 
@property (assign,nonatomic) unsigned long long resourceIndex; 
@property (readonly) unsigned long long uniqueIdentifier; 
@property (nonatomic,retain,readonly) MTLDebugInstrumentationData * debugInstrumentationData; 
@optional
-(unsigned long long)resourceIndex;
-(void)setResourceIndex:(unsigned long long)arg1;

@required
-(unsigned long long)uniqueIdentifier;
-(unsigned long long)staticThreadgroupMemoryLength;
-(MTLDebugInstrumentationData *)debugInstrumentationData;

@end

