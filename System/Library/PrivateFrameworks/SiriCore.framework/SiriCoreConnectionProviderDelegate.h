/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SiriCoreConnectionProviderDelegate <NSObject>
@optional
-(void)connectionProvider:(id)arg1 receivedViabilityChangeNotification:(BOOL)arg2;
-(void)connectionProviderReceivedBetterRouteNotification:(id)arg1;

@required
-(void)connectionProvider:(id)arg1 receivedError:(id)arg2;

@end
