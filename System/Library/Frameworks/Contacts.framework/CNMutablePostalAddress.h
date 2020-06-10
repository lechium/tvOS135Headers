/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPostalAddress.h>

@class NSString;

@interface CNMutablePostalAddress : CNPostalAddress

@property (nonatomic,copy) NSString * formattedAddress; 
@property (nonatomic,copy) NSString * street; 
@property (nonatomic,copy) NSString * subLocality; 
@property (nonatomic,copy) NSString * city; 
@property (nonatomic,copy) NSString * subAdministrativeArea; 
@property (nonatomic,copy) NSString * state; 
@property (nonatomic,copy) NSString * postalCode; 
@property (nonatomic,copy) NSString * country; 
@property (nonatomic,copy) NSString * ISOCountryCode; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)freeze;
@end

