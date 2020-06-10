/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLFunction.h>

@class NSString;

@interface _MTLFunctionInternal : _MTLFunction {

	MTLFunctionData _functionData;
	unsigned char _publicMetadataInitialized;
	unsigned char _privateMetadataInitialized;
	unsigned char _sourceArchiveMetadataInitialized;
	MTLProgramObject* _programObject;
	NSString* _filePath;
	long long _lineNumber;

}
-(void)dealloc;
-(id)arguments;
-(void)setArguments:(id)arg1 ;
-(long long)lineNumber;
-(id)vertexAttributes;
-(id)functionConstants;
-(unsigned char)bitcodeType;
-(id)pluginData;
-(unsigned long long)bitCodeFileSize;
-(unsigned long long)bitCodeOffset;
-(const SCD_Struct_MT49*)bitCodeHash;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 libraryData:(MTLLibraryData*)arg3 functionData:(MTLFunctionData*)arg4 device:(id)arg5 ;
-(unsigned long long)sourceArchiveOffset;
-(void)setSourceArchiveOffset:(unsigned long long)arg1 ;
-(void)setReturnType:(id)arg1 ;
-(void)setLineNumber:(long long)arg1 ;
-(void)setFilePath:(id)arg1 ;
-(void)setFunctionConstants:(id)arg1 ;
-(void)setVertexAttributes:(id)arg1 ;
-(id)filePath;
-(void)setUnpackedFilePath:(id)arg1 ;
-(BOOL)needsFunctionConstantValues;
-(id)newSpecializedFunctionWithRequestType:(int)arg1 llvmTargetVersion:(unsigned)arg2 constants:(id)arg3 functionCache:(id)arg4 options:(unsigned)arg5 error:(id*)arg6 ;
-(void)newSpecializedFunctionWithRequestType:(int)arg1 llvmTargetVersion:(unsigned)arg2 constants:(id)arg3 functionCache:(id)arg4 options:(unsigned)arg5 sync:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
-(id)stageInputAttributes;
-(unsigned long long)patchType;
-(long long)patchControlPointCount;
-(id)functionConstantsDictionary;
-(id)newFunctionWithPluginData:(id)arg1 bitcodeType:(unsigned char)arg2 ;
-(id)unpackedFilePath;
-(id)returnType;
-(void)initializePublicMetadata;
-(void)initializePrivateMetadata;
-(void)initializeSourceArchive;
-(MTLProgramObject*)programObject;
-(const MTLFunctionData*)functionData;
-(void)setBitcodeType:(unsigned char)arg1 ;
-(void)setPluginData:(id)arg1 ;
-(void)setStageInputAttributes:(id)arg1 ;
-(id)functionInputs;
@end

