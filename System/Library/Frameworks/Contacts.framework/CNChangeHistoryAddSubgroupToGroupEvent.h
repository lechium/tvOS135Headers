/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNChangeHistoryEvent.h>

@class CNGroup;

@interface CNChangeHistoryAddSubgroupToGroupEvent : CNChangeHistoryEvent {

	CNGroup* _subgroup;
	CNGroup* _group;

}

@property (nonatomic,readonly) CNGroup * subgroup;              //@synthesize subgroup=_subgroup - In the implementation block
@property (nonatomic,readonly) CNGroup * group;                 //@synthesize group=_group - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CNGroup *)group;
-(void)acceptEventVisitor:(id)arg1 ;
-(id)initWithSubgroup:(id)arg1 group:(id)arg2 ;
-(CNGroup *)subgroup;
@end

