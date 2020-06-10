/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WeatherUpdaterDelegate;
@class NSLocale, WAForecastModelController, NSString;

@interface TWCCityUpdater : NSObject {

	id<WeatherUpdaterDelegate> _delegate;
	NSLocale* _locale;
	WAForecastModelController* _forecastModelController;

}

@property (nonatomic,retain) WAForecastModelController * forecastModelController;              //@synthesize forecastModelController=_forecastModelController - In the implementation block
@property (assign,nonatomic,__weak) id<WeatherUpdaterDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                                //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSString * trackingParameter; 
+(id)sharedCityUpdater;
-(id)init;
-(id<WeatherUpdaterDelegate>)delegate;
-(void)setDelegate:(id<WeatherUpdaterDelegate>)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(void)cancel;
-(NSString *)trackingParameter;
-(void)setTrackingParameter:(NSString *)arg1 ;
-(BOOL)isUpdatingCity:(id)arg1 ;
-(void)updateWeatherForCity:(id)arg1 ;
-(void)setForecastModelController:(WAForecastModelController *)arg1 ;
-(WAForecastModelController *)forecastModelController;
-(void)updateWeatherForCities:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updateWeatherForCities:(id)arg1 ;
@end

