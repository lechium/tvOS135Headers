/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBTask.h>
@class _INPBContactEventTrigger, _INPBDateTime, NSString, _INPBSpatialEventTrigger, _INPBTemporalEventTrigger, _INPBDataString;


@protocol _INPBTask <NSObject>
@property (nonatomic,retain) _INPBContactEventTrigger * contactEventTrigger; 
@property (nonatomic,readonly) BOOL hasContactEventTrigger; 
@property (nonatomic,retain) _INPBDateTime * createdDateTime; 
@property (nonatomic,readonly) BOOL hasCreatedDateTime; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) _INPBDateTime * modifiedDateTime; 
@property (nonatomic,readonly) BOOL hasModifiedDateTime; 
@property (nonatomic,copy) NSString * parentIdentifier; 
@property (nonatomic,readonly) BOOL hasParentIdentifier; 
@property (assign,nonatomic) int priority; 
@property (assign,nonatomic) BOOL hasPriority; 
@property (nonatomic,retain) _INPBSpatialEventTrigger * spatialEventTrigger; 
@property (nonatomic,readonly) BOOL hasSpatialEventTrigger; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int taskReference; 
@property (assign,nonatomic) BOOL hasTaskReference; 
@property (assign,nonatomic) int taskType; 
@property (assign,nonatomic) BOOL hasTaskType; 
@property (nonatomic,retain) _INPBTemporalEventTrigger * temporalEventTrigger; 
@property (nonatomic,readonly) BOOL hasTemporalEventTrigger; 
@property (nonatomic,retain) _INPBDataString * title; 
@property (nonatomic,readonly) BOOL hasTitle; 
@required
-(NSString *)identifier;
-(int)priority;
-(void)setIdentifier:(id)arg1;
-(void)setTaskType:(int)arg1;
-(void)setPriority:(int)arg1;
-(int)status;
-(_INPBDataString *)title;
-(void)setTitle:(id)arg1;
-(void)setStatus:(int)arg1;
-(int)taskType;
-(void)setHasTaskType:(BOOL)arg1;
-(BOOL)hasTaskType;
-(id)taskTypeAsString:(int)arg1;
-(int)StringAsTaskType:(id)arg1;
-(void)setHasPriority:(BOOL)arg1;
-(BOOL)hasPriority;
-(void)setHasStatus:(BOOL)arg1;
-(BOOL)hasStatus;
-(id)statusAsString:(int)arg1;
-(int)StringAsStatus:(id)arg1;
-(BOOL)hasTitle;
-(BOOL)hasIdentifier;
-(id)priorityAsString:(int)arg1;
-(int)StringAsPriority:(id)arg1;
-(_INPBContactEventTrigger *)contactEventTrigger;
-(void)setContactEventTrigger:(id)arg1;
-(BOOL)hasContactEventTrigger;
-(_INPBSpatialEventTrigger *)spatialEventTrigger;
-(void)setSpatialEventTrigger:(id)arg1;
-(BOOL)hasSpatialEventTrigger;
-(_INPBTemporalEventTrigger *)temporalEventTrigger;
-(void)setTemporalEventTrigger:(id)arg1;
-(BOOL)hasTemporalEventTrigger;
-(_INPBDateTime *)createdDateTime;
-(void)setCreatedDateTime:(id)arg1;
-(BOOL)hasCreatedDateTime;
-(_INPBDateTime *)modifiedDateTime;
-(void)setModifiedDateTime:(id)arg1;
-(BOOL)hasModifiedDateTime;
-(int)taskReference;
-(NSString *)parentIdentifier;
-(id)taskReferenceAsString:(int)arg1;
-(int)StringAsTaskReference:(id)arg1;
-(void)setTaskReference:(int)arg1;
-(BOOL)hasTaskReference;
-(void)setHasTaskReference:(BOOL)arg1;
-(void)setParentIdentifier:(id)arg1;
-(BOOL)hasParentIdentifier;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _INPBContactEventTrigger, _INPBDateTime, NSString, _INPBSpatialEventTrigger, _INPBTemporalEventTrigger, _INPBDataString;

@interface _INPBTask : PBCodable <_INPBTask, NSSecureCoding, NSCopying> {

	SCD_Struct_IN11 _has;
	BOOL __encodeLegacyGloryData;
	int _priority;
	int _status;
	int _taskReference;
	int _taskType;
	_INPBContactEventTrigger* _contactEventTrigger;
	_INPBDateTime* _createdDateTime;
	NSString* _identifier;
	_INPBDateTime* _modifiedDateTime;
	NSString* _parentIdentifier;
	_INPBSpatialEventTrigger* _spatialEventTrigger;
	_INPBTemporalEventTrigger* _temporalEventTrigger;
	_INPBDataString* _title;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _INPBContactEventTrigger * contactEventTrigger;                             //@synthesize contactEventTrigger=_contactEventTrigger - In the implementation block
@property (nonatomic,readonly) BOOL hasContactEventTrigger; 
@property (nonatomic,retain) _INPBDateTime * createdDateTime;                                            //@synthesize createdDateTime=_createdDateTime - In the implementation block
@property (nonatomic,readonly) BOOL hasCreatedDateTime; 
@property (nonatomic,copy) NSString * identifier;                                                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) _INPBDateTime * modifiedDateTime;                                           //@synthesize modifiedDateTime=_modifiedDateTime - In the implementation block
@property (nonatomic,readonly) BOOL hasModifiedDateTime; 
@property (nonatomic,copy) NSString * parentIdentifier;                                                  //@synthesize parentIdentifier=_parentIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasParentIdentifier; 
@property (assign,nonatomic) int priority;                                                               //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) BOOL hasPriority; 
@property (nonatomic,retain) _INPBSpatialEventTrigger * spatialEventTrigger;                             //@synthesize spatialEventTrigger=_spatialEventTrigger - In the implementation block
@property (nonatomic,readonly) BOOL hasSpatialEventTrigger; 
@property (assign,nonatomic) int status;                                                                 //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int taskReference;                                                          //@synthesize taskReference=_taskReference - In the implementation block
@property (assign,nonatomic) BOOL hasTaskReference; 
@property (assign,nonatomic) int taskType;                                                               //@synthesize taskType=_taskType - In the implementation block
@property (assign,nonatomic) BOOL hasTaskType; 
@property (nonatomic,retain) _INPBTemporalEventTrigger * temporalEventTrigger;                           //@synthesize temporalEventTrigger=_temporalEventTrigger - In the implementation block
@property (nonatomic,readonly) BOOL hasTemporalEventTrigger; 
@property (nonatomic,retain) _INPBDataString * title;                                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(int)priority;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setTaskType:(int)arg1 ;
-(void)setPriority:(int)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(_INPBDataString *)title;
-(void)setTitle:(_INPBDataString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(int)taskType;
-(void)setHasTaskType:(BOOL)arg1 ;
-(BOOL)hasTaskType;
-(id)taskTypeAsString:(int)arg1 ;
-(int)StringAsTaskType:(id)arg1 ;
-(void)setHasPriority:(BOOL)arg1 ;
-(BOOL)hasPriority;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(BOOL)hasTitle;
-(BOOL)hasIdentifier;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(id)priorityAsString:(int)arg1 ;
-(int)StringAsPriority:(id)arg1 ;
-(_INPBContactEventTrigger *)contactEventTrigger;
-(void)setContactEventTrigger:(_INPBContactEventTrigger *)arg1 ;
-(BOOL)hasContactEventTrigger;
-(_INPBSpatialEventTrigger *)spatialEventTrigger;
-(void)setSpatialEventTrigger:(_INPBSpatialEventTrigger *)arg1 ;
-(BOOL)hasSpatialEventTrigger;
-(_INPBTemporalEventTrigger *)temporalEventTrigger;
-(void)setTemporalEventTrigger:(_INPBTemporalEventTrigger *)arg1 ;
-(BOOL)hasTemporalEventTrigger;
-(_INPBDateTime *)createdDateTime;
-(void)setCreatedDateTime:(_INPBDateTime *)arg1 ;
-(BOOL)hasCreatedDateTime;
-(_INPBDateTime *)modifiedDateTime;
-(void)setModifiedDateTime:(_INPBDateTime *)arg1 ;
-(BOOL)hasModifiedDateTime;
-(int)taskReference;
-(NSString *)parentIdentifier;
-(id)taskReferenceAsString:(int)arg1 ;
-(int)StringAsTaskReference:(id)arg1 ;
-(void)setTaskReference:(int)arg1 ;
-(BOOL)hasTaskReference;
-(void)setHasTaskReference:(BOOL)arg1 ;
-(void)setParentIdentifier:(NSString *)arg1 ;
-(BOOL)hasParentIdentifier;
@end
