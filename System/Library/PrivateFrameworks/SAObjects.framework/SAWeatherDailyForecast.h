/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAWeatherForecast.h>

@class NSNumber;

@interface SAWeatherDailyForecast : SAWeatherForecast

@property (nonatomic,copy) NSNumber * highTemperature; 
@property (nonatomic,copy) NSNumber * lowTemperature; 
+(id)dailyForecast;
+(id)dailyForecastWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSNumber *)highTemperature;
-(void)setHighTemperature:(NSNumber *)arg1 ;
-(NSNumber *)lowTemperature;
-(void)setLowTemperature:(NSNumber *)arg1 ;
@end
