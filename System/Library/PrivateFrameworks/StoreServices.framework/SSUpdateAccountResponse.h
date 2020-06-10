/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSAccount;

@interface SSUpdateAccountResponse : NSObject {

	unsigned long long _credentialSource;
	SSAccount* _updatedAccount;

}

@property (nonatomic,readonly) unsigned long long credentialSource;              //@synthesize credentialSource=_credentialSource - In the implementation block
@property (nonatomic,readonly) SSAccount * updatedAccount;                       //@synthesize updatedAccount=_updatedAccount - In the implementation block
-(SSAccount *)updatedAccount;
-(unsigned long long)credentialSource;
-(id)initWithUpdatedAccount:(id)arg1 credentialSource:(unsigned long long)arg2 ;
@end

