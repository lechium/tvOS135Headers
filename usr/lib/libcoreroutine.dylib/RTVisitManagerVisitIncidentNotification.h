/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class RTVisit;

@interface RTVisitManagerVisitIncidentNotification : RTNotification {

	RTVisit* _visitIncident;

}

@property (nonatomic,readonly) RTVisit * visitIncident;              //@synthesize visitIncident=_visitIncident - In the implementation block
-(id)init;
-(RTVisit *)visitIncident;
-(id)initWithVisitIncident:(id)arg1 ;
@end

