/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, NSMutableDictionary, GEONavdClientInfo;

@interface GEONavdPeer : NSObject {

	NSXPCConnection* _connection;
	NSMutableDictionary* _entitlementCache;
	GEONavdClientInfo* _clientInfo;
	BOOL _expectingUpdates;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) GEONavdClientInfo * clientInfo;              //@synthesize clientInfo=_clientInfo - In the implementation block
@property (assign,nonatomic) BOOL expectingUpdates;                         //@synthesize expectingUpdates=_expectingUpdates - In the implementation block
-(void)dealloc;
-(NSXPCConnection *)connection;
-(BOOL)hasEntitlement:(id)arg1 ;
-(id)initWithXPCConnection:(id)arg1 ;
-(void)updateConnection:(id)arg1 ;
-(GEONavdClientInfo *)clientInfo;
-(BOOL)expectingUpdates;
-(void)setExpectingUpdates:(BOOL)arg1 ;
@end

