/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTLCommandQueueSPI.h>

@protocol MTLCommandQueue;
@class CMMTLDevice, NSString;

@interface CMMTLCommandQueue : NSObject <MTLCommandQueueSPI> {

	CMMTLDevice* _cmDevice;
	id<MTLCommandQueue> _commandQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (assign) int backgroundTrackingPID; 
@property (readonly) unsigned long long maxCommandBufferCount; 
@property (readonly) unsigned long long qosLevel; 
@property (readonly) NSObject*<OS_dispatch_queue> commitQueue; 
@property (readonly) BOOL commitSynchronously; 
@property (readonly) NSObject*<OS_dispatch_queue> completionQueue; 
@property (readonly) BOOL disableCrossQueueHazardTracking; 
@property (assign) BOOL skipRender; 
@property (assign) BOOL executionEnabled; 
@property (assign) BOOL isOpenGLQueue; 
@property (getter=isProfilingEnabled) BOOL profilingEnabled; 
@property (assign,getter=isStatEnabled,nonatomic) BOOL StatEnabled; 
@property (assign,getter=getStatOptions,nonatomic) unsigned long long StatOptions; 
@property (assign,getter=getStatLocations,nonatomic) unsigned long long StatLocations; 
-(void)forwardInvocation:(id)arg1 ;
-(id<MTLDevice>)device;
-(id)commandBuffer;
-(id)commandBufferWithUnretainedReferences;
-(id)initWithCMMTLDevice:(id)arg1 ;
@end
