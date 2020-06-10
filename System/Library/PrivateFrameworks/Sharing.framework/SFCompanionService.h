/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface SFCompanionService : NSObject <NSSecureCoding, NSCopying> {

	NSString* _deviceName;
	NSString* _deviceID;
	NSString* _serviceType;
	NSString* _managerID;
	NSString* _ipAddress;
	NSString* _identifier;
	NSNumber* _nsxpcVersion;

}

@property (copy) NSString * deviceID;                  //@synthesize deviceID=_deviceID - In the implementation block
@property (copy) NSString * deviceName;                //@synthesize deviceName=_deviceName - In the implementation block
@property (copy) NSString * serviceType;               //@synthesize serviceType=_serviceType - In the implementation block
@property (copy) NSString * managerID;                 //@synthesize managerID=_managerID - In the implementation block
@property (copy) NSString * ipAddress;                 //@synthesize ipAddress=_ipAddress - In the implementation block
@property (copy) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSNumber * nsxpcVersion;              //@synthesize nsxpcVersion=_nsxpcVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)serviceFromDictionary:(id)arg1 ;
+(id)serviceFromAuthorData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(NSString *)deviceName;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(NSString *)serviceType;
-(NSString *)ipAddress;
-(void)setIpAddress:(NSString *)arg1 ;
-(id)messageData;
-(NSString *)managerID;
-(void)setManagerID:(NSString *)arg1 ;
-(BOOL)isEqualToService:(id)arg1 ;
-(NSNumber *)nsxpcVersion;
-(void)setNsxpcVersion:(NSNumber *)arg1 ;
@end

