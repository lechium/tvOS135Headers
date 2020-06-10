/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INSpeakableString, NSString, CLPlacemark, INDateComponentsRange;


@protocol INSearchForNotebookItemsIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * title; 
@property (nonatomic,copy) NSString * content; 
@property (assign,nonatomic) long long itemType; 
@property (assign,nonatomic) long long status; 
@property (nonatomic,copy) CLPlacemark * location; 
@property (assign,nonatomic) long long locationSearchType; 
@property (nonatomic,copy) INDateComponentsRange * dateTime; 
@property (assign,nonatomic) long long dateSearchType; 
@property (assign,nonatomic) unsigned long long temporalEventTriggerTypes; 
@property (assign,nonatomic) long long taskPriority; 
@property (nonatomic,copy) INSpeakableString * groupName; 
@property (assign,nonatomic) BOOL includeAllNoteContents; 
@property (nonatomic,copy) NSString * notebookItemIdentifier; 
@required
-(id)init;
-(NSString *)content;
-(long long)status;
-(INSpeakableString *)title;
-(void)setTitle:(id)arg1;
-(void)setStatus:(long long)arg1;
-(void)setItemType:(long long)arg1;
-(long long)itemType;
-(CLPlacemark *)location;
-(INSpeakableString *)groupName;
-(void)setGroupName:(id)arg1;
-(void)setContent:(id)arg1;
-(void)setLocation:(id)arg1;
-(INDateComponentsRange *)dateTime;
-(void)setDateTime:(id)arg1;
-(long long)locationSearchType;
-(void)setLocationSearchType:(long long)arg1;
-(long long)dateSearchType;
-(void)setDateSearchType:(long long)arg1;
-(unsigned long long)temporalEventTriggerTypes;
-(void)setTemporalEventTriggerTypes:(unsigned long long)arg1;
-(long long)taskPriority;
-(void)setTaskPriority:(long long)arg1;
-(BOOL)includeAllNoteContents;
-(void)setIncludeAllNoteContents:(BOOL)arg1;
-(NSString *)notebookItemIdentifier;
-(void)setNotebookItemIdentifier:(id)arg1;

@end

