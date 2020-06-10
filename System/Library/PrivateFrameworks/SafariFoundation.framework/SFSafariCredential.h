/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface SFSafariCredential : NSObject <NSSecureCoding> {

	NSString* _user;
	NSString* _password;
	NSString* _site;
	NSDate* _creationDate;

}

@property (nonatomic,readonly) NSString * user;                    //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) NSString * password;                //@synthesize password=_password - In the implementation block
@property (nonatomic,readonly) NSString * site;                    //@synthesize site=_site - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;              //@synthesize creationDate=_creationDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)user;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)password;
-(NSDate *)creationDate;
-(NSString *)site;
-(id)initWithUser:(id)arg1 password:(id)arg2 site:(id)arg3 creationDate:(id)arg4 ;
@end
