/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class AKUserInformation;

@interface AKAuthorizationScopesUserSelection : NSObject <NSSecureCoding> {

	BOOL _makePrivateEmail;
	AKUserInformation* _userInformation;

}

@property (nonatomic,copy) AKUserInformation * userInformation;              //@synthesize userInformation=_userInformation - In the implementation block
@property (assign,nonatomic) BOOL makePrivateEmail;                          //@synthesize makePrivateEmail=_makePrivateEmail - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(AKUserInformation *)userInformation;
-(BOOL)makePrivateEmail;
-(void)setUserInformation:(AKUserInformation *)arg1 ;
-(void)setMakePrivateEmail:(BOOL)arg1 ;
@end
