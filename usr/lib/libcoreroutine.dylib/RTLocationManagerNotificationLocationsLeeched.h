/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSArray;

@interface RTLocationManagerNotificationLocationsLeeched : RTNotification {

	NSArray* _leechedLocations;

}

@property (nonatomic,readonly) NSArray * leechedLocations;              //@synthesize leechedLocations=_leechedLocations - In the implementation block
-(id)initWithLocations:(id)arg1 ;
-(NSArray *)leechedLocations;
@end

