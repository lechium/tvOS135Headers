/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOKeyBagProtectedDataDidBecomeAvailableObserver.h>

@class GEONavdCachePersistenceManager, NSString;

@interface GEORouteHypothesisCache : NSObject <GEOKeyBagProtectedDataDidBecomeAvailableObserver> {

	GEONavdCachePersistenceManager* _persistenceManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(void)tearDown;
-(void)_removeAllEntries;
-(void)protectedDataDidBecomeAvailable:(id)arg1 ;
-(long long)numberOfEntriesOnDisk;
-(id)loadValueForKey:(id)arg1 ;
-(id)loadEntryForRowId:(long long)arg1 ;
-(void)saveValue:(id)arg1 forKey:(id)arg2 ;
-(void)removeKey:(id)arg1 value:(id)arg2 ;
-(void)enumerateAllForCacheEntriesWithHandler:(/*^block*/id)arg1 ;
-(id)rowIdsOfEntriesBeforeTimeStamp:(double)arg1 ;
-(double)nextRefreshTimeStamp;
-(id)descriptionOfAllEntries;
@end

