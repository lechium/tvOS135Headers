/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomAnalytics/Process.h>

@class NSSet, NSOrderedSet, SFAppCalendarUsage;

@interface SFApp : Process

@property (nonatomic,retain) NSSet * hasAppRun; 
@property (nonatomic,retain) NSSet * hasCalendarUsage; 
@property (nonatomic,retain) NSOrderedSet * hasTypicalUsage; 
@property (nonatomic,retain) SFAppCalendarUsage * hintCalendarUsage; 
+(id)entityName;
+(id)fetchRequest;
-(void)insertObject:(id)arg1 inHasTypicalUsageAtIndex:(unsigned long long)arg2 ;
@end

