/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_TtP11AppStoreKitP33_D0BDE9BE40323AA379A31A1054CE7CC715JSCookieExports_.h>

@class NSString, NSDate;

@interface AppStoreKit.JSCookie : NSObject <_TtP11AppStoreKitP33_D0BDE9BE40323AA379A31A1054CE7CC715JSCookieExports_> {

	 name;
	 value;
	 expiresDate;
	 domain;
	 path;

}

@property (readonly,nonatomic) NSString * name; 
@property (readonly,nonatomic) NSString * value; 
@property (readonly,nonatomic) NSDate * expiresDate; 
@property (readonly,nonatomic) NSString * domain; 
@property (readonly,nonatomic) NSString * path; 
-(NSString *)name;
-(id)init;
-(NSString *)domain;
-(NSString *)path;
-(NSDate *)expiresDate;
-(NSString *)value;
@end
