/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, ACAccountStore, ACAccount;

@interface AAQuotaDepletionAlert : NSObject {

	NSString* _dataclass;
	ACAccountStore* _accountStore;
	ACAccount* _primaryAccount;

}
+(BOOL)_isDisabledDataclass:(id)arg1 ;
-(id)init;
-(id)_deviceSpecificLocalizedString:(id)arg1 ;
-(id)_primaryAccount;
-(void)showWithHandler:(/*^block*/id)arg1 ;
-(id)initForDataclass:(id)arg1 ;
-(BOOL)showIfNecessaryWithHandler:(/*^block*/id)arg1 ;
@end

