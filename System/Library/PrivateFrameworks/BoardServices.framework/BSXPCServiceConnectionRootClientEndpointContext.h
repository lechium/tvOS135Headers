/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BoardServices/BSXPCServiceConnectionRootContext.h>

@protocol OS_xpc_object;
@class NSObject;

@interface BSXPCServiceConnectionRootClientEndpointContext : BSXPCServiceConnectionRootContext {

	NSObject*<OS_xpc_object> _endpoint;
	BOOL _nonLaunching;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> endpoint;                    //@synthesize endpoint=_endpoint - In the implementation block
@property (getter=isNonLaunching,nonatomic,readonly) BOOL nonLaunching;              //@synthesize nonLaunching=_nonLaunching - In the implementation block
+(id)uniqueClientContextWithEndpoint:(id)arg1 nonLaunching:(BOOL)arg2 description:(id)arg3 ;
-(NSObject*<OS_xpc_object>)endpoint;
-(BOOL)isClient;
-(id)_initWithEndpoint:(id)arg1 nonLaunching:(BOOL)arg2 eDesc:(id)arg3 ;
-(BOOL)isNonLaunching;
@end
