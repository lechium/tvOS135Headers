/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSNumber, NSDate;

@interface FAFamilyMember : NSObject <NSSecureCoding> {

	NSDictionary* _dictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * dictionary;                       //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) BOOL isMe; 
@property (nonatomic,copy,readonly) NSString * appleID; 
@property (nonatomic,copy,readonly) NSNumber * dsid; 
@property (nonatomic,copy,readonly) NSString * hashedDSID; 
@property (nonatomic,copy,readonly) NSString * altDSID; 
@property (nonatomic,copy,readonly) NSString * firstName; 
@property (nonatomic,copy,readonly) NSString * lastName; 
@property (nonatomic,readonly) unsigned long long age; 
@property (nonatomic,copy,readonly) NSString * memberTypeDisplayString; 
@property (nonatomic,copy,readonly) NSString * memberTypeString; 
@property (nonatomic,readonly) long long memberType; 
@property (nonatomic,copy,readonly) NSDate * joinedDate; 
@property (nonatomic,copy,readonly) NSString * statusString; 
@property (nonatomic,copy,readonly) NSString * inviteEmail; 
@property (nonatomic,readonly) BOOL isChildAccount; 
@property (nonatomic,readonly) BOOL hasParentalControlsEnabled; 
@property (nonatomic,readonly) BOOL hasAskToBuyEnabled; 
@property (nonatomic,readonly) BOOL isParent; 
@property (nonatomic,readonly) BOOL isOrganizer; 
@property (nonatomic,readonly) BOOL hasLinkediTunesAccount; 
@property (nonatomic,readonly) NSNumber * iTunesAccountDSID; 
@property (nonatomic,copy,readonly) NSString * iTunesAccountUsername; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionary;
-(NSNumber *)dsid;
-(NSString *)altDSID;
-(NSString *)statusString;
-(NSString *)firstName;
-(NSString *)lastName;
-(unsigned long long)age;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)isMe;
-(NSString *)appleID;
-(BOOL)isParent;
-(BOOL)isOrganizer;
-(long long)memberType;
-(BOOL)isChildAccount;
-(NSString *)hashedDSID;
-(NSString *)memberTypeString;
-(BOOL)hasParentalControlsEnabled;
-(NSString *)memberTypeDisplayString;
-(NSDate *)joinedDate;
-(NSString *)inviteEmail;
-(BOOL)hasAskToBuyEnabled;
-(NSNumber *)iTunesAccountDSID;
-(NSString *)iTunesAccountUsername;
-(BOOL)hasLinkediTunesAccount;
-(void)fetchFamilyPhotoWithRequestedSize:(unsigned long long)arg1 fallbackToLocalAddressBook:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

