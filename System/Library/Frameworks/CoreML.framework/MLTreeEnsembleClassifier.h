/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLClassifier.h>
#import <libobjc.A.dylib/MLModelSpecificationLoader.h>
#import <libobjc.A.dylib/MLCompiledModelLoader.h>
#import <libobjc.A.dylib/MLSpecificationCompiler.h>

@class NSArray, NSString;

@interface MLTreeEnsembleClassifier : MLClassifier <MLModelSpecificationLoader, MLCompiledModelLoader, MLSpecificationCompiler> {

	shared_ptr<Archiver::MMappedFile>* _mmapped_model;
	vector<unsigned char, std::__1::allocator<unsigned char> > _cached_model;
	unsigned long long num_dimensions;
	vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >* _classes_by_string;
	vector<long long, std::__1::allocator<long long> >* _classes_by_int64_t;
	long long _class_type;
	NSArray* _class_values;
	NSString* _single_array_key;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(id)compileSpecification:(MLModelSpecification*)arg1 toArchive:(MLModelOutputArchiver*)arg2 options:(id)arg3 error:(id*)arg4 ;
+(id)compiledVersionForSpecification:(MLModelSpecification*)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)loadModelFromCompiledArchive:(MLModelInputArchiver*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5 ;
+(id)loadModelFromSpecificationWithCompilationOptions:(MLModelSpecification*)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)classify:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(const char*)_model_data;
-(void)_setSingleArrayLookupField;
-(id)_buildClassificationClasses:(double*)arg1 topk:(unsigned long long)arg2 error:(id*)arg3 ;
@end

