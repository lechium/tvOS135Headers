/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNSaveRequestVerifier : NSObject
+(id)insertedAndUpdatedContactsForSaveRequest:(id)arg1 ;
+(BOOL)_areDirectPropertiesOfSaveRequest:(id)arg1 authorizedForSavingWithContext:(id)arg2 error:(id*)arg3 ;
+(BOOL)_arePropertiesOfContacts:(id)arg1 inSaveRequest:(id)arg2 authorizedForSavingWithContext:(id)arg3 error:(id*)arg4 ;
+(BOOL)_isEditingOfContacts:(id)arg1 inSaveRequest:(id)arg2 authorizedForSavingWithContext:(id)arg3 error:(id*)arg4 ;
+(BOOL)isValidSaveRequest:(id)arg1 error:(id*)arg2 ;
+(BOOL)isSaveRequest:(id)arg1 authorizedForSavingWithContext:(id)arg2 error:(id*)arg3 ;
@end

