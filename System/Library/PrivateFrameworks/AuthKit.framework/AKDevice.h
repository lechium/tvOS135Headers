/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKit/AuthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSLock, NSString, NSNumber, NSLocale, NSData;

@interface AKDevice : NSObject <NSSecureCoding, NSCopying> {

	os_unfair_lock_s _unfairLock;
	CTServerConnectionRef _telephonyConnectionRef;
	NSLock* _telephonyLock;
	BOOL _shouldUpdateUniqueDeviceIdentifier;
	BOOL _shouldUpdateServerFriendlyDescription;
	BOOL _shouldUpdateColor;
	BOOL _shouldUpdateEnclosureColor;
	BOOL _shouldUpdateCoverGlassColor;
	BOOL _shouldUpdateHousingColor;
	BOOL _shouldUpdateBackingColor;
	BOOL _shouldUpdateLocale;
	BOOL _shouldUpdateROMAddress;
	BOOL _shouldUpdateMLBSerialNumber;
	BOOL _shouldUpdateModelNumber;
	NSString* _uniqueDeviceIdentifier;
	NSString* _serverFriendlyDescription;
	NSString* _color;
	NSString* _enclosureColor;
	NSNumber* _coverGlassColor;
	NSNumber* _housingColor;
	NSNumber* _backingColor;
	NSLocale* _locale;
	NSString* _ROMAddress;
	NSString* _MLBSerialNumber;
	NSString* _modelNumber;
	unsigned long long _linkType;

}

@property (readonly) NSString * serialNumber; 
@property (readonly) NSString * userChosenName; 
@property (readonly) NSString * userFullName; 
@property (readonly) NSString * internationalMobileEquipmentIdentity; 
@property (readonly) BOOL isProtectedWithPasscode; 
@property (readonly) BOOL isBiometricAuthCapable; 
@property (readonly) BOOL isFaceIDCapable; 
@property (readonly) BOOL isUnlocked; 
@property (readonly) BOOL isInCircle; 
@property (readonly) NSString * phoneNumber; 
@property (readonly) NSString * mobileEquipmentIdentifier; 
@property (readonly) NSString * integratedCircuitCardIdentifier; 
@property (readonly) BOOL isInternalBuild; 
@property (readonly) BOOL isMultiUserMode; 
@property (readonly) NSData * serializedData; 
@property (nonatomic,copy) NSString * serverFriendlyDescription;                   //@synthesize serverFriendlyDescription=_serverFriendlyDescription - In the implementation block
@property (nonatomic,copy) NSString * uniqueDeviceIdentifier;                      //@synthesize uniqueDeviceIdentifier=_uniqueDeviceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * color;                                       //@synthesize color=_color - In the implementation block
@property (nonatomic,copy) NSString * enclosureColor;                              //@synthesize enclosureColor=_enclosureColor - In the implementation block
@property (nonatomic,copy) NSNumber * coverGlassColor;                             //@synthesize coverGlassColor=_coverGlassColor - In the implementation block
@property (nonatomic,copy) NSNumber * housingColor;                                //@synthesize housingColor=_housingColor - In the implementation block
@property (nonatomic,copy) NSNumber * backingColor;                                //@synthesize backingColor=_backingColor - In the implementation block
@property (nonatomic,copy) NSLocale * locale;                                      //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) NSString * MLBSerialNumber;                             //@synthesize MLBSerialNumber=_MLBSerialNumber - In the implementation block
@property (nonatomic,copy) NSString * ROMAddress;                                  //@synthesize ROMAddress=_ROMAddress - In the implementation block
@property (nonatomic,copy) NSString * modelNumber;                                 //@synthesize modelNumber=_modelNumber - In the implementation block
@property (setter=setLinkType:) unsigned long long linkType;                       //@synthesize linkType=_linkType - In the implementation block
@property (readonly) NSString * localUserUUID; 
+(BOOL)supportsSecureCoding;
+(id)_osVersion;
+(id)currentDevice;
+(id)_hardwareModel;
+(id)systemContainerCacheURL;
+(long long)currentDeviceAuthenticationMode;
+(id)systemContainerURL;
+(id)_osName;
+(id)_buildNumber;
+(id)activeIDSPeerDevice;
+(id)deviceWithSerializedData:(id)arg1 ;
+(id)deviceSpecificLocalizedStringWithKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(NSString *)phoneNumber;
-(NSString *)uniqueDeviceIdentifier;
-(unsigned long long)linkType;
-(void)setLinkType:(unsigned long long)arg1 ;
-(NSString *)userFullName;
-(NSString *)serialNumber;
-(NSString *)color;
-(void)setColor:(NSString *)arg1 ;
-(BOOL)isInternalBuild;
-(BOOL)isProtectedWithPasscode;
-(NSString *)localUserUUID;
-(NSString *)serverFriendlyDescription;
-(BOOL)isInCircle;
-(NSString *)ROMAddress;
-(NSString *)MLBSerialNumber;
-(NSString *)modelNumber;
-(BOOL)isMultiUserMode;
-(void)_setShouldUpdateToValue:(BOOL)arg1 ;
-(NSString *)enclosureColor;
-(NSNumber *)coverGlassColor;
-(NSNumber *)housingColor;
-(NSNumber *)backingColor;
-(CTServerConnectionRef)_telephonyConnection;
-(NSData *)serializedData;
-(void)setEnclosureColor:(NSString *)arg1 ;
-(void)setCoverGlassColor:(NSNumber *)arg1 ;
-(void)setHousingColor:(NSNumber *)arg1 ;
-(void)setBackingColor:(NSNumber *)arg1 ;
-(void)setUniqueDeviceIdentifier:(NSString *)arg1 ;
-(void)setROMAddress:(NSString *)arg1 ;
-(void)setMLBSerialNumber:(NSString *)arg1 ;
-(void)setModelNumber:(NSString *)arg1 ;
-(void)setServerFriendlyDescription:(NSString *)arg1 ;
-(NSString *)userChosenName;
-(NSString *)internationalMobileEquipmentIdentity;
-(BOOL)isUnlocked;
-(BOOL)isBiometricAuthCapable;
-(BOOL)isFaceIDCapable;
-(NSString *)mobileEquipmentIdentifier;
-(NSString *)integratedCircuitCardIdentifier;
-(id)_volumeGroupUUID;
@end
