/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Proximity/Proximity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSNumber;

@interface PRBeaconDescriptor : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	NSNumber* _major;
	NSNumber* _minor;
	unsigned long long _macAddress;

}

@property (copy,readonly) NSUUID * UUID;                       //@synthesize UUID=_UUID - In the implementation block
@property (readonly) NSNumber * major;                         //@synthesize major=_major - In the implementation block
@property (readonly) NSNumber * minor;                         //@synthesize minor=_minor - In the implementation block
@property (assign) unsigned long long macAddress;              //@synthesize macAddress=_macAddress - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(id)initWithUUID:(id)arg1 ;
-(NSNumber *)major;
-(NSNumber *)minor;
-(id)_initWithUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 ;
-(id)initWithUUID:(id)arg1 major:(unsigned short)arg2 ;
-(id)initWithUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3 ;
-(unsigned long long)macAddress;
-(void)setMacAddress:(unsigned long long)arg1 ;
@end

