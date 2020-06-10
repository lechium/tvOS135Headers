/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLIndirectComputeCommandSPI <MTLIndirectComputeCommand>
@required
-(unsigned long long)getCommandType;
-(unsigned long long)getPipelineStateUniqueIdentifier;
-(void*)getKernelBufferAtIndex:(unsigned long long)arg1;
-(id)dispatchThreadgroupsArguments;
-(id)dispatchThreadsArguments;
-(unsigned long long)getThreadgroupMemoryLengthAtIndex:(unsigned long long)arg1;
-(SCD_Struct_MT30*)getStageInRegion;
-(BOOL)hasBarrier;

@end

