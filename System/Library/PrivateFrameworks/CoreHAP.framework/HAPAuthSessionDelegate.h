/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HAPAuthSessionDelegate <NSObject>
@required
-(void)authSession:(id)arg1 sendAuthExchangeData:(id)arg2;
-(void)authSession:(id)arg1 validateUUID:(id)arg2 token:(id)arg3;
-(void)authSession:(id)arg1 authenticateUUID:(id)arg2 token:(id)arg3;
-(void)authSession:(id)arg1 confirmUUID:(id)arg2 token:(id)arg3;
-(void)authSession:(id)arg1 authComplete:(id)arg2;

@end

