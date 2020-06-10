/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextRecognition/TextRecognition-Structs.h>
@class MLModel, NSArray, NSString;

@interface CRMLModel : NSObject {

	MLModel* model;
	int _modelHeight;
	int _modelWidth;
	int _classCount;
	const int* _codeMap;
	NSArray* _modelShape;
	long long _gpuBatchSize;
	long long _cpuBatchSize;

}

@property (readonly) NSString * modelName; 
@property (readonly) const int* codeMap;                //@synthesize codeMap=_codeMap - In the implementation block
@property (readonly) int classCount;                    //@synthesize classCount=_classCount - In the implementation block
@property (retain) NSArray * modelShape;                //@synthesize modelShape=_modelShape - In the implementation block
@property (readonly) int inputWidth; 
@property (readonly) int inputHeight; 
@property (assign) long long gpuBatchSize;              //@synthesize gpuBatchSize=_gpuBatchSize - In the implementation block
@property (assign) long long cpuBatchSize;              //@synthesize cpuBatchSize=_cpuBatchSize - In the implementation block
-(id)init;
-(int)inputWidth;
-(int)inputHeight;
-(NSString *)modelName;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(const int*)codeMap;
-(vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >*)activationsFromImage:(id)arg1 ;
-(id)decodeActivations:(vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >*)arg1 ;
-(int)classCount;
-(long long)gpuBatchSize;
-(NSArray *)modelShape;
-(id)predict:(id)arg1 error:(id*)arg2 ;
-(id)decodeActivations:(vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >*)arg1 blank:(unsigned short)arg2 ctcAllowGarbage:(BOOL)arg3 numResultNeeded:(long long)arg4 ;
-(id)initWithURL:(id)arg1 restrictToCPU:(BOOL)arg2 error:(id*)arg3 ;
-(void)setModelShape:(NSArray *)arg1 ;
-(void)setGpuBatchSize:(long long)arg1 ;
-(void)setCpuBatchSize:(long long)arg1 ;
-(long long)cpuBatchSize;
-(id)initRestrictingToCPU:(BOOL)arg1 ;
@end

