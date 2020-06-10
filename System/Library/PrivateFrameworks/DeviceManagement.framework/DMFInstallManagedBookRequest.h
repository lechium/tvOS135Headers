/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString, NSNumber, NSURL;

@interface DMFInstallManagedBookRequest : DMFTaskRequest {

	NSString* _originator;
	NSNumber* _iTunesStoreID;
	NSString* _persistentID;
	NSString* _author;
	NSString* _title;
	NSString* _version;
	NSURL* _URL;
	unsigned long long _type;

}

@property (nonatomic,copy) NSString * originator;                  //@synthesize originator=_originator - In the implementation block
@property (nonatomic,copy) NSNumber * iTunesStoreID;               //@synthesize iTunesStoreID=_iTunesStoreID - In the implementation block
@property (nonatomic,copy) NSString * persistentID;                //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,copy) NSString * author;                      //@synthesize author=_author - In the implementation block
@property (nonatomic,copy) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * version;                     //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSURL * URL;                            //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(NSString *)persistentID;
-(void)setPersistentID:(NSString *)arg1 ;
-(NSNumber *)iTunesStoreID;
-(void)setITunesStoreID:(NSNumber *)arg1 ;
-(void)setOriginator:(NSString *)arg1 ;
-(NSString *)originator;
@end

