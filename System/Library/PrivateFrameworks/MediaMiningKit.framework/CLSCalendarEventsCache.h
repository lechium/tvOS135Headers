/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface CLSCalendarEventsCache : NSObject {

	NSMutableSet* _years;

}

@property (nonatomic,readonly) NSMutableSet * years;              //@synthesize years=_years - In the implementation block
-(id)debugDescription;
-(id)init;
-(void)insertEvent:(id)arg1 ;
-(void)enumerateEventsFromStartDate:(id)arg1 toEndDate:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)eventsForStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)eventsForDate:(id)arg1 ;
-(BOOL)hasEventsFromStartDate:(id)arg1 toEndDate:(id)arg2 ;
-(void)_enumerateDaysFromStartDate:(id)arg1 toEndDate:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)_storeDayForDate:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(NSMutableSet *)years;
@end
