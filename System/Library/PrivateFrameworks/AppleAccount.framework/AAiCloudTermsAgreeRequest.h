/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class ACAccount, ACAccountStore;

@interface AAiCloudTermsAgreeRequest : AARequest {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	BOOL _preferPassword;

}

@property (nonatomic,retain) ACAccount * account;              //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) BOOL preferPassword;              //@synthesize preferPassword=_preferPassword - In the implementation block
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(id)urlRequest;
-(id)initWithURLString:(id)arg1 account:(id)arg2 ;
-(BOOL)preferPassword;
-(void)setPreferPassword:(BOOL)arg1 ;
@end

