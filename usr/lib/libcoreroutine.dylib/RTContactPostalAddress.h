/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/RTAddress.h>

@class NSString;

@interface RTContactPostalAddress : RTAddress {

	NSString* _contactsIdentifier;
	unsigned long long _labelType;

}

@property (nonatomic,copy,readonly) NSString * contactsIdentifier;              //@synthesize contactsIdentifier=_contactsIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long labelType;                    //@synthesize labelType=_labelType - In the implementation block
+(id)labelTypeToString:(unsigned long long)arg1 ;
-(id)description;
-(id)init;
-(id)dictionaryRepresentation;
-(unsigned long long)labelType;
-(id)initWithIdentifier:(id)arg1 subThoroughfare:(id)arg2 thoroughfare:(id)arg3 subLocality:(id)arg4 locality:(id)arg5 subAdministrativeArea:(id)arg6 administrativeArea:(id)arg7 administrativeAreaCode:(id)arg8 postalCode:(id)arg9 country:(id)arg10 countryCode:(id)arg11 inlandWater:(id)arg12 ocean:(id)arg13 areasOfInterest:(id)arg14 isIsland:(BOOL)arg15 creationDate:(id)arg16 expirationDate:(id)arg17 ;
-(id)geoDictionaryRepresentation;
-(NSString *)contactsIdentifier;
-(id)initWithIdentifier:(id)arg1 subThoroughfare:(id)arg2 thoroughfare:(id)arg3 subLocality:(id)arg4 locality:(id)arg5 subAdministrativeArea:(id)arg6 administrativeArea:(id)arg7 administrativeAreaCode:(id)arg8 postalCode:(id)arg9 country:(id)arg10 countryCode:(id)arg11 inlandWater:(id)arg12 ocean:(id)arg13 areasOfInterest:(id)arg14 isIsland:(BOOL)arg15 creationDate:(id)arg16 expirationDate:(id)arg17 contactsIdentifier:(id)arg18 labelType:(unsigned long long)arg19 ;
-(id)initWithIdentifier:(id)arg1 lableType:(unsigned long long)arg2 geoDictionary:(id)arg3 ;
@end
