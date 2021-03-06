/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ContentKit/WFContact.h>

@class NSString, WFFileRepresentation, CNContact;

@interface WFCNContact : WFContact {

	BOOL _fromVCard;
	int _propertyID;
	NSString* _accountIdentifier;
	long long _multivalueIndex;
	WFFileRepresentation* _vCardRepresentation;
	CNContact* _contact;

}

@property (nonatomic,readonly) BOOL fromVCard;                                 //@synthesize fromVCard=_fromVCard - In the implementation block
@property (nonatomic,copy,readonly) CNContact * contact;                       //@synthesize contact=_contact - In the implementation block
@property (nonatomic,copy,readonly) NSString * contactIdentifier; 
@property (nonatomic,copy,readonly) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
+(void)contactStoreDidChange:(id)arg1 ;
+(id)changeObservers;
+(id)contactWithVCardData:(id)arg1 propertyID:(int)arg2 multivalueIndex:(long long)arg3 ;
+(id)allContactsWithSortOrder:(long long)arg1 passingTest:(/*^block*/id)arg2 ;
+(id)allContactsWithSortOrder:(long long)arg1 ;
+(id)contactsWithName:(id)arg1 ;
+(id)contactsWithVCardData:(id)arg1 ;
+(id)addContactsChangeObserver:(/*^block*/id)arg1 ;
+(void)removeContactsChangeObserver:(id)arg1 ;
+(id)contactWithCNContact:(id)arg1 propertyID:(int)arg2 multivalueIndex:(long long)arg3 ;
+(id)requiredKeysToFetch;
+(id)contactsWithName:(id)arg1 keysToFetch:(id)arg2 ;
+(id)contactWithCNContact:(id)arg1 ;
+(void)updateContactStoreObservation;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)URLs;
-(id)middleName;
-(id)namePrefix;
-(id)nameSuffix;
-(id)nickname;
-(id)imageData;
-(NSString *)contactIdentifier;
-(id)firstName;
-(id)lastName;
-(NSString *)accountIdentifier;
-(id)organization;
-(id)phoneNumbers;
-(id)formattedName;
-(id)emailAddresses;
-(CNContact *)contact;
-(id)instantMessageAddresses;
-(id)thumbnailImageData;
-(id)socialProfiles;
-(id)birthday;
-(id)dates;
-(BOOL)hasImageData;
-(id)vCardRepresentation;
-(int)propertyID;
-(BOOL)hasValueForPropertyID:(int)arg1 ;
-(id)valueForPropertyID:(int)arg1 ;
-(id)contactWithPropertyID:(int)arg1 multivalueIndex:(long long)arg2 ;
-(id)streetAddresses;
-(long long)multivalueIndex;
-(id)initWithCNContact:(id)arg1 propertyID:(int)arg2 multivalueIndex:(long long)arg3 fromVCard:(BOOL)arg4 ;
-(void)refetchContact;
-(BOOL)isPropertyIDRepresented:(int)arg1 ;
-(BOOL)fromVCard;
@end

