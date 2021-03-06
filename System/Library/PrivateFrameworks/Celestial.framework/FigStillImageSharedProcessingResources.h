/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBuffer;
@class FigWiredMemory;

@interface FigStillImageSharedProcessingResources : NSObject {

	unsigned long long _sharedMetalBufferLengthInMB;
	unsigned long long _sharedRegWarpBufferLengthInMB;
	BOOL _resourcesAllocated;
	int _resourceAllocationError;
	id<MTLBuffer> _sharedMetalBuffer;
	FigWiredMemory* _sharedRegWarpBuffer;

}

@property (nonatomic,readonly) unsigned long long sharedMetalBufferLengthInMB;                //@synthesize sharedMetalBufferLengthInMB=_sharedMetalBufferLengthInMB - In the implementation block
@property (nonatomic,readonly) unsigned long long sharedRegWarpBufferLengthInMB;              //@synthesize sharedRegWarpBufferLengthInMB=_sharedRegWarpBufferLengthInMB - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> sharedMetalBuffer; 
@property (nonatomic,readonly) FigWiredMemory * sharedRegWarpBuffer; 
+(void)initialize;
-(void)dealloc;
-(id<MTLBuffer>)sharedMetalBuffer;
-(FigWiredMemory *)sharedRegWarpBuffer;
-(int)ensureAllocatedSync;
-(int)_allocateSharedMetalBufferWithSizeInMB:(unsigned long long)arg1 ;
-(id)initWithSharedMetalBufferLengthInMB:(unsigned long long)arg1 sharedRegWarpBufferLengthInMB:(unsigned long long)arg2 ;
-(unsigned long long)sharedMetalBufferLengthInMB;
-(unsigned long long)sharedRegWarpBufferLengthInMB;
@end

