/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKNotification.h>

@class EKCalendar, NSString, NSURL, NSDate;

@interface EKInviteReplyNotification : EKNotification

@property (nonatomic,readonly) EKCalendar * inviteReplyCalendar; 
@property (nonatomic,readonly) NSString * calendarName; 
@property (nonatomic,copy) NSString * inReplyTo; 
@property (nonatomic,copy) NSString * shareeDisplayName; 
@property (nonatomic,copy) NSString * shareeFirstName; 
@property (nonatomic,copy) NSString * shareeLastName; 
@property (nonatomic,copy) NSURL * shareeURL; 
@property (nonatomic,readonly) NSString * shareeEmailAddress; 
@property (nonatomic,readonly) NSString * shareePhoneNumber; 
@property (assign,nonatomic) unsigned long long shareeStatus; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,copy) NSString * summary; 
@property (nonatomic,readonly) BOOL alerted; 
+(Class)frozenClass;
+(id)sourceForInviteReplyNotification:(id)arg1 ;
+(id)knownRelationshipSingleValueKeys;
-(NSDate *)creationDate;
-(BOOL)validate:(id*)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSString *)summary;
-(void)setSummary:(NSString *)arg1 ;
-(NSString *)inReplyTo;
-(void)setInReplyTo:(NSString *)arg1 ;
-(NSString *)shareeDisplayName;
-(void)setShareeDisplayName:(NSString *)arg1 ;
-(NSString *)shareeFirstName;
-(void)setShareeFirstName:(NSString *)arg1 ;
-(NSString *)shareeLastName;
-(void)setShareeLastName:(NSString *)arg1 ;
-(NSURL *)shareeURL;
-(void)setShareeURL:(NSURL *)arg1 ;
-(unsigned long long)shareeStatus;
-(void)setShareeStatus:(unsigned long long)arg1 ;
-(BOOL)alerted;
-(EKCalendar *)inviteReplyCalendar;
-(NSString *)calendarName;
-(NSString *)shareeEmailAddress;
-(NSString *)shareePhoneNumber;
-(void)_setInviteReplyCalendar:(id)arg1 ;
-(id)initWithInviteReplyCalendar:(id)arg1 ;
-(void)clearAlertedStatus;
@end

