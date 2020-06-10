/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSArray;

@interface IDSRegisteredDevice : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	NSString* _hardwareVersion;
	NSData* _pushToken;
	NSArray* _URIs;
	NSData* _publicDeviceIdentity;

}

@property (nonatomic,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * hardwareVersion;                 //@synthesize hardwareVersion=_hardwareVersion - In the implementation block
@property (nonatomic,readonly) NSData * pushToken;                         //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,readonly) NSArray * URIs;                             //@synthesize URIs=_URIs - In the implementation block
@property (nonatomic,readonly) NSData * publicDeviceIdentity;              //@synthesize publicDeviceIdentity=_publicDeviceIdentity - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)registeredDeviceFromDependentRegistrationDictionary:(id)arg1 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)pushToken;
-(NSString *)hardwareVersion;
-(NSData *)publicDeviceIdentity;
-(id)initWithName:(id)arg1 hardwareVersion:(id)arg2 pushToken:(id)arg3 URIs:(id)arg4 publicDeviceIdentity:(id)arg5 ;
-(BOOL)isEqualToRegisteredDevice:(id)arg1 ;
-(NSArray *)URIs;
@end

