/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol PHAVisionServiceAssetsAnalyzingOperationDelegate, OS_dispatch_semaphore;
@class PHAVisionServiceWorker, PHAAnalysisWorkerJob, NSObject;

@interface PHAVisionServiceAssetsAnalyzingOperation : NSOperation {

	PHAVisionServiceWorker* _visionServiceWorker;
	PHAAnalysisWorkerJob* _job;
	id<PHAVisionServiceAssetsAnalyzingOperationDelegate> _delegate;
	NSObject*<OS_dispatch_semaphore> _executionCompletionSemaphore;
	int _state;

}
+(id)operationForVisionServiceWorker:(id)arg1 job:(id)arg2 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)main;
-(id)job;
-(id)initWithVisionServiceWorker:(id)arg1 job:(id)arg2 ;
-(id)visionServiceWorker;
-(void)cancelAndWaitForCompletion;
@end
