/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <CoreDuet/_DKSyncCompositeOperation.h>

@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;
@class _DKSync2Policy, _DKSyncType, NSArray, _CDMutablePerfMetric;

@interface _DKPerformSyncUpChangeOperation : _DKSyncCompositeOperation {

	id<_DKSyncLocalKnowledgeStorage> _localStorage;
	id<_DKSyncRemoteKnowledgeStorage> _transport;
	_DKSync2Policy* _policy;
	_DKSyncType* _type;
	NSArray* _insertedEvents;
	NSArray* _deletedEventIDs;
	_CDMutablePerfMetric* _perfMetric;
	CDPerfEvent _perfEvent;

}
-(void)main;
-(BOOL)isAsynchronous;
-(id)initWithParent:(id)arg1 localStorage:(id)arg2 transport:(id)arg3 policy:(id)arg4 type:(id)arg5 insertedEvents:(id)arg6 deletedEvents:(id)arg7 ;
-(void)endOperation;
-(void)startPerfMetrics;
-(void)endPerfMetrics;
-(void)performSyncUpChange;
@end
