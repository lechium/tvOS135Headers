/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AWDServerConnection, NSObject, NSString, NSMutableDictionary;

@interface WFMetricsManager : NSObject {

	AWDServerConnection* _server;
	NSObject*<OS_dispatch_queue> _serverQueue;
	NSString* _processName;
	NSMutableDictionary* _ssidHashes;

}

@property (nonatomic,retain) AWDServerConnection * server;                          //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serverQueue;              //@synthesize serverQueue=_serverQueue - In the implementation block
@property (nonatomic,copy) NSString * processName;                                  //@synthesize processName=_processName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * ssidHashes;                      //@synthesize ssidHashes=_ssidHashes - In the implementation block
+(id)sharedManager;
-(id)init;
-(AWDServerConnection *)server;
-(void)setServer:(AWDServerConnection *)arg1 ;
-(NSString *)processName;
-(void)setProcessName:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)serverQueue;
-(void)setServerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)processEvent:(id)arg1 ;
-(NSMutableDictionary *)ssidHashes;
-(id)SHAForSSID:(id)arg1 ;
-(void)setSsidHashes:(NSMutableDictionary *)arg1 ;
@end

