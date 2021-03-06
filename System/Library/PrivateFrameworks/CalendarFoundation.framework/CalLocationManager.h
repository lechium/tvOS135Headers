/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CalLocationManager : NSObject
+(void)_loadMapKit;
+(id)currentLocationWithCompletionBlock:(/*^block*/id)arg1 ;
+(BOOL)isCurrentProcessEntitledToUseLocationServices;
+(id)placemarkForLocation:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
+(id)placemarkForAddress:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
+(id)strictGeocodeString:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
@end

