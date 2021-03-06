/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Extensions/AGXMetalA8.bundle/AGXMetalA8
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AGXMetalA8/AGXMetalA8-Structs.h>
#import <Metal/MTLIOAccelBuffer.h>
#import <AGXMetalA8/AGXResource.h>

@interface AGXBuffer : MTLIOAccelBuffer <AGXResource>
-(id)backingResource;
-(id)initWithDevice:(id)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 isSuballocDisabled:(BOOL)arg4 ;
-(id)initWithDevice:(id)arg1 bytes:(void*)arg2 length:(unsigned long long)arg3 options:(unsigned long long)arg4 deallocator:(/*^block*/id)arg5 ;
-(id)initWithDevice:(id)arg1 iosurface:(IOSurfaceRef)arg2 ;
-(id)initWithHeap:(id)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(id)initWithHeap:(id)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 atOffset:(unsigned long long)arg4 ;
-(id)initImplWithHeap:(id)arg1 resource:(id)arg2 length:(unsigned long long)arg3 atOffset:(unsigned long long)arg4 ;
@end

