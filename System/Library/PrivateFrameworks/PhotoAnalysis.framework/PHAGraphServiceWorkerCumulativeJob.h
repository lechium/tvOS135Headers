/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoAnalysis/PHAGraphServiceWorkerGraphUpdateJob.h>

@class PHAGraphServiceWorker;

@interface PHAGraphServiceWorkerCumulativeJob : PHAGraphServiceWorkerGraphUpdateJob {

	PHAGraphServiceWorker* _worker;

}

@property (assign,nonatomic,__weak) PHAGraphServiceWorker * worker;              //@synthesize worker=_worker - In the implementation block
+(id)graphUpdateJobWithLibrary:(id)arg1 scenario:(unsigned long long)arg2 label:(id)arg3 updateBlock:(/*^block*/id)arg4 ;
-(long long)executionContext;
-(PHAGraphServiceWorker *)worker;
-(void)setWorker:(PHAGraphServiceWorker *)arg1 ;
-(void)prepareProcessingForWorker:(id)arg1 ;
-(void)additionalWorkAfterUpdate;
@end

