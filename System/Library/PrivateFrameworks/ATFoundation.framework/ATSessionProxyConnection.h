/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATFoundation/ATSessionProxy.h>
#import <ATFoundation/ATSessionObserver.h>

@class ATSession, NSXPCConnection, NSString;

@interface ATSessionProxyConnection : NSObject <ATSessionProxy, ATSessionObserver> {

	ATSession* _session;
	NSXPCConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(void)stop;
-(void)connect;
-(void)session:(id)arg1 didFinishSessionTask:(id)arg2 ;
-(void)session:(id)arg1 didUpdateSessionTask:(id)arg2 ;
-(void)session:(id)arg1 willBeginSessionTask:(id)arg2 ;
-(id)initWithSession:(id)arg1 connection:(id)arg2 ;
@end

