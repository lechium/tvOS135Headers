/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INTaskList, NSArray, NSNumber;


@protocol INDeleteTasksIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INTaskList * taskList; 
@property (nonatomic,copy) NSArray * tasks; 
@property (nonatomic,copy) NSNumber * all; 
@required
-(id)init;
-(NSArray *)tasks;
-(void)setTasks:(id)arg1;
-(NSNumber *)all;
-(void)setAll:(id)arg1;
-(INTaskList *)taskList;
-(void)setTaskList:(id)arg1;

@end

