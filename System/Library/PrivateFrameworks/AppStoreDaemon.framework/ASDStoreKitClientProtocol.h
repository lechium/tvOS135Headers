/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASDStoreKitClientProtocol <ASDNotificationCenterDialogObserver>
@required
-(void)updatedTransactions:(id)arg1;
-(void)removedTransactions:(id)arg1;
-(void)downloadAdded:(id)arg1;
-(void)downloadStatusChanged:(id)arg1;
-(void)downloadRemoved:(id)arg1;
-(void)storefrontChanged:(id)arg1;
-(void)shouldContinueTransaction:(id)arg1 withNewStorefront:(id)arg2 replyBlock:(/*^block*/id)arg3;
-(void)askToShowMessageWithReplyBlock:(/*^block*/id)arg1;

@end

