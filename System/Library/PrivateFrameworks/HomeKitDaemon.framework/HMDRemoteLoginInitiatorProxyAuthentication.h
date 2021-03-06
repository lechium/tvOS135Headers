/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDRemoteLoginInitiatorAuthentication.h>

@class NSDictionary;

@interface HMDRemoteLoginInitiatorProxyAuthentication : HMDRemoteLoginInitiatorAuthentication {

	NSDictionary* _authResults;

}

@property (nonatomic,readonly) NSDictionary * authResults;              //@synthesize authResults=_authResults - In the implementation block
+(id)logCategory;
-(id)description;
-(void)dealloc;
-(int)loginType;
-(void)_authenticate;
-(NSDictionary *)authResults;
-(id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 authResults:(id)arg6 ;
-(void)authenticate;
@end

