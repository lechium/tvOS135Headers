/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNChangeHistoryEvent.h>

@class CNContact;

@interface CNChangeHistoryPreferredContactForImageEvent : CNChangeHistoryEvent {

	CNContact* _preferredContact;
	CNContact* _unifiedContact;

}

@property (nonatomic,readonly) CNContact * preferredContact;              //@synthesize preferredContact=_preferredContact - In the implementation block
@property (nonatomic,readonly) CNContact * unifiedContact;                //@synthesize unifiedContact=_unifiedContact - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)acceptEventVisitor:(id)arg1 ;
-(id)initWithPreferredContact:(id)arg1 unifiedContact:(id)arg2 ;
-(CNContact *)preferredContact;
-(CNContact *)unifiedContact;
@end

