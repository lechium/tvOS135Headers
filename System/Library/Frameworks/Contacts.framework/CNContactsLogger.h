/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNContactsLogger <NSObject>
@required
-(void)tccAccessPreflightWasDenied;
-(void)tccAccessRequestWasDenied;
-(void)XPCConnectionWasInterrupted;
-(void)XPCConnectionWasInvalidated;
-(void)serviceError:(id)arg1;
-(void)noAccessToContactsWithError:(id)arg1;
-(void)didFetchContacts:(id)arg1 error:(id)arg2;
-(void)didFetchEncodedContacts:(id)arg1 error:(id)arg2;
-(void)fetchingContactsBatch:(/*^block*/id)arg1;
-(void)fetchContactsMatchingPredicate:(id)arg1 unifyResults:(BOOL)arg2 keysToFetch:(id)arg3;
-(void)fetchEncodedContactsMatchingPredicate:(id)arg1 unifyResults:(BOOL)arg2 keysToFetch:(id)arg3;
-(void)saveRequestInvalid:(id)arg1;
-(void)saveRequestFailed:(id)arg1;
-(void)addingContacts:(id)arg1 toContainerWithIdentifier:(id)arg2;
-(void)deletingContact:(id)arg1;
-(void)deleteImageRecentsMetadataRequestFailed:(id)arg1;
-(void)updatingContact:(id)arg1;
-(void)fetchContactsProgressivelyMatchingPredicate:(id)arg1 unifyResults:(BOOL)arg2 keysToFetch:(id)arg3;
-(void)settingDefaultAccount:(/*^block*/id)arg1;
-(void)resettingSortDataIfNeeded:(/*^block*/id)arg1;
-(void)contactsAccessWasGranted:(BOOL)arg1;
-(void)requestingAccessForContacts:(/*^block*/id)arg1;
-(void)fetchingMeContactIdentifier:(/*^block*/id)arg1;
-(void)changedMeContact:(id)arg1;
-(void)changingMeContact:(/*^block*/id)arg1;
-(void)fetchingContactCount:(/*^block*/id)arg1;
-(void)fetchingContactSectionCounts:(/*^block*/id)arg1;
-(void)fetchingContacts:(/*^block*/id)arg1;
-(void)fetchingGroups:(/*^block*/id)arg1;
-(void)fetchingContainers:(/*^block*/id)arg1;
-(void)saving:(/*^block*/id)arg1;
-(void)fetchingDefaultContainerIdentifier:(/*^block*/id)arg1;
-(void)fetchingContactWithUserActivity:(/*^block*/id)arg1;
-(void)fetchingContactIdentifierWithMatchingDictionary:(/*^block*/id)arg1;
-(void)registeringForChangeHistory:(/*^block*/id)arg1;
-(void)unregisteringForChangeHistory:(/*^block*/id)arg1;
-(void)fetchingChangeHistory:(/*^block*/id)arg1;
-(void)clearingChangeHistory:(/*^block*/id)arg1;
-(void)postingNotificationWithName:(id)arg1;
-(void)postingNotification:(/*^block*/id)arg1;
-(void)applyContactUpdateOfKind:(const char*)arg1 value:(id)arg2 property:(id)arg3;
-(void)setContactImageData:(id)arg1;
-(void)removeContactImageData;
-(void)setContactImageData:(id)arg1 format:(const char*)arg2 cropRect:(CGRect)arg3;
-(void)setContactImageDataZeroCropRect:(id)arg1 format:(const char*)arg2;
-(void)servicingContactsRequest:(/*^block*/id)arg1;
-(void)SPIUsageLackingEntitlementGrantedForPID:(int)arg1;
-(void)SPIUsageLackingEntitlementRejectedForPID:(int)arg1;
-(void)internalError:(id)arg1;
-(void)errorWhenQueryingTetheredSyncData:(id)arg1;

@end

