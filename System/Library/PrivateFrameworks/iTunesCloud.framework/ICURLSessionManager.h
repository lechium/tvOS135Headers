/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface ICURLSessionManager : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _cachedSessions;

}
+(id)defaultSession;
+(id)highPrioritySession;
+(id)sharedSessionManager;
-(id)init;
-(id)sessionWithIdentifier:(id)arg1 configuration:(id)arg2 ;
-(id)sessionWithQualityOfService:(long long)arg1 ;
-(id)_sessionIdentifierWithQualityOfService:(long long)arg1 ;
-(id)_newSessionWithQualityOfService:(long long)arg1 ;
-(id)sessionWithIdentifier:(id)arg1 ;
-(void)addSession:(id)arg1 withIdentifier:(id)arg2 ;
-(void)removeSessionWithIdentifier:(id)arg1 ;
@end

