/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTLearnedLocationManagerNotificationDidUpdate : RTNotification {

	double _intervalSinceLastUpdate;

}

@property (assign,nonatomic) double intervalSinceLastUpdate;              //@synthesize intervalSinceLastUpdate=_intervalSinceLastUpdate - In the implementation block
-(id)description;
-(double)intervalSinceLastUpdate;
-(id)initWithIntervalSinceLastUpdate:(double)arg1 ;
-(void)setIntervalSinceLastUpdate:(double)arg1 ;
@end
