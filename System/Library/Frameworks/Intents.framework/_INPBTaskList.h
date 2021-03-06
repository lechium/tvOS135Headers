/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBTaskList.h>
@class _INPBDateTime, _INPBDataString, NSString, NSArray;


@protocol _INPBTaskList <NSObject>
@property (nonatomic,retain) _INPBDateTime * createdDateTime; 
@property (nonatomic,readonly) BOOL hasCreatedDateTime; 
@property (nonatomic,retain) _INPBDataString * groupName; 
@property (nonatomic,readonly) BOOL hasGroupName; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) _INPBDateTime * modifiedDateTime; 
@property (nonatomic,readonly) BOOL hasModifiedDateTime; 
@property (nonatomic,copy) NSArray * tasks; 
@property (nonatomic,readonly) unsigned long long tasksCount; 
@property (nonatomic,retain) _INPBDataString * title; 
@property (nonatomic,readonly) BOOL hasTitle; 
@required
+(Class)tasksType;
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(NSArray *)tasks;
-(void)setTasks:(id)arg1;
-(_INPBDataString *)title;
-(void)setTitle:(id)arg1;
-(_INPBDataString *)groupName;
-(void)setGroupName:(id)arg1;
-(BOOL)hasTitle;
-(BOOL)hasIdentifier;
-(BOOL)hasGroupName;
-(void)clearTasks;
-(void)addTasks:(id)arg1;
-(id)tasksAtIndex:(unsigned long long)arg1;
-(_INPBDateTime *)createdDateTime;
-(void)setCreatedDateTime:(id)arg1;
-(BOOL)hasCreatedDateTime;
-(_INPBDateTime *)modifiedDateTime;
-(void)setModifiedDateTime:(id)arg1;
-(BOOL)hasModifiedDateTime;
-(unsigned long long)tasksCount;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _INPBDateTime, _INPBDataString, NSString, NSArray;

@interface _INPBTaskList : PBCodable <_INPBTaskList, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	_INPBDateTime* _createdDateTime;
	_INPBDataString* _groupName;
	NSString* _identifier;
	_INPBDateTime* _modifiedDateTime;
	NSArray* _tasks;
	_INPBDataString* _title;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _INPBDateTime * createdDateTime;                                            //@synthesize createdDateTime=_createdDateTime - In the implementation block
@property (nonatomic,readonly) BOOL hasCreatedDateTime; 
@property (nonatomic,retain) _INPBDataString * groupName;                                                //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupName; 
@property (nonatomic,copy) NSString * identifier;                                                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) _INPBDateTime * modifiedDateTime;                                           //@synthesize modifiedDateTime=_modifiedDateTime - In the implementation block
@property (nonatomic,readonly) BOOL hasModifiedDateTime; 
@property (nonatomic,copy) NSArray * tasks;                                                              //@synthesize tasks=_tasks - In the implementation block
@property (nonatomic,readonly) unsigned long long tasksCount; 
@property (nonatomic,retain) _INPBDataString * title;                                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
+(BOOL)supportsSecureCoding;
+(Class)tasksType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSArray *)tasks;
-(void)setTasks:(NSArray *)arg1 ;
-(id)dictionaryRepresentation;
-(_INPBDataString *)title;
-(void)setTitle:(_INPBDataString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(_INPBDataString *)groupName;
-(void)setGroupName:(_INPBDataString *)arg1 ;
-(BOOL)hasTitle;
-(BOOL)hasIdentifier;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(BOOL)hasGroupName;
-(void)clearTasks;
-(void)addTasks:(id)arg1 ;
-(id)tasksAtIndex:(unsigned long long)arg1 ;
-(_INPBDateTime *)createdDateTime;
-(void)setCreatedDateTime:(_INPBDateTime *)arg1 ;
-(BOOL)hasCreatedDateTime;
-(_INPBDateTime *)modifiedDateTime;
-(void)setModifiedDateTime:(_INPBDateTime *)arg1 ;
-(BOOL)hasModifiedDateTime;
-(unsigned long long)tasksCount;
@end

