/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WiFiShimDelegate <NSObject>
@optional
-(void)wifiShim_BSSIDChangedForInterface:(id)arg1;
-(void)wifiShim_WiFiManagerHasRestarted;
-(void)wifiShim_RSSIChangedTo:(long long)arg1 forInterface:(id)arg2;
-(void)wifiShim_L2NewMetrics:(id)arg1 forInterface:(id)arg2;
-(void)wifiShim_L2TriggerDisconnectEdge:(BOOL)arg1 forInterface:(id)arg2;
-(void)wifiShim_AWDLLinkUp:(BOOL)arg1;
-(void)wifiShim_InfraAdminDisable:(id)arg1 bssid:(id)arg2;
-(void)wifiShim_HintForFallback:(BOOL)arg1 reasons:(id)arg2;
-(void)wifiShim_PreferredNetworksChanged:(id)arg1;

@end

