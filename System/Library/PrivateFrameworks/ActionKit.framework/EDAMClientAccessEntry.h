/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMClientAccessEntry : FATObject {

	NSNumber* _accessTime;
	NSString* _appName;
	NSString* _deviceName;
	NSString* _ipAddress;
	NSString* _location;
	NSNumber* _browserType;
	NSNumber* _apiKeyId;
	NSNumber* _longSessionCreated;
	NSNumber* _userId;
	NSNumber* _authenticatedClientUserId;
	NSNumber* _businessAdmin;

}

@property (nonatomic,retain) NSNumber * accessTime;                             //@synthesize accessTime=_accessTime - In the implementation block
@property (nonatomic,retain) NSString * appName;                                //@synthesize appName=_appName - In the implementation block
@property (nonatomic,retain) NSString * deviceName;                             //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSString * ipAddress;                              //@synthesize ipAddress=_ipAddress - In the implementation block
@property (nonatomic,retain) NSString * location;                               //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSNumber * browserType;                            //@synthesize browserType=_browserType - In the implementation block
@property (nonatomic,retain) NSNumber * apiKeyId;                               //@synthesize apiKeyId=_apiKeyId - In the implementation block
@property (nonatomic,retain) NSNumber * longSessionCreated;                     //@synthesize longSessionCreated=_longSessionCreated - In the implementation block
@property (nonatomic,retain) NSNumber * userId;                                 //@synthesize userId=_userId - In the implementation block
@property (nonatomic,retain) NSNumber * authenticatedClientUserId;              //@synthesize authenticatedClientUserId=_authenticatedClientUserId - In the implementation block
@property (nonatomic,retain) NSNumber * businessAdmin;                          //@synthesize businessAdmin=_businessAdmin - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)deviceName;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(NSString *)ipAddress;
-(void)setIpAddress:(NSString *)arg1 ;
-(NSString *)appName;
-(void)setAppName:(NSString *)arg1 ;
-(NSNumber *)userId;
-(void)setUserId:(NSNumber *)arg1 ;
-(NSNumber *)browserType;
-(NSNumber *)accessTime;
-(void)setAccessTime:(NSNumber *)arg1 ;
-(void)setBrowserType:(NSNumber *)arg1 ;
-(NSNumber *)apiKeyId;
-(void)setApiKeyId:(NSNumber *)arg1 ;
-(NSNumber *)longSessionCreated;
-(void)setLongSessionCreated:(NSNumber *)arg1 ;
-(NSNumber *)authenticatedClientUserId;
-(void)setAuthenticatedClientUserId:(NSNumber *)arg1 ;
-(NSNumber *)businessAdmin;
-(void)setBusinessAdmin:(NSNumber *)arg1 ;
@end

