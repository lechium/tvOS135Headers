/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDate;

@interface CTCarrierSpaceAuthInfo : NSObject <NSSecureCoding> {

	BOOL _shouldCache;
	NSData* _accessToken;
	NSData* _refreshToken;
	NSDate* _expiresAt;

}

@property (nonatomic,retain) NSData * accessToken;               //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,retain) NSData * refreshToken;              //@synthesize refreshToken=_refreshToken - In the implementation block
@property (nonatomic,retain) NSDate * expiresAt;                 //@synthesize expiresAt=_expiresAt - In the implementation block
@property (assign,nonatomic) BOOL shouldCache;                   //@synthesize shouldCache=_shouldCache - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)expiresAt;
-(BOOL)shouldCache;
-(void)setAccessToken:(NSData *)arg1 ;
-(NSData *)accessToken;
-(void)setShouldCache:(BOOL)arg1 ;
-(void)setExpiresAt:(NSDate *)arg1 ;
-(NSData *)refreshToken;
-(void)setRefreshToken:(NSData *)arg1 ;
@end

