/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNSaveResponse.h>

@interface CNMutableSaveResponse : CNSaveResponse

@property (assign) BOOL didAffectMeCard; 
+(BOOL)supportsSecureCoding;
-(void)setDidAffectMeCard:(BOOL)arg1 ;
-(void)setContainerSnapshot:(id)arg1 forIndexPath:(id)arg2 ;
-(void)setContactSnapshot:(id)arg1 forIndexPath:(id)arg2 ;
-(void)setGroupSnapshot:(id)arg1 forIndexPath:(id)arg2 ;
@end

