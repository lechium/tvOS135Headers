/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _MTLIndirectDrawIndexedPatchesArguments : NSObject {

	unsigned long long _numberOfPatchControlPoints;
	unsigned long long _patchStart;
	unsigned long long _patchCount;
	void* _patchIndexBufferVirtualAddress;
	unsigned long long _patchIndexBufferOffset;
	void* _controlPointIndexBufferVirtualAddress;
	unsigned long long _controlPointIndexBufferOffset;
	unsigned long long _instanceCount;
	unsigned long long _baseInstance;

}

@property (assign,nonatomic) unsigned long long numberOfPatchControlPoints;              //@synthesize numberOfPatchControlPoints=_numberOfPatchControlPoints - In the implementation block
@property (assign,nonatomic) unsigned long long patchStart;                              //@synthesize patchStart=_patchStart - In the implementation block
@property (assign,nonatomic) unsigned long long patchCount;                              //@synthesize patchCount=_patchCount - In the implementation block
@property (assign,nonatomic) void* patchIndexBufferVirtualAddress;                       //@synthesize patchIndexBufferVirtualAddress=_patchIndexBufferVirtualAddress - In the implementation block
@property (assign,nonatomic) void* controlPointIndexBufferVirtualAddress;                //@synthesize controlPointIndexBufferVirtualAddress=_controlPointIndexBufferVirtualAddress - In the implementation block
@property (assign,nonatomic) unsigned long long instanceCount;                           //@synthesize instanceCount=_instanceCount - In the implementation block
@property (assign,nonatomic) unsigned long long baseInstance;                            //@synthesize baseInstance=_baseInstance - In the implementation block
-(unsigned long long)instanceCount;
-(void)setInstanceCount:(unsigned long long)arg1 ;
-(unsigned long long)baseInstance;
-(void)setBaseInstance:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPatchControlPoints;
-(void)setNumberOfPatchControlPoints:(unsigned long long)arg1 ;
-(unsigned long long)patchStart;
-(void)setPatchStart:(unsigned long long)arg1 ;
-(unsigned long long)patchCount;
-(void)setPatchCount:(unsigned long long)arg1 ;
-(void*)patchIndexBufferVirtualAddress;
-(void)setPatchIndexBufferVirtualAddress:(void*)arg1 ;
-(void*)controlPointIndexBufferVirtualAddress;
-(void)setControlPointIndexBufferVirtualAddress:(void*)arg1 ;
@end

