/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, NSMapTable, NSMutableSet, NSMutableDictionary;

@interface ATStatusMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _statusQueue;
	NSHashTable* _statusObservers;
	NSMapTable* _observerDataClasses;
	NSMutableSet* _statuses;
	NSMutableDictionary* _statusDictionary;

}
+(id)sharedMonitor;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)setDataClasses:(id)arg1 forObserver:(id)arg2 ;
-(id)allStatus;
-(void)updateStatus:(id)arg1 ;
-(void)updateAssets:(id)arg1 ;
-(void)updateStatusWithValue:(id)arg1 forKey:(id)arg2 ;
-(void)updateStatusValuesWithDictionary:(id)arg1 ;
@end
