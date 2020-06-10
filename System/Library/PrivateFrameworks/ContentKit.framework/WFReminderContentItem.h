/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFCalendarItemContentItem.h>

@class EKReminder;

@interface WFReminderContentItem : WFCalendarItemContentItem

@property (nonatomic,readonly) EKReminder * reminder; 
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)countDescription;
+(id)itemWithEKReminder:(id)arg1 fromEventStore:(id)arg2 ;
+(id)defaultSourceForRepresentation:(id)arg1 ;
+(void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(BOOL)hasLibrary;
-(void)generateObjectRepresentations:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(EKReminder *)reminder;
-(BOOL)getListAltText:(/*^block*/id)arg1 ;
@end

