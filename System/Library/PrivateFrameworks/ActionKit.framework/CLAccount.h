/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/ActionKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSURL, NSString, NSDate, CLSocket;

@interface CLAccount : NSObject <NSCopying, NSCoding> {

	NSURL* _domain;
	NSURL* _domainHomePage;
	BOOL _alphaUser;
	BOOL _uploadsArePrivate;
	NSString* _email;
	NSDate* _subscriptionExpiresAt;
	long long _type;
	CLSocket* _socket;

}

@property (nonatomic,retain) NSURL * domain;                                 //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSURL * domainHomePage;                         //@synthesize domainHomePage=_domainHomePage - In the implementation block
@property (assign,getter=isAlphaUser,nonatomic) BOOL alphaUser;              //@synthesize alphaUser=_alphaUser - In the implementation block
@property (assign,nonatomic) BOOL uploadsArePrivate;                         //@synthesize uploadsArePrivate=_uploadsArePrivate - In the implementation block
@property (nonatomic,copy) NSString * email;                                 //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSDate * subscriptionExpiresAt;                 //@synthesize subscriptionExpiresAt=_subscriptionExpiresAt - In the implementation block
@property (assign,nonatomic) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) CLSocket * socket;                              //@synthesize socket=_socket - In the implementation block
+(id)accountWithEmail:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(NSURL *)domain;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDomain:(NSURL *)arg1 ;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(CLSocket *)socket;
-(void)setSocket:(CLSocket *)arg1 ;
-(id)initWithEmail:(id)arg1 ;
-(BOOL)uploadsArePrivate;
-(void)setUploadsArePrivate:(BOOL)arg1 ;
-(NSDate *)subscriptionExpiresAt;
-(void)setSubscriptionExpiresAt:(NSDate *)arg1 ;
-(NSURL *)domainHomePage;
-(void)setDomainHomePage:(NSURL *)arg1 ;
-(BOOL)isAlphaUser;
-(void)setAlphaUser:(BOOL)arg1 ;
@end

