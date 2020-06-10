/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFQuantityFieldParameter.h>

@interface WFDurationQuantityFieldParameter : WFQuantityFieldParameter

@property (assign,nonatomic) unsigned long long possibleCalendarUnits; 
+(unsigned long long)calendarUnitFromUnitString:(id)arg1 ;
+(BOOL)unitStringIsDurationUnit:(id)arg1 ;
-(id)initWithDefinition:(id)arg1 ;
-(id)defaultSerializedRepresentation;
-(BOOL)parameterStateIsValid:(id)arg1 ;
-(void)setPossibleCalendarUnits:(unsigned long long)arg1 ;
-(id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3 ;
-(unsigned long long)possibleCalendarUnits;
@end

