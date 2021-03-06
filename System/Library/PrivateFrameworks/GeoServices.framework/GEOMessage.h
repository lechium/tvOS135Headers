/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSString, NSDictionary, GEOPeer, NSProgress, GEOApplicationAuditToken, GEODataRequestThrottlerToken;

@interface GEOMessage : NSObject {

	NSObject*<OS_xpc_object> _xpcMessage;
	NSString* _messageName;
	NSDictionary* _userInfo;
	GEOPeer* _peer;
	NSProgress* _progressToMirrorOverXPC;
	GEOApplicationAuditToken* _preferredAuditToken;
	GEODataRequestThrottlerToken* _throttleToken;

}

@property (nonatomic,readonly) NSProgress * progress; 
@property (nonatomic,readonly) NSString * messageName;                                      //@synthesize messageName=_messageName - In the implementation block
@property (nonatomic,readonly) NSDictionary * userInfo;                                     //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) GEOPeer * peer;                                              //@synthesize peer=_peer - In the implementation block
@property (nonatomic,readonly) GEOApplicationAuditToken * preferredAuditToken;              //@synthesize preferredAuditToken=_preferredAuditToken - In the implementation block
@property (nonatomic,readonly) GEODataRequestThrottlerToken * throttleToken;                //@synthesize throttleToken=_throttleToken - In the implementation block
-(NSDictionary *)userInfo;
-(NSProgress *)progress;
-(void)sendReply:(id)arg1 ;
-(NSString *)messageName;
-(GEOPeer *)peer;
-(GEODataRequestThrottlerToken *)throttleToken;
-(GEOApplicationAuditToken *)preferredAuditToken;
-(id)initWithXPCMessage:(id)arg1 peer:(id)arg2 ;
-(void)sendReplyWithXPCUserInfo:(id)arg1 ;
@end

