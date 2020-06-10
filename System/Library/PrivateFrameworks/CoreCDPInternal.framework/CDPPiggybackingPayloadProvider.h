/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPKeychainCircleProxy.h>

@class KCJoiningRequestCircleSession, KCJoiningRequestAccountCircleDelegate, NSString;

@interface CDPPiggybackingPayloadProvider : NSObject <CDPKeychainCircleProxy> {

	KCJoiningRequestCircleSession* _session;
	KCJoiningRequestAccountCircleDelegate* _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)proxyWithSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)isComplete;
-(id)initiatingPayload:(id*)arg1 ;
-(id)processIncomingPayload:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsInteractiveAuth;
-(BOOL)requiresInitialSync;
@end

