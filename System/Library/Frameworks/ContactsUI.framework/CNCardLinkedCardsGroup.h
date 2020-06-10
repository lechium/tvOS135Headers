/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNCardGroup.h>

@class NSArray;

@interface CNCardLinkedCardsGroup : CNCardGroup {

	NSArray* _linkedContacts;

}

@property (nonatomic,retain) NSArray * linkedContacts;              //@synthesize linkedContacts=_linkedContacts - In the implementation block
-(id)title;
-(NSArray *)linkedContacts;
-(void)setLinkedContacts:(NSArray *)arg1 ;
-(id)displayItems;
-(id)editingItems;
@end

