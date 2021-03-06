/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLObjectWithLabel.h>
#import <libobjc.A.dylib/MTLLibrarySPI.h>

@protocol MTLDevice;
@class NSString, NSArray, NSMutableDictionary, NSData;

@interface _MTLLibrary : _MTLObjectWithLabel <MTLLibrarySPI> {

	id<MTLDevice> _device;
	MTLLibraryData* _libraryData;
	NSMutableDictionary* _functionDictionary;
	MTLLibraryContainer* _cacheEntry;

}

@property (nonatomic,retain,readonly) NSMutableDictionary * functionDictionary;              //@synthesize functionDictionary=_functionDictionary - In the implementation block
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device;                                                   //@synthesize device=_device - In the implementation block
@property (retain,readonly) NSArray * functionNames; 
@property (retain,readonly) NSArray * externFunctionNames; 
@property (readonly) MTLLibraryData* libraryData;                                            //@synthesize libraryData=_libraryData - In the implementation block
@property (readonly) MTLLibraryContainer* cacheEntry;                                        //@synthesize cacheEntry=_cacheEntry - In the implementation block
@property (copy) NSString * overrideTriple; 
@property (copy,readonly) NSData * libraryDataContents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(id<MTLDevice>)device;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)newFunctionWithName:(id)arg1 ;
-(MTLLibraryData*)libraryData;
-(id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 functionCache:(id)arg3 error:(id*)arg4 ;
-(id)newFunctionWithNameInternal:(id)arg1 ;
-(void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 functionCache:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithLibraryContainer:(MTLLibraryContainer*)arg1 device:(id)arg2 ;
-(NSArray *)functionNames;
-(id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id*)arg3 ;
-(void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newExternFunctionWithName:(id)arg1 ;
-(id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 error:(id*)arg4 ;
-(void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSString *)overrideTriple;
-(void)setOverrideTriple:(NSString *)arg1 ;
-(NSArray *)externFunctionNames;
-(NSData *)libraryDataContents;
-(NSMutableDictionary *)functionDictionary;
-(MTLLibraryContainer*)cacheEntry;
@end

