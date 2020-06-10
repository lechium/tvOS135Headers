/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsCommandQueue.h>

@class NSString;

@interface MTLGPUDebugCommandQueue : MTLToolsCommandQueue {

	NSString* _tracePath;

}

@property (nonatomic,readonly) NSString * tracePath;              //@synthesize tracePath=_tracePath - In the implementation block
-(id)commandBuffer;
-(id)commandBufferWithUnretainedReferences;
-(NSString *)tracePath;
-(id)initWithCommandQueue:(id)arg1 device:(id)arg2 ;
@end

