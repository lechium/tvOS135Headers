/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EKIdentityProtocol.h>

@class NSString, NSURL, NSDate;

@interface EKCalendarEventInvitationNotificationAttendee : NSObject <EKIdentityProtocol> {

	BOOL _statusChanged;
	BOOL _commentChanged;
	BOOL _proposedStartDateChanged;
	BOOL _proposedStartDateDeclined;
	BOOL _isCurrentUser;
	NSString* _name;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _emailAddress;
	NSString* _phoneNumber;
	NSURL* _URL;
	long long _participantStatus;
	NSString* _comment;
	NSDate* _proposedStartDate;

}

@property (nonatomic,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * firstName;                        //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) NSString * lastName;                         //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) NSString * emailAddress;                     //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,readonly) NSString * phoneNumber;                      //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                 //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) BOOL statusChanged;                          //@synthesize statusChanged=_statusChanged - In the implementation block
@property (nonatomic,readonly) BOOL commentChanged;                         //@synthesize commentChanged=_commentChanged - In the implementation block
@property (nonatomic,readonly) BOOL proposedStartDateChanged;               //@synthesize proposedStartDateChanged=_proposedStartDateChanged - In the implementation block
@property (nonatomic,readonly) long long participantStatus;                 //@synthesize participantStatus=_participantStatus - In the implementation block
@property (nonatomic,readonly) NSString * comment;                          //@synthesize comment=_comment - In the implementation block
@property (nonatomic,readonly) NSDate * proposedStartDate;                  //@synthesize proposedStartDate=_proposedStartDate - In the implementation block
@property (nonatomic,readonly) BOOL proposedStartDateDeclined;              //@synthesize proposedStartDateDeclined=_proposedStartDateDeclined - In the implementation block
@property (nonatomic,readonly) BOOL isCurrentUser;                          //@synthesize isCurrentUser=_isCurrentUser - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSURL *)URL;
-(NSString *)comment;
-(NSString *)phoneNumber;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)emailAddress;
-(BOOL)isCurrentUser;
-(long long)participantStatus;
-(NSDate *)proposedStartDate;
-(id)initWithParticipant:(id)arg1 forEvent:(id)arg2 ;
-(BOOL)proposedStartDateDeclined;
-(BOOL)statusChanged;
-(BOOL)proposedStartDateChanged;
-(BOOL)commentChanged;
@end

