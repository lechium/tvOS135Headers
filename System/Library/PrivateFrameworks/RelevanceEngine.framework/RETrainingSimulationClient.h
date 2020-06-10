/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RETrainingSimulationClientInterface.h>

@protocol OS_dispatch_queue, RETrainingSimulationClientDelegate;
@class NSObject, NSXPCConnection, NSString;

@interface RETrainingSimulationClient : NSObject <RETrainingSimulationClientInterface> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	NSString* _targetProcessName;
	id<RETrainingSimulationClientDelegate> _delegate;

}

@property (nonatomic,readonly) NSString * targetProcessName;                                        //@synthesize targetProcessName=_targetProcessName - In the implementation block
@property (nonatomic,__weak,readonly) id<RETrainingSimulationClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<RETrainingSimulationClientDelegate>)delegate;
-(id)initWithServiceName:(id)arg1 delegate:(id)arg2 ;
-(void)_handleInvalidation;
-(void)_handleInterruption;
-(id)initWithConnection:(id)arg1 delegate:(id)arg2 ;
-(NSString *)targetProcessName;
-(void)availableRelevanceEnginesDidChange;
-(id)initWithTargetProcessName:(id)arg1 delegate:(id)arg2 ;
-(void)relevanceEngine:(id)arg1 createElementFromDescription:(id)arg2 ;
-(BOOL)relevanceEngine:(id)arg1 performCommand:(id)arg2 withOptions:(id)arg3 ;
-(id)fetchAllElementIdentifiersInRelevanceEngine:(id)arg1 ;
-(id)fetchAllElementsInRelevanceEngine:(id)arg1 ;
-(id)availableRelevanceEngines;
-(BOOL)relevanceEngine:(id)arg1 runActionOfElementWithDescription1:(id)arg2 ;
-(id)diagnosticLogFileForRelevanceEngine:(id)arg1 ;
-(id)relevanceEngine:(id)arg1 encodedObjectAtPath:(id)arg2 ;
@end

