/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFSettings;
@interface WFRequestFormattingRules : NSObject {

	id<WFSettings> _settings;

}

@property (nonatomic,readonly) id<WFSettings> settings;              //@synthesize settings=_settings - In the implementation block
+(BOOL)aqiEnabledByRules:(id)arg1 forLocation:(id)arg2 ;
-(id<WFSettings>)settings;
-(id)initWithSettings:(id)arg1 ;
-(long long)locationNumDecimalsOfPrecision;
-(BOOL)aqiEnabledForCountryCode:(id)arg1 ;
@end

