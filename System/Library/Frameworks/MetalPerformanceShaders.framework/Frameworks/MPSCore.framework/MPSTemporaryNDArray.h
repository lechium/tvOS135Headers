/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSCore/MPSNDArray.h>

@interface MPSTemporaryNDArray : MPSNDArray {

	unsigned long long _readCount;

}

@property (assign,nonatomic) unsigned long long readCount;              //@synthesize readCount=_readCount - In the implementation block
+(id)defaultAllocator;
+(id)temporaryNDArrayWithCommandBuffer:(id)arg1 descriptor:(id)arg2 ;
-(id)initWithCommandBuffer:(id)arg1 descriptor:(id)arg2 ;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(void)setReadCount:(unsigned long long)arg1 ;
-(unsigned long long)readCount;
@end

