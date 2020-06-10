/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SCKDatabaseObserver.h>

@protocol SCWatchlistMetadataProviding, SCWatchlistDefaultsProviding, OS_dispatch_queue;
@class SCKDatabase, NSHashTable, SCKStartupQueue, NSObject;

@interface SCWatchlist : NSObject <SCKDatabaseObserver> {

	SCKDatabase* _database;
	id<SCWatchlistMetadataProviding> _metadataProvider;
	id<SCWatchlistDefaultsProviding> _defaultsProvider;
	NSHashTable* _observers;
	SCKStartupQueue* _startupQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,retain) SCKDatabase * database;                                         //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) id<SCWatchlistMetadataProviding> metadataProvider;              //@synthesize metadataProvider=_metadataProvider - In the implementation block
@property (nonatomic,retain) id<SCWatchlistDefaultsProviding> defaultsProvider;              //@synthesize defaultsProvider=_defaultsProvider - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                        //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) SCKStartupQueue * startupQueue;                                 //@synthesize startupQueue=_startupQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                     //@synthesize callbackQueue=_callbackQueue - In the implementation block
+(id)supportedCommands;
+(id)zoneSchema;
+(id)zoneMergeHandler;
-(void)removeObserver:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)addObserver:(id)arg1 ;
-(SCKDatabase *)database;
-(void)setDatabase:(SCKDatabase *)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSHashTable *)observers;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)_enqueueStartupSequence;
-(id)initWithDatabase:(id)arg1 metadataProvider:(id)arg2 defaultsProvider:(id)arg3 ;
-(SCKStartupQueue *)startupQueue;
-(id<SCWatchlistMetadataProviding>)metadataProvider;
-(id)_sortedStocks:(id)arg1 withSymbolOrder:(id)arg2 ;
-(void)removeSymbol:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<SCWatchlistDefaultsProviding>)defaultsProvider;
-(void)database:(id)arg1 didChangeZone:(id)arg2 from:(id)arg3 to:(id)arg4 ;
-(id)initWithDatabase:(id)arg1 metadataProvider:(id)arg2 defaults:(id)arg3 ;
-(void)fetchStocksWithCompletion:(/*^block*/id)arg1 ;
-(void)addStock:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reorderSymbol:(id)arg1 afterSymbol:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)replaceSymbol:(id)arg1 withSymbol:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeStock:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reorderStock:(id)arg1 toIndex:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)setMetadataProvider:(id<SCWatchlistMetadataProviding>)arg1 ;
-(void)setDefaultsProvider:(id<SCWatchlistDefaultsProviding>)arg1 ;
-(void)setStartupQueue:(SCKStartupQueue *)arg1 ;
@end

