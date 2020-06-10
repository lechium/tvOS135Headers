/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLTextureLayout.h>

@class NSString;

@interface MTLToolsTextureLayout : MTLToolsObject <MTLTextureLayout>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long size; 
@property (readonly) unsigned long long alignment; 
@property (readonly) SCD_Struct_MT0 copyGranularity; 
@property (readonly) SCD_Struct_MT28 watermark; 
-(unsigned long long)size;
-(unsigned long long)alignment;
-(SCD_Struct_MT0)copyGranularity;
-(SCD_Struct_MT28)watermark;
-(void)initializeTextureMemory:(void*)arg1 ;
-(void)copyFromLinearBytes:(const void*)arg1 linearOffset:(unsigned long long)arg2 linearBytesPerRow:(unsigned long long)arg3 linearBytesPerImage:(unsigned long long)arg4 toTextureMemory:(void*)arg5 textureSlice:(unsigned long long)arg6 textureLevel:(unsigned long long)arg7 textureRegion:(SCD_Struct_MT7)arg8 ;
-(void)copyFromTextureMemory:(const void*)arg1 textureSlice:(unsigned long long)arg2 textureLevel:(unsigned long long)arg3 textureRegion:(SCD_Struct_MT7)arg4 toLinearBytes:(void*)arg5 linearOffset:(unsigned long long)arg6 linearBytesPerRow:(unsigned long long)arg7 linearBytesPerImage:(unsigned long long)arg8 ;
-(void)finalizeTextureMemory:(void*)arg1 ;
-(void)acceptVisitor:(id)arg1 ;
@end

