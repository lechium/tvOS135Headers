/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSArray;

@interface RTWiFiManagerNotificationScanResults : RTNotification {

	NSArray* _scanResults;

}

@property (nonatomic,readonly) NSArray * scanResults;              //@synthesize scanResults=_scanResults - In the implementation block
-(NSArray *)scanResults;
-(id)initWithScanResults:(id)arg1 ;
@end

