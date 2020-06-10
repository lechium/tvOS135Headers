/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>

@interface EKPersistentCalendarItem : EKPersistentObject

@property (assign,getter=isDefaultAlarmRemoved,nonatomic) BOOL defaultAlarmRemoved; 
+(id)defaultPropertiesToLoad;
+(id)relations;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)calendar;
-(void)setCalendar:(id)arg1 ;
-(id)URL;
-(id)UUID;
-(void)setUUID:(id)arg1 ;
-(void)setURL:(id)arg1 ;
-(int)priority;
-(void)setPriority:(int)arg1 ;
-(id)attachments;
-(id)startDate;
-(void)setAttachments:(id)arg1 ;
-(id)title;
-(void)setTitle:(id)arg1 ;
-(id)uniqueID;
-(void)setSequence:(int)arg1 ;
-(int)sequence;
-(id)creationDate;
-(int)sequenceNumber;
-(id)lastModifiedDate;
-(id)action;
-(void)setAction:(id)arg1 ;
-(id)startLocation;
-(void)setStartDate:(id)arg1 ;
-(void)setCreationDate:(id)arg1 ;
-(void)setUniqueID:(id)arg1 ;
-(id)location;
-(id)clientLocation;
-(void)setLocation:(id)arg1 ;
-(void)setAllDay:(BOOL)arg1 ;
-(id)notes;
-(void)setNotes:(id)arg1 ;
-(void)setLastModifiedDate:(id)arg1 ;
-(id)externalID;
-(void)setExternalID:(id)arg1 ;
-(id)externalModificationTag;
-(void)setExternalModificationTag:(id)arg1 ;
-(id)organizer;
-(id)attendees;
-(void)setAttendees:(id)arg1 ;
-(int)selfParticipantStatus;
-(id)alarms;
-(void)setAlarms:(id)arg1 ;
-(BOOL)isAllDay;
-(void)setOrganizer:(id)arg1 ;
-(id)localStructuredData;
-(id)structuredData;
-(void)setLocalStructuredData:(id)arg1 ;
-(void)setStructuredData:(id)arg1 ;
-(id)recurrenceRules;
-(void)setRecurrenceRules:(id)arg1 ;
-(void)addAlarm:(id)arg1 ;
-(void)addAttendee:(id)arg1 ;
-(void)addRecurrenceRule:(id)arg1 ;
-(id)exceptionDates;
-(id)detachedItems;
-(BOOL)hasRecurrenceRules;
-(id)externalScheduleID;
-(void)setExternalScheduleID:(id)arg1 ;
-(void)setStructuredLocationWithoutPrediction:(id)arg1 ;
-(id)structuredLocationWithoutPrediction;
-(void)removeAlarm:(id)arg1 ;
-(id)startTimeZoneName;
-(void)setStartTimeZoneName:(id)arg1 ;
-(id)endTimeZoneName;
-(void)setEndTimeZoneName:(id)arg1 ;
-(BOOL)hasAttendees;
-(id)externalData;
-(id)selfAttendee;
-(id)sharedItemCreatedByFirstName;
-(id)sharedItemCreatedByLastName;
-(id)sharedItemCreatedTimeZoneName;
-(void)setSharedItemCreatedTimeZoneName:(id)arg1 ;
-(id)sharedItemModifiedByFirstName;
-(id)sharedItemModifiedByLastName;
-(id)sharedItemModifiedTimeZoneName;
-(void)setSharedItemModifiedTimeZoneName:(id)arg1 ;
-(id)travelStartLocation;
-(id)originalItem;
-(void)setOriginalItem:(id)arg1 ;
-(void)setExternalData:(id)arg1 ;
-(id)ekExceptionDates;
-(void)setEkExceptionDates:(id)arg1 ;
-(void)setDetachedItems:(id)arg1 ;
-(void)setAppLink:(id)arg1 ;
-(unsigned)modifiedProperties;
-(void)setModifiedProperties:(unsigned)arg1 ;
-(BOOL)hasNotes;
-(void)setClientLocation:(id)arg1 ;
-(void)setTravelStartLocation:(id)arg1 ;
-(id)calendarScale;
-(void)setCalendarScale:(id)arg1 ;
-(id)appLink;
-(void)removeRecurrenceRule:(id)arg1 ;
-(void)removeAttendee:(id)arg1 ;
-(void)setSelfAttendee:(id)arg1 ;
-(id)sharedItemCreatedByDisplayName;
-(void)setSharedItemCreatedByDisplayName:(id)arg1 ;
-(id)sharedItemCreatedByAddress;
-(void)setSharedItemCreatedByAddress:(id)arg1 ;
-(void)setSharedItemCreatedByFirstName:(id)arg1 ;
-(void)setSharedItemCreatedByLastName:(id)arg1 ;
-(id)sharedItemCreatedDate;
-(void)setSharedItemCreatedDate:(id)arg1 ;
-(id)sharedItemModifiedByDisplayName;
-(void)setSharedItemModifiedByDisplayName:(id)arg1 ;
-(id)sharedItemModifiedByAddress;
-(void)setSharedItemModifiedByAddress:(id)arg1 ;
-(void)setSharedItemModifiedByFirstName:(id)arg1 ;
-(void)setSharedItemModifiedByLastName:(id)arg1 ;
-(id)sharedItemModifiedDate;
-(void)setSharedItemModifiedDate:(id)arg1 ;
-(void)setExceptionDates:(id)arg1 ;
-(id)participationStatusModifiedDate;
-(void)setParticipationStatusModifiedDate:(id)arg1 ;
-(BOOL)isDefaultAlarmRemoved;
-(void)setDefaultAlarmRemoved:(BOOL)arg1 ;
-(void)setStartLocation:(id)arg1 ;
-(void)setHasNotes:(BOOL)arg1 ;
-(BOOL)isPhantomMaster;
-(void)setPhantomMaster:(BOOL)arg1 ;
-(void)setHasRecurrenceRules:(BOOL)arg1 ;
-(void)setHasAttendees:(BOOL)arg1 ;
-(void)addAttachment:(id)arg1 ;
-(void)removeAttachment:(id)arg1 ;
@end

