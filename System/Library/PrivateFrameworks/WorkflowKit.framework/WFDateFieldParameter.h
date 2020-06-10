/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFTextInputParameter.h>

@class NSDateFormatter, NSString;

@interface WFDateFieldParameter : WFTextInputParameter {

	BOOL _detectsAllDayDates;
	BOOL _forcesAllDayDates;
	NSDateFormatter* _hintDateFormatter;
	NSString* _reactiveParameterKey;
	NSString* _hintDateMode;

}

@property (nonatomic,readonly) NSDateFormatter * hintDateFormatter;                   //@synthesize hintDateFormatter=_hintDateFormatter - In the implementation block
@property (nonatomic,readonly) NSString * hintDateMode;                               //@synthesize hintDateMode=_hintDateMode - In the implementation block
@property (nonatomic,readonly) NSString * reactiveParameterKey;                       //@synthesize reactiveParameterKey=_reactiveParameterKey - In the implementation block
@property (nonatomic,readonly) NSString * localizedIncompleteHintString; 
@property (nonatomic,readonly) BOOL timeOnlyMode; 
@property (nonatomic,readonly) BOOL dateOnlyMode; 
@property (nonatomic,readonly) BOOL detectsAllDayDates;                               //@synthesize detectsAllDayDates=_detectsAllDayDates - In the implementation block
@property (assign,nonatomic) BOOL forcesAllDayDates;                                  //@synthesize forcesAllDayDates=_forcesAllDayDates - In the implementation block
-(id)initWithDefinition:(id)arg1 ;
-(void)setForcesAllDayDates:(BOOL)arg1 ;
-(BOOL)timeOnlyMode;
-(BOOL)dateOnlyMode;
-(NSDateFormatter *)hintDateFormatter;
-(id)hintForState:(id)arg1 ;
-(NSString *)localizedIncompleteHintString;
-(NSString *)reactiveParameterKey;
-(BOOL)detectsAllDayDates;
-(BOOL)forcesAllDayDates;
-(NSString *)hintDateMode;
@end
