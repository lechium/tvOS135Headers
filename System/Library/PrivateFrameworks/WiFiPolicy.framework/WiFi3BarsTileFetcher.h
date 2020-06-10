/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TBDataSourceMediator;

@interface WiFi3BarsTileFetcher : NSObject {

	TBDataSourceMediator* _dataSourceMediator;
	unsigned long long _lastFetchedKey;

}

@property (nonatomic,retain) TBDataSourceMediator * dataSourceMediator;              //@synthesize dataSourceMediator=_dataSourceMediator - In the implementation block
@property (assign,nonatomic) unsigned long long lastFetchedKey;                      //@synthesize lastFetchedKey=_lastFetchedKey - In the implementation block
-(void)dealloc;
-(TBDataSourceMediator *)dataSourceMediator;
-(id)initWithDataSourceMediator:(id)arg1 ;
-(void)_handleLocationManagerVisitCallbackWithVisit:(id)arg1 ;
-(void)setDataSourceMediator:(TBDataSourceMediator *)arg1 ;
-(unsigned long long)lastFetchedKey;
-(void)setLastFetchedKey:(unsigned long long)arg1 ;
@end
