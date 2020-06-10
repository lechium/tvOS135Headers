/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INTaskList, NSArray;


@protocol INAddTasksIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INTaskList * modifiedTaskList; 
@property (nonatomic,copy) NSArray * addedTasks; 
@property (assign,nonatomic) unsigned long long warnings; 
@required
-(long long)code;
-(INTaskList *)modifiedTaskList;
-(void)setModifiedTaskList:(id)arg1;
-(NSArray *)addedTasks;
-(void)setAddedTasks:(id)arg1;
-(unsigned long long)warnings;
-(void)setWarnings:(unsigned long long)arg1;

@end

