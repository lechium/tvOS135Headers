/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoAnalysis/PHAWorkerJob.h>
#import <libobjc.A.dylib/PHAGraphRegistration.h>

@protocol OS_os_transaction;
@class NSString, NSDate, NSObject, PHAGraphManager, NSConditionLock;

@interface PHAGraphServiceWorkerGraphUpdateJob : PHAWorkerJob <PHAGraphRegistration> {

	BOOL _finished;
	BOOL _isChangeProcessingJob;
	float _completionScore;
	long long _originalExecutionContext;
	/*^block*/id _updateBlock;
	/*^block*/id _completionBlock;
	NSString* _label;
	NSDate* _creationDate;
	NSObject*<OS_os_transaction> _transaction;
	PHAGraphManager* _graphManager;
	id _pgManager;
	NSConditionLock* _completionWaitLock;

}

@property (assign,nonatomic) BOOL finished;                                   //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic) float completionScore;                           //@synthesize completionScore=_completionScore - In the implementation block
@property (copy) NSString * label;                                            //@synthesize label=_label - In the implementation block
@property (retain) NSDate * creationDate;                                     //@synthesize creationDate=_creationDate - In the implementation block
@property (retain) NSObject*<OS_os_transaction> transaction;                  //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) PHAGraphManager * graphManager;                  //@synthesize graphManager=_graphManager - In the implementation block
@property (retain) id pgManager;                                              //@synthesize pgManager=_pgManager - In the implementation block
@property (assign,nonatomic) long long originalExecutionContext;              //@synthesize originalExecutionContext=_originalExecutionContext - In the implementation block
@property (retain) NSConditionLock * completionWaitLock;                      //@synthesize completionWaitLock=_completionWaitLock - In the implementation block
@property (copy) id updateBlock;                                              //@synthesize updateBlock=_updateBlock - In the implementation block
@property (copy) id completionBlock;                                          //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign) BOOL isChangeProcessingJob;                                //@synthesize isChangeProcessingJob=_isChangeProcessingJob - In the implementation block
@property (nonatomic,readonly) BOOL isRebuildJob; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)graphUpdateJobWithLibrary:(id)arg1 scenario:(unsigned long long)arg2 label:(id)arg3 updateBlock:(/*^block*/id)arg4 ;
-(NSString *)description;
-(void)waitUntilFinished;
-(void)setCompletionBlock:(id)arg1 ;
-(BOOL)finished;
-(void)setFinished:(BOOL)arg1 ;
-(id)completionBlock;
-(NSDate *)creationDate;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSObject*<OS_os_transaction>)transaction;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(long long)executionContext;
-(PHAGraphManager *)graphManager;
-(void)setGraphManager:(PHAGraphManager *)arg1 ;
-(void)setCompletionScore:(float)arg1 ;
-(float)completionScore;
-(void)setUpdateBlock:(id)arg1 ;
-(id)updateBlock;
-(BOOL)startProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(BOOL)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(BOOL)wantsLiveGraphUpdates;
-(BOOL)wantsGraphUpdateNotifications;
-(void)graphUpdateMadeProgress:(double)arg1 ;
-(void)graphUpdateIsConsistent;
-(void)graphUpdateDidStop;
-(id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 label:(id)arg3 library:(id)arg4 ;
-(BOOL)graphIsReady;
-(void)markAsFinishedWithCompletionScore:(float)arg1 ;
-(void)updateCompletionScore:(float)arg1 ;
-(BOOL)isRebuildJob;
-(void)onGraphUpdateComplete;
-(void)_restoreGraphUpdateManagerExecutionContext;
-(void)_makeWorkerAvailable;
-(void)_transitionWorkerStateToWorking;
-(void)_resetGraphManager;
-(void)markJobFinishWorkForCancellation;
-(void)prepareProcessingForWorker:(id)arg1 ;
-(void)additionalWorkAfterUpdate;
-(long long)originalExecutionContext;
-(void)setOriginalExecutionContext:(long long)arg1 ;
-(BOOL)isChangeProcessingJob;
-(void)setIsChangeProcessingJob:(BOOL)arg1 ;
-(id)pgManager;
-(void)setPgManager:(id)arg1 ;
-(NSConditionLock *)completionWaitLock;
-(void)setCompletionWaitLock:(NSConditionLock *)arg1 ;
@end

