/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class STBlueprintUsageLimitScheduleSimpleItem, NSArray;

@interface STBlueprintUsageLimitScheduleRepresentation : NSObject {

	STBlueprintUsageLimitScheduleSimpleItem* _simpleSchedule;
	NSArray* _customScheduleItems;

}

@property (nonatomic,retain) STBlueprintUsageLimitScheduleSimpleItem * simpleSchedule;              //@synthesize simpleSchedule=_simpleSchedule - In the implementation block
@property (nonatomic,copy) NSArray * customScheduleItems;                                           //@synthesize customScheduleItems=_customScheduleItems - In the implementation block
-(NSArray *)customScheduleItems;
-(STBlueprintUsageLimitScheduleSimpleItem *)simpleSchedule;
-(void)setSimpleSchedule:(STBlueprintUsageLimitScheduleSimpleItem *)arg1 ;
-(void)setCustomScheduleItems:(NSArray *)arg1 ;
@end

