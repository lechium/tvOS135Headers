/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CPMS.framework/CPMS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPMSAgentProtocol <NSObject>
@required
+(BOOL)isCPMSSupported;
+(id)sharedCPMSAgent;
+(BOOL)isCPMSSupportedForClient:(long long)arg1;
+(BOOL)isCPMSSupportedForAnyClient;
+(id)createCPMSAgentSharedInstance;
-(id)requestPowerBudget:(id)arg1 forClient:(long long)arg2 error:(id*)arg3;
-(BOOL)acknowledgePowerBudget:(id)arg1 forClientId:(long long)arg2 error:(id*)arg3;
-(BOOL)registerClientWithDescription:(id)arg1 error:(id*)arg2;

@end
