/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TRDeviceSetupServerDelegate <NSObject>
@optional
-(void)deviceSetupServerDidPromptToBeginSetup:(id)arg1;
-(void)deviceSetupServer:(id)arg1 didFailSetupWithError:(id)arg2;
-(void)deviceSetupServer:(id)arg1 didBeginSetupWithDeviceName:(id)arg2;
-(void)deviceSetupServer:(id)arg1 willRequestAuthenticationForAccount:(unsigned long long)arg2;
-(id)deviceSetupServer:(id)arg1 localizedAuthenticationMessageForAccount:(unsigned long long)arg2;
-(void)deviceSetupServer:(id)arg1 didReceiveSetupInfo:(id)arg2;
-(void)deviceSetupServerDidFinishSetup:(id)arg1;

@required
-(id)accountsToAuthenticateForDeviceSetupServer:(id)arg1;
-(void)deviceSetupServer:(id)arg1 connectToNetworkWithRecommendedSSID:(id)arg2 password:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)deviceSetupServer:(id)arg1 authenticateAccount:(unsigned long long)arg2 withInfo:(id)arg3 completionHandler:(/*^block*/id)arg4;

@end

