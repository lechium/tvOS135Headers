/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, MTLType, NSArray;


@protocol MTLFunctionSPI <MTLFunction>
@property (copy,readonly) NSString * filePath; 
@property (readonly) long long lineNumber; 
@property (copy,readonly) NSString * unpackedFilePath; 
@property (readonly) MTLType * returnType; 
@property (readonly) NSArray * arguments; 
@required
-(NSArray *)arguments;
-(long long)lineNumber;
-(const SCD_Struct_MT22*)bitCodeHash;
-(NSString *)filePath;
-(id)reflectionWithOptions:(unsigned long long)arg1;
-(void)reflectionWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2;
-(id)bitcodeData;
-(id)newFunctionWithPluginData:(id)arg1 bitcodeType:(unsigned char)arg2;
-(NSString *)unpackedFilePath;
-(MTLType *)returnType;

@end

