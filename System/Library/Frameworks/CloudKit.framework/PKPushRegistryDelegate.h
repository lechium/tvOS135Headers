/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPushRegistryDelegate <NSObject>
@optional
-(void)pushRegistry:(id)arg1 didReceiveIncomingPushWithPayload:(id)arg2 forType:(id)arg3;
-(void)pushRegistry:(id)arg1 didReceiveIncomingPushWithPayload:(id)arg2 forType:(id)arg3 withCompletionHandler:(/*^block*/id)arg4;
-(void)pushRegistry:(id)arg1 didInvalidatePushTokenForType:(id)arg2;

@required
-(void)pushRegistry:(id)arg1 didUpdatePushCredentials:(id)arg2 forType:(id)arg3;

@end

