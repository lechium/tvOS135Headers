/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLBackgroundJobWorker;

@interface PLBackgroundJobWorkerPriorityTuple : NSObject {

	PLBackgroundJobWorker* _worker;
	unsigned long long _priority;

}

@property (nonatomic,readonly) PLBackgroundJobWorker * worker;              //@synthesize worker=_worker - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;                 //@synthesize priority=_priority - In the implementation block
-(id)description;
-(unsigned long long)priority;
-(id)initWithWorker:(id)arg1 priority:(unsigned long long)arg2 ;
-(PLBackgroundJobWorker *)worker;
@end

