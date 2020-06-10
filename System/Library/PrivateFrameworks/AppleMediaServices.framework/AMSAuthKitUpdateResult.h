/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccount, NSDictionary;

@interface AMSAuthKitUpdateResult : NSObject {

	ACAccount* _account;
	NSDictionary* _authenticationResults;
	unsigned long long _credentialSource;

}

@property (nonatomic,readonly) ACAccount * account;                               //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSDictionary * authenticationResults;              //@synthesize authenticationResults=_authenticationResults - In the implementation block
@property (nonatomic,readonly) unsigned long long credentialSource;               //@synthesize credentialSource=_credentialSource - In the implementation block
+(id)_createUpdatedAccount:(id)arg1 usingAuthenticationResults:(id)arg2 option:(id)arg3 ;
-(ACAccount *)account;
-(unsigned long long)credentialSource;
-(NSDictionary *)authenticationResults;
-(id)initWithAccount:(id)arg1 authenticationResults:(id)arg2 credentialSource:(unsigned long long)arg3 options:(id)arg4 ;
@end

