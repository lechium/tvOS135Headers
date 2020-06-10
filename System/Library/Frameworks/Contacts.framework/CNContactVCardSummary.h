/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CNContactVCardSummary : NSObject <NSCopying, NSSecureCoding> {

	NSString* _title;
	NSString* _subtitle;
	unsigned long long _contactCount;
	NSArray* _avatarContacts;

}

@property (nonatomic,copy,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * descriptiveLabel; 
@property (nonatomic,copy,readonly) NSString * subtitle;                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) unsigned long long contactCount;               //@synthesize contactCount=_contactCount - In the implementation block
@property (nonatomic,copy,readonly) NSArray * avatarContacts;                 //@synthesize avatarContacts=_avatarContacts - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)readingOptionsWithContactLimit:(unsigned long long)arg1 ;
+(id)namesForContact:(id)arg1 ;
+(id)nameForContact:(id)arg1 ;
+(id)localizedStringWithName:(id)arg1 andOtherName:(id)arg2 ;
+(id)localizedStringWithName:(id)arg1 andThisManyOthers:(unsigned long long)arg2 ;
+(id)defaultNameFormatter;
+(id)makeFormatter;
+(BOOL)isAvatarContacts:(id)arg1 equalTo:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 contactCount:(unsigned long long)arg3 avatarContacts:(id)arg4 ;
-(unsigned long long)contactCount;
-(NSArray *)avatarContacts;
-(NSString *)descriptiveLabel;
@end

