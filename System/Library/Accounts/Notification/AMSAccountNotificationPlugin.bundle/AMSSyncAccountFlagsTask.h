/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Accounts/Notification/AMSAccountNotificationPlugin.bundle/AMSAccountNotificationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSTask.h>

@protocol AMSBagProtocol;
@class ACAccount;

@interface AMSSyncAccountFlagsTask : AMSTask {

	ACAccount* _account;
	id<AMSBagProtocol> _bag;

}

@property (nonatomic,retain) ACAccount * account;                 //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) id<AMSBagProtocol> bag;              //@synthesize bag=_bag - In the implementation block
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(id<AMSBagProtocol>)bag;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id)initWithAccount:(id)arg1 bag:(id)arg2 ;
-(id)performSync;
@end

