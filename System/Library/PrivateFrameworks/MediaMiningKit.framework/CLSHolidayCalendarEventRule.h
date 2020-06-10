/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLSHolidayCalendarEventDateRuleDelegate;
@class NSString, NSArray, CLSHolidayCalendarEventRuleRequiredTraits;

@interface CLSHolidayCalendarEventRule : NSObject {

	BOOL _checkWeekends;
	NSString* _uuid;
	NSString* _name;
	NSArray* _dateRules;
	CLSHolidayCalendarEventRuleRequiredTraits* _requiredTraits;
	id<CLSHolidayCalendarEventDateRuleDelegate> _dateRuleDelegate;
	NSString* _localizedName;
	unsigned long long _category;

}

@property (nonatomic,readonly) NSString * uuid;                                                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) CLSHolidayCalendarEventRuleRequiredTraits * requiredTraits;                     //@synthesize requiredTraits=_requiredTraits - In the implementation block
@property (nonatomic,readonly) NSArray * dateRules;                                                            //@synthesize dateRules=_dateRules - In the implementation block
@property (nonatomic,readonly) BOOL checkWeekends;                                                             //@synthesize checkWeekends=_checkWeekends - In the implementation block
@property (assign,nonatomic,__weak) id<CLSHolidayCalendarEventDateRuleDelegate> dateRuleDelegate;              //@synthesize dateRuleDelegate=_dateRuleDelegate - In the implementation block
@property (nonatomic,readonly) BOOL isCelebration; 
@property (nonatomic,readonly) NSString * name;                                                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * localizedName;                                                       //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) unsigned long long category;                                                    //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) BOOL allowSceneClassificationBasedEvaluation; 
+(id)localizedNameForName:(id)arg1 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)localizedName;
-(unsigned long long)category;
-(NSString *)uuid;
-(id)initWithEventDescription:(id)arg1 ;
-(BOOL)evaluateWithLocalDate:(id)arg1 traits:(id)arg2 ;
-(id)localDatesByEvaluatingRuleForYear:(long long)arg1 ;
-(id)_datesFromWeekendWithStartDate:(id)arg1 withDuration:(double)arg2 ;
-(id)_dateRuleForYear:(long long)arg1 ;
-(BOOL)evaluateOnlyTraits:(id)arg1 ;
-(BOOL)isCelebration;
-(BOOL)allowSceneClassificationBasedEvaluation;
-(BOOL)_isMatchingOnlyLocalDate:(id)arg1 ;
-(void)setDateRuleDelegate:(id<CLSHolidayCalendarEventDateRuleDelegate>)arg1 ;
-(NSArray *)dateRules;
-(CLSHolidayCalendarEventRuleRequiredTraits *)requiredTraits;
-(id<CLSHolidayCalendarEventDateRuleDelegate>)dateRuleDelegate;
-(BOOL)checkWeekends;
@end

