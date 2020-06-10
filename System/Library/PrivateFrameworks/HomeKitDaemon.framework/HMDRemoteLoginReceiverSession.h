/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString, HMDRemoteLoginAuthentication;

@interface HMDRemoteLoginReceiverSession : HMFObject {

	NSString* _sessionID;
	HMDRemoteLoginAuthentication* _remoteAuthentication;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) NSString * sessionID;                                             //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) HMDRemoteLoginAuthentication * remoteAuthentication;              //@synthesize remoteAuthentication=_remoteAuthentication - In the implementation block
@property (nonatomic,readonly) id completion;                                                    //@synthesize completion=_completion - In the implementation block
-(id)description;
-(void)dealloc;
-(id)completion;
-(NSString *)sessionID;
-(HMDRemoteLoginAuthentication *)remoteAuthentication;
-(id)initWithSessionID:(id)arg1 remoteAuthentication:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

