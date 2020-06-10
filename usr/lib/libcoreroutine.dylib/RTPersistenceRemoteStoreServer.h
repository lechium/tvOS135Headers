/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCStoreServer, NSURL, NSDictionary;

@interface RTPersistenceRemoteStoreServer : NSObject {

	NSXPCStoreServer* _xpcStoreServer;
	NSURL* _storeURL;
	NSURL* _modelURL;
	NSDictionary* _serverOptions;

}

@property (retain) NSXPCStoreServer * xpcStoreServer;              //@synthesize xpcStoreServer=_xpcStoreServer - In the implementation block
@property (retain) NSURL * storeURL;                               //@synthesize storeURL=_storeURL - In the implementation block
@property (retain) NSURL * modelURL;                               //@synthesize modelURL=_modelURL - In the implementation block
@property (retain) NSDictionary * serverOptions;                   //@synthesize serverOptions=_serverOptions - In the implementation block
-(id)init;
-(void)startListening;
-(NSURL *)modelURL;
-(void)setModelURL:(NSURL *)arg1 ;
-(NSURL *)storeURL;
-(void)setStoreURL:(NSURL *)arg1 ;
-(id)initWithStoreURL:(id)arg1 modelURL:(id)arg2 options:(id)arg3 ;
-(NSDictionary *)serverOptions;
-(void)setXpcStoreServer:(NSXPCStoreServer *)arg1 ;
-(NSXPCStoreServer *)xpcStoreServer;
-(void)setServerOptions:(NSDictionary *)arg1 ;
@end

