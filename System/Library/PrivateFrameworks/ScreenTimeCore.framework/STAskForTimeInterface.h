/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol STAskForTimeInterface <NSObject>
@required
-(void)sendAskForTimeRequest:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)approveExceptionForRequest:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchLastResponseForRequestedResourceIdentifier:(id)arg1 usageType:(long long)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)handleAnswer:(long long)arg1 requestIdentifier:(id)arg2 timeApproved:(id)arg3 completionHandler:(/*^block*/id)arg4;

@end
