/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RESingleton.h>

@protocol OS_dispatch_queue;
@class REObserverStore, NSObject, NSArray;

@interface RERelevanceEngineDebugger : RESingleton {

	REObserverStore* _observerStore;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSArray * availableEngines; 
-(id)_init;
-(NSArray *)availableEngines;
-(BOOL)_isValidEngine:(id)arg1 ;
-(id)engineWithName:(id)arg1 ;
-(id)firstEngine;
-(id)diagnosticLogsForEngine:(id)arg1 ;
-(void)reloadDataSourceForEngine:(id)arg1 ;
-(id)dataSourceElementsForEngine:(id)arg1 ;
-(id)allRelevanceProviderValuesForEngine:(id)arg1 ;
-(id)orderedElementsForEngine:(id)arg1 ;
-(void)_registerEngine:(id)arg1 ;
-(void)_unregisterEngine:(id)arg1 ;
@end
