/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCKDatabaseStoreCoordinator
@property (nonatomic,readonly) id<SCKDatabaseStore> underlyingStore; 
@required
-(void)removeObserver:(id)arg1;
-(void)addObserver:(id)arg1;
-(void)readWithAccessor:(/*^block*/id)arg1;
-(void)writeWithAccessor:(/*^block*/id)arg1;
-(void)reloadWithAccessor:(/*^block*/id)arg1;
-(void)readZone:(id)arg1 withAccessor:(/*^block*/id)arg2;
-(void)writeZone:(id)arg1 withAccessor:(/*^block*/id)arg2;
-(id<SCKDatabaseStore>)underlyingStore;

@end

