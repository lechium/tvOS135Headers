/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/WeatherCloudPersistenceDelegate.h>

@protocol WeatherPreferencesPersistence, SynchronizedDefaultsDelegate;
@class WeatherPreferences, NSString;

@interface WeatherCloudPreferences : NSObject <WeatherCloudPersistenceDelegate> {

	id<WeatherPreferencesPersistence> _cloudStore;
	id<SynchronizedDefaultsDelegate> _syncDelegate;
	WeatherPreferences* _localPreferences;

}

@property (nonatomic,retain) id<WeatherPreferencesPersistence> cloudStore;                      //@synthesize cloudStore=_cloudStore - In the implementation block
@property (retain) WeatherPreferences * localPreferences;                                       //@synthesize localPreferences=_localPreferences - In the implementation block
@property (assign,nonatomic,__weak) id<SynchronizedDefaultsDelegate> syncDelegate;              //@synthesize syncDelegate=_syncDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_synchronize:(BOOL)arg1 ;
-(void)forceSync;
-(void)setCloudStore:(id<WeatherPreferencesPersistence>)arg1 ;
-(void)cloudCitiesChangedExternally:(id)arg1 ;
-(id<WeatherPreferencesPersistence>)cloudStore;
-(void)cloudPersistenceDidSynchronize:(id)arg1 ;
-(id)initWithLocalPreferences:(id)arg1 persistence:(id)arg2 ;
-(void)setLocalPreferences:(WeatherPreferences *)arg1 ;
-(void)purgeLegacyCloudCities;
-(WeatherPreferences *)localPreferences;
-(id)reconcileCloudCities:(id)arg1 withLocal:(id)arg2 isInitialSync:(BOOL)arg3 ;
-(BOOL)areCloudCities:(id)arg1 equalToLocalCities:(id)arg2 ;
-(void)updateLocalStoreWithRemoteChanges:(id)arg1 ;
-(void)saveCitiesToCloud:(id)arg1 ;
-(id<SynchronizedDefaultsDelegate>)syncDelegate;
-(id)citiesByEnforcingSizeLimitOnResults:(id)arg1 ;
-(id)prepareLocalCitiesForReconciliation:(id)arg1 isInitialSync:(BOOL)arg2 ;
-(id)cloudRepresentationFromCities:(id)arg1 ;
-(BOOL)shouldWriteCitiesToCloud:(id)arg1 ;
-(void)setCloudStoreCities:(id)arg1 ;
-(id)initWithLocalPreferences:(id)arg1 ;
-(void)setSyncDelegate:(id<SynchronizedDefaultsDelegate>)arg1 ;
@end

