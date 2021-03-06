/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDateComponents, INRecurrenceRule;


@protocol INDateComponentsRangeExport <NSObject,JSExport>
@property (nonatomic,copy) NSDateComponents * startDateComponents; 
@property (nonatomic,copy) NSDateComponents * endDateComponents; 
@property (nonatomic,copy) INRecurrenceRule * recurrenceRule; 
@required
-(id)init;
-(NSDateComponents *)startDateComponents;
-(void)setStartDateComponents:(id)arg1;
-(NSDateComponents *)endDateComponents;
-(void)setEndDateComponents:(id)arg1;
-(INRecurrenceRule *)recurrenceRule;
-(void)setRecurrenceRule:(id)arg1;

@end

