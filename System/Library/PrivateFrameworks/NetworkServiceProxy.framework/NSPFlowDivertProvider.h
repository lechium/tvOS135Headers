/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEAppProxyProvider.h>

@class NSPManager;

@interface NSPFlowDivertProvider : NEAppProxyProvider {

	NSPManager* _manager;

}

@property (retain) NSPManager * manager;              //@synthesize manager=_manager - In the implementation block
-(id)init;
-(NSPManager *)manager;
-(void)setManager:(NSPManager *)arg1 ;
-(BOOL)handleNewFlow:(id)arg1 ;
-(void)startProxyWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopProxyWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

