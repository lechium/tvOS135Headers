/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSDate;

@interface W5WiFiPreferredNetwork : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isEnabled;
	BOOL _isPasspoint;
	BOOL _isCaptive;
	BOOL _isHidden;
	BOOL _isMultiAP;
	NSString* _identifier;
	NSString* _ssidString;
	NSData* _ssid;
	long long _security;
	NSString* _domainName;
	NSDate* _lastJoinedTimestamp;

}

@property (nonatomic,copy) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * ssidString;                     //@synthesize ssidString=_ssidString - In the implementation block
@property (nonatomic,copy) NSData * ssid;                             //@synthesize ssid=_ssid - In the implementation block
@property (assign,nonatomic) long long security;                      //@synthesize security=_security - In the implementation block
@property (assign,nonatomic) BOOL isEnabled;                          //@synthesize isEnabled=_isEnabled - In the implementation block
@property (assign,nonatomic) BOOL isPasspoint;                        //@synthesize isPasspoint=_isPasspoint - In the implementation block
@property (nonatomic,copy) NSString * domainName;                     //@synthesize domainName=_domainName - In the implementation block
@property (assign,nonatomic) BOOL isCaptive;                          //@synthesize isCaptive=_isCaptive - In the implementation block
@property (assign,nonatomic) BOOL isHidden;                           //@synthesize isHidden=_isHidden - In the implementation block
@property (assign,nonatomic) BOOL isMultiAP;                          //@synthesize isMultiAP=_isMultiAP - In the implementation block
@property (nonatomic,copy) NSDate * lastJoinedTimestamp;              //@synthesize lastJoinedTimestamp=_lastJoinedTimestamp - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)preferredNetworksList;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(BOOL)isHidden;
-(void)setIsHidden:(BOOL)arg1 ;
-(NSData *)ssid;
-(NSString *)domainName;
-(void)setSsid:(NSData *)arg1 ;
-(void)setDomainName:(NSString *)arg1 ;
-(void)setIsEnabled:(BOOL)arg1 ;
-(void)setSecurity:(long long)arg1 ;
-(long long)security;
-(BOOL)isCaptive;
-(void)setIsCaptive:(BOOL)arg1 ;
-(void)setSsidString:(NSString *)arg1 ;
-(void)setLastJoinedTimestamp:(NSDate *)arg1 ;
-(void)setIsPasspoint:(BOOL)arg1 ;
-(void)setIsMultiAP:(BOOL)arg1 ;
-(BOOL)isPasspoint;
-(NSString *)ssidString;
-(BOOL)isEqualToPreferredNetwork:(id)arg1 ;
-(BOOL)isMultiAP;
-(NSDate *)lastJoinedTimestamp;
@end

