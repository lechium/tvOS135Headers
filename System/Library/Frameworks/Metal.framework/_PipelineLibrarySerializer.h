/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _PipelineLibrarySerializer : NSObject {

	void* _binarySerializer;

}
-(id)init;
-(void)dealloc;
-(unsigned long long)addLibrary:(void*)arg1 ;
-(id)addSpecializedFunction:(id)arg1 descriptor:(const void*)arg2 ;
-(id)addRenderPipelineDescriptor:(const void*)arg1 ;
-(id)addComputePipelineDescriptor:(const void*)arg1 ;
-(unsigned long long)totalSize;
-(unsigned long long)writeToMemory:(char*)arg1 size:(unsigned long long)arg2 ;
@end

