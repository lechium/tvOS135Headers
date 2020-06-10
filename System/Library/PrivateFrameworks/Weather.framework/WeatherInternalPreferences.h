/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSUserDefaults.h>

@protocol WeatherPreferencesPersistence;
@interface WeatherInternalPreferences : NSUserDefaults {

	id<WeatherPreferencesPersistence> _persistence;

}

@property (retain) id<WeatherPreferencesPersistence> persistence;              //@synthesize persistence=_persistence - In the implementation block
@property (readonly) BOOL isInternalInstall; 
@property (readonly) BOOL isV3Enabled; 
@property (readonly) BOOL shouldShowUpdateTimestamp; 
+(id)sharedInternalPreferences;
-(id<WeatherPreferencesPersistence>)persistence;
-(BOOL)isInternalInstall;
-(void)setPersistence:(id<WeatherPreferencesPersistence>)arg1 ;
-(BOOL)isV3Enabled;
-(BOOL)shouldShowUpdateTimestamp;
@end
