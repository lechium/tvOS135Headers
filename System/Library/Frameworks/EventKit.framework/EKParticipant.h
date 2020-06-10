/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>
#import <libobjc.A.dylib/EKParticipantSemanticIdentifierGeneratorDelegate.h>
#import <libobjc.A.dylib/EKIdentityProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EKCalendarItem, NSString, NSURL, NSPredicate;

@interface EKParticipant : EKObject <EKParticipantSemanticIdentifierGeneratorDelegate, EKIdentityProtocol, NSCopying> {

	EKCalendarItem* _owner;

}

@property (nonatomic,copy) NSString * emailAddress; 
@property (nonatomic,copy) NSString * phoneNumber; 
@property (nonatomic,copy) NSString * inviterNameString; 
@property (assign,nonatomic) int proposedStartDateStatus; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSString * comment; 
@property (nonatomic,readonly) EKCalendarItem * owner;                             //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) long long participantStatus; 
@property (nonatomic,readonly) long long participantRole; 
@property (nonatomic,readonly) long long participantType; 
@property (getter=isCurrentUser,nonatomic,readonly) BOOL currentUser; 
@property (nonatomic,readonly) NSPredicate * contactPredicate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)participantWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 url:(id)arg4 ;
+(id)participantWithName:(id)arg1 url:(id)arg2 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(NSURL *)URL;
-(NSString *)UUID;
-(void)setUUID:(NSString *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)comment;
-(id)url;
-(NSString *)phoneNumber;
-(id)displayName;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(void)setComment:(NSString *)arg1 ;
-(id)nameComponents;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(EKCalendarItem *)owner;
-(BOOL)isCurrentUser;
-(long long)participantRole;
-(long long)participantStatus;
-(long long)participantType;
-(NSPredicate *)contactPredicate;
-(id)semanticIdentifier;
-(BOOL)isEqualToParticipant:(id)arg1 ;
-(id)proposedStartDateForEvent:(id)arg1 ;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 url:(id)arg4 ;
-(id)displayNameRaw;
-(id)proposedStartDate;
-(void)setProposedStartDate:(id)arg1 ;
-(void)setProposedStartDateStatus:(int)arg1 ;
-(id)invitedBy;
-(const void*)ABRecordWithAddressBook:(void*)arg1 ;
-(BOOL)isLocationRoom;
-(void)setProposedStartDate:(id)arg1 forEvent:(id)arg2 ;
-(int)proposedStartDateStatus;
-(NSString *)inviterNameString;
-(id)setInviterNameString;
@end

