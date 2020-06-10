/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RESingleton.h>

@class REObserverStore;

@interface REObservableSingleton : RESingleton {

	REObserverStore* _store;

}

@property (nonatomic,readonly) unsigned long long numberOfObservers; 
-(id)_init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)enumerateObservers:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfObservers;
@end
