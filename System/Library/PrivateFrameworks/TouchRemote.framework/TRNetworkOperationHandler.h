/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TROperationHandler.h>

@class NSString;

@interface TRNetworkOperationHandler : NSObject <TROperationHandler> {

	/*^block*/id _joinNetworkHandler;

}

@property (nonatomic,copy) id joinNetworkHandler;                   //@synthesize joinNetworkHandler=_joinNetworkHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerMessageHandlersForSession:(id)arg1 ;
-(void)_handleNetworkRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(id)initWithJoinNetworkHandler:(/*^block*/id)arg1 ;
-(id)joinNetworkHandler;
-(void)setJoinNetworkHandler:(id)arg1 ;
@end

