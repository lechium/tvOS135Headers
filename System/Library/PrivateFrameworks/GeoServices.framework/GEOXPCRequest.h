/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject, NSError, NSString, GEOPeer, GEOMapServiceTraits, GEOApplicationAuditToken, GEODataRequestThrottlerToken, NSProgress;

@interface GEOXPCRequest : NSObject <NSSecureCoding> {

	unsigned char _flags;
	NSObject*<OS_xpc_object> _object;
	NSError* _error;
	NSString* _service;
	NSString* _method;
	GEOPeer* _peer;
	GEOMapServiceTraits* _traits;
	GEOApplicationAuditToken* _auditToken;
	GEODataRequestThrottlerToken* _throttleToken;
	NSProgress* _progressToMirrorOverXPC;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> object;                             //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) NSString * service;                                          //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSString * method;                                           //@synthesize method=_method - In the implementation block
@property (nonatomic,retain) GEOPeer * peer;                                              //@synthesize peer=_peer - In the implementation block
@property (nonatomic,retain) GEOApplicationAuditToken * preferredAuditToken;              //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                       //@synthesize progressToMirrorOverXPC=_progressToMirrorOverXPC - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> replyDictionary; 
@property (nonatomic,readonly) unsigned char flags;                                       //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) GEOMapServiceTraits * traits;                              //@synthesize traits=_traits - In the implementation block
@property (nonatomic,readonly) GEODataRequestThrottlerToken * throttleToken;              //@synthesize throttleToken=_throttleToken - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)reportsProgress;
-(id)description;
-(id)init;
-(NSObject*<OS_xpc_object>)object;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setObject:(NSObject*<OS_xpc_object>)arg1 ;
-(unsigned char)flags;
-(NSString *)method;
-(NSProgress *)progress;
-(void)setProgress:(NSProgress *)arg1 ;
-(NSString *)service;
-(void)setService:(NSString *)arg1 ;
-(void)send:(id)arg1 ;
-(void)setMethod:(NSString *)arg1 ;
-(GEOPeer *)peer;
-(GEOMapServiceTraits *)traits;
-(GEODataRequestThrottlerToken *)throttleToken;
-(id)_prepareRequest;
-(id)_createConnectionWithQueue:(id)arg1 ;
-(id)initWithMessage:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 throttleToken:(id)arg4 ;
-(NSObject*<OS_xpc_object>)replyDictionary;
-(void)send:(id)arg1 withReply:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)sendSync:(id)arg1 error:(id*)arg2 ;
-(void)setPeer:(GEOPeer *)arg1 ;
-(GEOApplicationAuditToken *)preferredAuditToken;
-(void)setPreferredAuditToken:(GEOApplicationAuditToken *)arg1 ;
@end

