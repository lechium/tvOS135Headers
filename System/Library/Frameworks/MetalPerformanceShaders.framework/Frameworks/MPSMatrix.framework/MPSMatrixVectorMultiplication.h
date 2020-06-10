/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSMatrix/MPSMatrix-Structs.h>
#import <MPSMatrix/MPSMatrixBinaryKernel.h>

@protocol MPSExternalMatrixVectorMultiplication;
@interface MPSMatrixVectorMultiplication : MPSMatrixBinaryKernel {

	id<MPSExternalMatrixVectorMultiplication> _plugin;
	BOOL _transpose;
	unsigned long long _batchStart;
	unsigned long long _batchSize;
	double _alpha;
	double _beta;
	unsigned long long _M;
	unsigned long long _N;
	SCD_Struct_MP0 _resultMatrixOrigin;
	SCD_Struct_MP0 _primarySourceMatrixOrigin;
	SCD_Struct_MP0 _secondarySourceMatrixOrigin;

}

@property (nonatomic,readonly) BOOL transpose;                            //@synthesize transpose=_transpose - In the implementation block
@property (nonatomic,readonly) double alpha;                              //@synthesize alpha=_alpha - In the implementation block
@property (nonatomic,readonly) double beta;                               //@synthesize beta=_beta - In the implementation block
@property (assign,M,nonatomic) unsigned long long M;                      //@synthesize M=_M - In the implementation block
@property (assign,nonatomic,nonatomic) unsigned long long N;              //@synthesize N=_N - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(void)dealloc;
-(unsigned long long)M;
-(void)setM:(unsigned long long)arg1 ;
-(double)alpha;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(SCD_Struct_MP0)resultMatrixOrigin;
-(void)setResultMatrixOrigin:(SCD_Struct_MP0)arg1 ;
-(unsigned long long)batchStart;
-(void)setBatchStart:(unsigned long long)arg1 ;
-(unsigned long long)batchSize;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(double)beta;
-(unsigned long long)N;
-(void)setN:(unsigned long long)arg1 ;
-(SCD_Struct_MP0)primarySourceMatrixOrigin;
-(SCD_Struct_MP0)secondarySourceMatrixOrigin;
-(void)setPrimarySourceMatrixOrigin:(SCD_Struct_MP0)arg1 ;
-(void)setSecondarySourceMatrixOrigin:(SCD_Struct_MP0)arg1 ;
-(BOOL)transpose;
-(id)initWithDevice:(id)arg1 transpose:(BOOL)arg2 rows:(unsigned long long)arg3 columns:(unsigned long long)arg4 alpha:(double)arg5 beta:(double)arg6 ;
-(id)initWithDevice:(id)arg1 rows:(unsigned long long)arg2 columns:(unsigned long long)arg3 ;
-(void)encodeToCommandBuffer:(id)arg1 inputMatrix:(id)arg2 inputVector:(id)arg3 resultVector:(id)arg4 ;
@end

