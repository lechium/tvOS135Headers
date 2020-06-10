/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACCTransportXPCClientProtocol <NSObject>
@required
-(void)propertiesDidChange:(id)arg1 forConnectionWithUUID:(id)arg2 previousProperties:(id)arg3;
-(void)propertiesDidChange:(id)arg1 forEndpointWithUUID:(id)arg2 previousProperties:(id)arg3 connectionUUID:(id)arg4;
-(void)sendOutgoingData:(id)arg1 forEndpointWithUUID:(id)arg2 connectionUUID:(id)arg3 withReply:(/*^block*/id)arg4;
-(void)authStateDidChange:(int)arg1 forConnectionWithUUID:(id)arg2 previousAuthState:(int)arg3 authType:(int)arg4 connectionIsAuthenticated:(BOOL)arg5 connectionWasAuthenticated:(BOOL)arg6;

@end

