/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSNetServiceBrowserDelegate <NSObject>
@optional
-(void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
-(void)netServiceBrowserDidStopSearch:(id)arg1;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
-(void)netServiceBrowser:(id)arg1 didRemoveDomain:(id)arg2 moreComing:(BOOL)arg3;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
-(void)netServiceBrowser:(id)arg1 didFindDomain:(id)arg2 moreComing:(BOOL)arg3;
-(void)netServiceBrowserWillSearch:(id)arg1;

@end

