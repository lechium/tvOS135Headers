/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBSearchForNotebookItemsIntent.h>
@class NSString, _INPBDateTimeRange, _INPBDataString, _INPBIntentMetadata, _INPBLocation;


@protocol _INPBSearchForNotebookItemsIntent <NSObject>
@property (nonatomic,copy) NSString * content; 
@property (nonatomic,readonly) BOOL hasContent; 
@property (assign,nonatomic) int dateSearchType; 
@property (assign,nonatomic) BOOL hasDateSearchType; 
@property (nonatomic,retain) _INPBDateTimeRange * dateTime; 
@property (nonatomic,readonly) BOOL hasDateTime; 
@property (nonatomic,retain) _INPBDataString * groupName; 
@property (nonatomic,readonly) BOOL hasGroupName; 
@property (assign,nonatomic) BOOL includeAllNoteContents; 
@property (assign,nonatomic) BOOL hasIncludeAllNoteContents; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata; 
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (assign,nonatomic) int itemType; 
@property (assign,nonatomic) BOOL hasItemType; 
@property (nonatomic,retain) _INPBLocation * location; 
@property (nonatomic,readonly) BOOL hasLocation; 
@property (assign,nonatomic) int locationSearchType; 
@property (assign,nonatomic) BOOL hasLocationSearchType; 
@property (nonatomic,copy) NSString * notebookItemIdentifier; 
@property (nonatomic,readonly) BOOL hasNotebookItemIdentifier; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int taskPriority; 
@property (assign,nonatomic) BOOL hasTaskPriority; 
@property (nonatomic,readonly) int* temporalEventTriggerTypes; 
@property (nonatomic,readonly) unsigned long long temporalEventTriggerTypesCount; 
@property (nonatomic,retain) _INPBDataString * title; 
@property (nonatomic,readonly) BOOL hasTitle; 
@required
-(NSString *)content;
-(int)status;
-(_INPBDataString *)title;
-(void)setTitle:(id)arg1;
-(void)setStatus:(int)arg1;
-(void)setItemType:(int)arg1;
-(void)setHasItemType:(BOOL)arg1;
-(BOOL)hasItemType;
-(int)itemType;
-(void)setHasStatus:(BOOL)arg1;
-(BOOL)hasStatus;
-(id)statusAsString:(int)arg1;
-(int)StringAsStatus:(id)arg1;
-(_INPBLocation *)location;
-(_INPBDataString *)groupName;
-(void)setGroupName:(id)arg1;
-(void)setContent:(id)arg1;
-(void)setLocation:(id)arg1;
-(BOOL)hasLocation;
-(BOOL)hasTitle;
-(BOOL)hasContent;
-(_INPBDateTimeRange *)dateTime;
-(void)setDateTime:(id)arg1;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(id)arg1;
-(BOOL)hasIntentMetadata;
-(BOOL)hasGroupName;
-(BOOL)hasDateTime;
-(int)locationSearchType;
-(void)setLocationSearchType:(int)arg1;
-(int)dateSearchType;
-(void)setDateSearchType:(int)arg1;
-(int*)temporalEventTriggerTypes;
-(int)taskPriority;
-(void)setTaskPriority:(int)arg1;
-(BOOL)includeAllNoteContents;
-(void)setIncludeAllNoteContents:(BOOL)arg1;
-(NSString *)notebookItemIdentifier;
-(void)setNotebookItemIdentifier:(id)arg1;
-(id)dateSearchTypeAsString:(int)arg1;
-(int)StringAsDateSearchType:(id)arg1;
-(id)itemTypeAsString:(int)arg1;
-(int)StringAsItemType:(id)arg1;
-(id)locationSearchTypeAsString:(int)arg1;
-(int)StringAsLocationSearchType:(id)arg1;
-(id)taskPriorityAsString:(int)arg1;
-(int)StringAsTaskPriority:(id)arg1;
-(void)clearTemporalEventTriggerTypes;
-(void)addTemporalEventTriggerType:(int)arg1;
-(int)temporalEventTriggerTypeAtIndex:(unsigned long long)arg1;
-(void)setTemporalEventTriggerTypes:(int*)arg1 count:(unsigned long long)arg2;
-(id)temporalEventTriggerTypesAsString:(int)arg1;
-(int)StringAsTemporalEventTriggerTypes:(id)arg1;
-(BOOL)hasDateSearchType;
-(void)setHasDateSearchType:(BOOL)arg1;
-(BOOL)hasIncludeAllNoteContents;
-(void)setHasIncludeAllNoteContents:(BOOL)arg1;
-(BOOL)hasLocationSearchType;
-(void)setHasLocationSearchType:(BOOL)arg1;
-(BOOL)hasNotebookItemIdentifier;
-(BOOL)hasTaskPriority;
-(void)setHasTaskPriority:(BOOL)arg1;
-(unsigned long long)temporalEventTriggerTypesCount;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, _INPBDateTimeRange, _INPBDataString, _INPBIntentMetadata, _INPBLocation;

@interface _INPBSearchForNotebookItemsIntent : PBCodable <_INPBSearchForNotebookItemsIntent, NSSecureCoding, NSCopying> {

	SCD_Struct_IN5* _temporalEventTriggerTypes;
	SCD_Struct_IN2 _has;
	BOOL _includeAllNoteContents;
	BOOL __encodeLegacyGloryData;
	int _dateSearchType;
	int _itemType;
	int _locationSearchType;
	int _status;
	int _taskPriority;
	NSString* _content;
	_INPBDateTimeRange* _dateTime;
	_INPBDataString* _groupName;
	_INPBIntentMetadata* _intentMetadata;
	_INPBLocation* _location;
	NSString* _notebookItemIdentifier;
	_INPBDataString* _title;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * content;                                                           //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) BOOL hasContent; 
@property (assign,nonatomic) int dateSearchType;                                                         //@synthesize dateSearchType=_dateSearchType - In the implementation block
@property (assign,nonatomic) BOOL hasDateSearchType; 
@property (nonatomic,retain) _INPBDateTimeRange * dateTime;                                              //@synthesize dateTime=_dateTime - In the implementation block
@property (nonatomic,readonly) BOOL hasDateTime; 
@property (nonatomic,retain) _INPBDataString * groupName;                                                //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupName; 
@property (assign,nonatomic) BOOL includeAllNoteContents;                                                //@synthesize includeAllNoteContents=_includeAllNoteContents - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeAllNoteContents; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;                                       //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (assign,nonatomic) int itemType;                                                               //@synthesize itemType=_itemType - In the implementation block
@property (assign,nonatomic) BOOL hasItemType; 
@property (nonatomic,retain) _INPBLocation * location;                                                   //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (assign,nonatomic) int locationSearchType;                                                     //@synthesize locationSearchType=_locationSearchType - In the implementation block
@property (assign,nonatomic) BOOL hasLocationSearchType; 
@property (nonatomic,copy) NSString * notebookItemIdentifier;                                            //@synthesize notebookItemIdentifier=_notebookItemIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasNotebookItemIdentifier; 
@property (assign,nonatomic) int status;                                                                 //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int taskPriority;                                                           //@synthesize taskPriority=_taskPriority - In the implementation block
@property (assign,nonatomic) BOOL hasTaskPriority; 
@property (nonatomic,readonly) int* temporalEventTriggerTypes; 
@property (nonatomic,readonly) unsigned long long temporalEventTriggerTypesCount; 
@property (nonatomic,retain) _INPBDataString * title;                                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)content;
-(id)dictionaryRepresentation;
-(int)status;
-(_INPBDataString *)title;
-(void)setTitle:(_INPBDataString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)setItemType:(int)arg1 ;
-(void)setHasItemType:(BOOL)arg1 ;
-(BOOL)hasItemType;
-(int)itemType;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(_INPBLocation *)location;
-(_INPBDataString *)groupName;
-(void)setGroupName:(_INPBDataString *)arg1 ;
-(void)setContent:(NSString *)arg1 ;
-(void)setLocation:(_INPBLocation *)arg1 ;
-(BOOL)hasLocation;
-(BOOL)hasTitle;
-(BOOL)hasContent;
-(_INPBDateTimeRange *)dateTime;
-(void)setDateTime:(_INPBDateTimeRange *)arg1 ;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(BOOL)hasGroupName;
-(BOOL)hasDateTime;
-(int)locationSearchType;
-(void)setLocationSearchType:(int)arg1 ;
-(int)dateSearchType;
-(void)setDateSearchType:(int)arg1 ;
-(int*)temporalEventTriggerTypes;
-(int)taskPriority;
-(void)setTaskPriority:(int)arg1 ;
-(BOOL)includeAllNoteContents;
-(void)setIncludeAllNoteContents:(BOOL)arg1 ;
-(NSString *)notebookItemIdentifier;
-(void)setNotebookItemIdentifier:(NSString *)arg1 ;
-(id)dateSearchTypeAsString:(int)arg1 ;
-(int)StringAsDateSearchType:(id)arg1 ;
-(id)itemTypeAsString:(int)arg1 ;
-(int)StringAsItemType:(id)arg1 ;
-(id)locationSearchTypeAsString:(int)arg1 ;
-(int)StringAsLocationSearchType:(id)arg1 ;
-(id)taskPriorityAsString:(int)arg1 ;
-(int)StringAsTaskPriority:(id)arg1 ;
-(void)clearTemporalEventTriggerTypes;
-(void)addTemporalEventTriggerType:(int)arg1 ;
-(int)temporalEventTriggerTypeAtIndex:(unsigned long long)arg1 ;
-(void)setTemporalEventTriggerTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)temporalEventTriggerTypesAsString:(int)arg1 ;
-(int)StringAsTemporalEventTriggerTypes:(id)arg1 ;
-(BOOL)hasDateSearchType;
-(void)setHasDateSearchType:(BOOL)arg1 ;
-(BOOL)hasIncludeAllNoteContents;
-(void)setHasIncludeAllNoteContents:(BOOL)arg1 ;
-(BOOL)hasLocationSearchType;
-(void)setHasLocationSearchType:(BOOL)arg1 ;
-(BOOL)hasNotebookItemIdentifier;
-(BOOL)hasTaskPriority;
-(void)setHasTaskPriority:(BOOL)arg1 ;
-(unsigned long long)temporalEventTriggerTypesCount;
@end

